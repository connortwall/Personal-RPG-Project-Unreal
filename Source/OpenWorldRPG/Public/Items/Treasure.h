// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Item.h"
#include "Treasure.generated.h"

/**
 * 
 */
UCLASS()
class OPENWORLDRPG_API ATreasure : public AItem
{
	GENERATED_BODY()

protected:
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
private:
	UPROPERTY(EditAnywhere, Category = Sounds)
	USoundBase* PickupSound;

	UPROPERTY(EditAnywhere, Category = "Treature Properties")
	int32 Gold;
};
