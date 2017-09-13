// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Core/Public/Math/Color.h"
#include "Engine/StaticMeshActor.h"
#include "Materials/Material.h"
#include "Components/MeshComponent.h"
#include "Components/ActorComponent.h"
#include "MaterialSwitcher.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SCRIPTERWORKSHOP_API UMaterialSwitcher : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMaterialSwitcher();

	UPROPERTY(EditAnywhere, Category = "Line Casting")
		float RayLength = 150.0f;
	UPROPERTY(EditAnywhere, Category = "Line Casting")
		bool ShowDebugLine = true;
	UPROPERTY(EditAnywhere, Category = "Line Casting")
		bool DebugLineAlwaysOn = false;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void SetupInputComponent();
	void SwitchToNextMaterial();
	void SwitchToPreviousMaterial();

	FHitResult GetFirstPhysicalBodyInReach();

	FVector GetRayStartPosition();
	FVector GetRayEndPosition();

	// Material will be changed for this mesh
	UMeshComponent *CollidedActorMeshComponent = nullptr;

	TArray<UMaterialInterface*> MaterialsArray;

};
