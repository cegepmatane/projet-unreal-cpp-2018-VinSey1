// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ennemi.h"
#include "Chien.generated.h"

/**
 * 
 */
UCLASS()
class CHASSEMANGER_API AChien : public AEnnemi
{
	GENERATED_BODY()

public:
	AChien();
	UFUNCTION(BlueprintPure, Category = "Etat")
		int getDegats();
	UFUNCTION(BlueprintCallable, Category = "Attaque")
		void mordre(AActor* acteur);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Options", meta = (AllowPrivateAccess = "true"))
		int degats;
};