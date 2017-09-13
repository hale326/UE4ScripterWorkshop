// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Materials/Material.h"
#include "Components/MeshComponent.h"
#include "SwitchableMaterials.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SCRIPTERWORKSHOP_API USwitchableMaterials : public UActorComponent
{
	GENERATED_BODY()


	/*TODO
	*Set default material as first in AlternativeMaterials Array
	*/
public:	
	// Sets default values for this component's properties
	USwitchableMaterials();

	// Materials to be switched
	UPROPERTY(EditAnywhere, Category = "Materials")
	TArray<UMaterial*> AlternativeMaterials;

	// Index telling currently assigned material
	int32 MaterialsIndex = NULL;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// function used to update the index of currently assigned material
	void UpdateIndex(bool Add);

	// function used to add the default material as the first in the AlternativeMaterials array
	void AddDefaultMaterialToArray();

private:
	UMeshComponent *OwnerMeshComponent = nullptr;
};
