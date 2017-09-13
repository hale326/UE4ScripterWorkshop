// Fill out your copyright notice in the Description page of Project Settings.

#include "SwitchableMaterials.h"


// Sets default values for this component's properties
USwitchableMaterials::USwitchableMaterials()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USwitchableMaterials::BeginPlay()
{
	Super::BeginPlay();

	MaterialsIndex = 0;	
	OwnerMeshComponent = GetOwner()->FindComponentByClass<UMeshComponent>();

	if (OwnerMeshComponent != nullptr)
	{
		AddDefaultMaterialToArray();
	}
}


// Called every frame
void USwitchableMaterials::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USwitchableMaterials::UpdateIndex(bool Add)
{
	if (Add)
	{
		if (MaterialsIndex < AlternativeMaterials.Num())
		{
			MaterialsIndex++;
		}
	}
	else if (!Add)
	{
		if (MaterialsIndex > 0)
		{
			MaterialsIndex--;
		}
	}

	return;
}

void USwitchableMaterials::AddDefaultMaterialToArray()
{
	// Get asset default material
	UMaterialInterface *DefaultMaterial = OwnerMeshComponent->GetMaterial(0)->GetMaterial();

	// Add asset default material as the first in the array so that it's possible to set it back
	AlternativeMaterials.Insert(DefaultMaterial, 0);

	return;
}

