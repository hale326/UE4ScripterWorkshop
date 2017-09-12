// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Materials/Material.h"
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

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
