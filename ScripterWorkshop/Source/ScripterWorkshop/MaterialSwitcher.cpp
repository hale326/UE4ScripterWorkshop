// Fill out your copyright notice in the Description page of Project Settings.

#include "MaterialSwitcher.h"


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

	// ...
}

