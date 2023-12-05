// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/GameOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UGameOverlay::SetHealthBarPercent(float Percent)
{
	if (HealthProgressBar)
	{
		HealthProgressBar->SetPercent(Percent);
	}
}

void UGameOverlay::SetStaminaBarPercent(float Percent)
{
	if (StaminaProgressBar)
	{
		StaminaProgressBar->SetPercent(Percent);
	}
}

void UGameOverlay::SetGold(int32 Gold)
{
	if (GoldCountText)
	{
		// format  int32 into string into text
		const FString String = FString::Printf(TEXT("%d"), Gold);
		const FText Text = FText::FromString(String);
		GoldCountText->SetText(Text);
	}
}

void UGameOverlay::SetExp(int32 Exp)
{
	if (ExpCountText)
	{
		const FString String = FString::Printf(TEXT("%d"), Exp);
		const FText Text = FText::FromString(String);
		ExpCountText->SetText(Text);
	}
}

