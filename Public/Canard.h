// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ennemi.h"
#include "Canard.generated.h"

/**
 * 
 */
UCLASS()
class CHASSEMANGER_API ACanard : public AEnnemi
{
	GENERATED_BODY()
	
public:
	ACanard();
	UFUNCTION(BlueprintPure, Category = "Etat")
		int getZoneDeDetection();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Options", meta = (AllowPrivateAccess = "true"))
		int zoneDeDetection;
};