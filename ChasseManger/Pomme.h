// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nourriture.h"
#include "Pomme.generated.h"

/**
 * 
 */
UCLASS()
class CHASSEMANGER_API APomme : public ANourriture
{
	GENERATED_BODY()

public:
	APomme();
	void estAttrape_Implementation() override;

};