// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TestingGrounds_FPSHUD.generated.h"

UCLASS()
class ATestingGrounds_FPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestingGrounds_FPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

