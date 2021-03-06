// Fill out your copyright notice in the Description page of Project Settings.

#include "MaterialSwitcher.h"
#include "Classes/Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Classes/Components/InputComponent.h"
#include "SwitchableMaterials.h"

// Sets default values for this component's properties
UMaterialSwitcher::UMaterialSwitcher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UMaterialSwitcher::BeginPlay()
{
	Super::BeginPlay();	
	SetupInputComponent();
}


// Called every frame
void UMaterialSwitcher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (ShowDebugLine && DebugLineAlwaysOn)
	{
		// Draws a debug line to visualize the range of the raytrace selection
		UKismetSystemLibrary::DrawDebugLine(
			GetWorld(),
			GetRayStartPosition(),
			GetRayEndPosition(),
			FColor(255, 0, 0, 1),
			0.0f,
			10.0f
		);
	}
}

void UMaterialSwitcher::SetupInputComponent()
{
	UInputComponent *Input = nullptr;

	Input = GetOwner()->FindComponentByClass<UInputComponent>();

	if (Input)
	{
		Input->BindAction("Next Material", IE_Pressed, this, &UMaterialSwitcher::SwitchToNextMaterial);
		Input->BindAction("Previous Material", IE_Pressed, this, &UMaterialSwitcher::SwitchToPreviousMaterial);
	}
}

/*TODO
*Change MaterialsArray into a pointer
*Allow to select the material slot for the alternative material
*/

void UMaterialSwitcher::SwitchToNextMaterial()
{
	auto HitResult = GetFirstPhysicalBodyInReach();
	auto HitResultActor = HitResult.GetActor();

	if (HitResultActor)
	{
		USwitchableMaterials *SwitchableMaterialsComponent = HitResultActor->FindComponentByClass<USwitchableMaterials>();


		if (SwitchableMaterialsComponent)
		{
			UE_LOG(LogTemp, Warning, TEXT("SwitchableMaterials component found in %s"), *HitResultActor->GetName());

			MaterialsArray = SwitchableMaterialsComponent->AlternativeMaterials;
			CollidedActorMeshComponent = HitResultActor->FindComponentByClass<UMeshComponent>();

			if (CollidedActorMeshComponent)
			{
				int MaterialIndex = SwitchableMaterialsComponent->MaterialsIndex;

				if (MaterialIndex < (MaterialsArray.Num() - 1))
				{
					CollidedActorMeshComponent->SetMaterial(0, MaterialsArray[MaterialIndex + 1]);
					SwitchableMaterialsComponent->UpdateIndex(true);
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("The currently assigned material was the last available on %s"), *HitResultActor->GetName());
					return;
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("ERROR: No MeshComponent found on %s"), *HitResultActor->GetName());
				return;
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("ERROR: No SwitchableMaterialsComponent found on %s"), *HitResultActor->GetName());
			return;
		}
	}

}

void UMaterialSwitcher::SwitchToPreviousMaterial()
{
	auto HitResult = GetFirstPhysicalBodyInReach();
	auto HitResultActor = HitResult.GetActor();

	if (HitResultActor)
	{
		USwitchableMaterials *SwitchableMaterialsComponent = HitResultActor->FindComponentByClass<USwitchableMaterials>();


		if (SwitchableMaterialsComponent)
		{
			UE_LOG(LogTemp, Warning, TEXT("SwitchableMaterials component found in %s"), *HitResultActor->GetName());

			MaterialsArray = SwitchableMaterialsComponent->AlternativeMaterials;
			CollidedActorMeshComponent = HitResultActor->FindComponentByClass<UMeshComponent>();

			if (CollidedActorMeshComponent)
			{
				int MaterialIndex = SwitchableMaterialsComponent->MaterialsIndex;

				if (MaterialIndex > 0)
				{
					CollidedActorMeshComponent->SetMaterial(0, MaterialsArray[MaterialIndex - 1]);
					SwitchableMaterialsComponent->UpdateIndex(false);
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("The currently assigned material was the first available on %s"), *HitResultActor->GetName());
					return;
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("ERROR: No MeshComponent found on %s"), *HitResultActor->GetName());
				return;
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("ERROR: No SwitchableMaterialsComponent found on %s"), *HitResultActor->GetName());
			return;
		}
	}
}

FHitResult UMaterialSwitcher::GetFirstPhysicalBodyInReach()
{
	// Starting and ending position of Linetrace
	FVector StartPosition = GetRayStartPosition();
	FVector EndPosition = GetRayEndPosition();

	if (ShowDebugLine && DebugLineAlwaysOn == false)
	{
		// Draws a debug line to visualize the range of the raytrace selection
		UKismetSystemLibrary::DrawDebugLine(
			GetWorld(),
			StartPosition,
			EndPosition,
			FColor(255, 0, 0, 1),
			0.0f,
			10.0f
		);
	}	
		
	FHitResult HitResult;

	// Additional collision parameters
	FCollisionQueryParams CollisionParameters (FName(TEXT("")), false, GetOwner());

	// Shoot Linetrace to get first colliding object it meets, be it static or dynamic
	GetWorld()->LineTraceSingleByObjectType(
		OUT HitResult,
		StartPosition,
		EndPosition,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_WorldDynamic && ECollisionChannel::ECC_WorldStatic),
		CollisionParameters
	);

	// Actor that got hit by lineTrace
	AActor* ActorHit = HitResult.GetActor();

	if (ActorHit != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Detected collision with %s"), *(ActorHit->GetName()));
	}	

	return HitResult;
}

FVector UMaterialSwitcher::GetRayStartPosition()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation, 
		OUT PlayerViewPointRotation);

	FVector RayStartingPos = PlayerViewPointLocation;
	return RayStartingPos;
}

FVector UMaterialSwitcher::GetRayEndPosition()
{	
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation, 
		OUT PlayerViewPointRotation);

	FVector RayEndingPos = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * RayLength;
	return RayEndingPos;
}



