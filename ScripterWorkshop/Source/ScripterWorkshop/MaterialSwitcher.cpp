// Fill out your copyright notice in the Description page of Project Settings.

#include "MaterialSwitcher.h"
#include "Classes/Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

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

	// ...
	
}


// Called every frame
void UMaterialSwitcher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	GetFirstPhysicalBodyInReach();
}

void UMaterialSwitcher::GetFirstPhysicalBodyInReach()
{
	// Draws a debug line to visualize the range of the raytrace selection
	UKismetSystemLibrary::DrawDebugLine(
		GetWorld(),
		GetRayStartPosition(),
		GetRayEndPosition(),
		Color.Red,
		0.0f,
		10.0f
	);

	return;
}

FVector UMaterialSwitcher::GetRayStartPosition()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);

	FVector RayStartingPos = PlayerViewPointLocation;
	return RayStartingPos;
}

FVector UMaterialSwitcher::GetRayEndPosition()
{	
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);

	FVector RayEndingPos = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * RayLength;
	return RayEndingPos;
}



