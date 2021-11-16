// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LvlUpProjectHUD.generated.h"

UCLASS()
class ALvlUpProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALvlUpProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

