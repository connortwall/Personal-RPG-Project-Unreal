// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"


class UGameOverlay;

UCLASS()
class OPENWORLDRPG_API AGameHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditDefaultsOnly, Category = Game)
	TSubclassOf<UGameOverlay> GameOverlayClass;

	UPROPERTY()
	UGameOverlay* GameOverlay;

public:
	FORCEINLINE UGameOverlay* GetGameOverlay() const { return GameOverlay; }
};
