// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ennemi.h"
#include "Chat.generated.h"

/**
 * 
 */
UCLASS()
class CHASSEMANGER_API AChat : public AEnnemi
{
	GENERATED_BODY()

public:
	AChat();
	UFUNCTION(BlueprintPure, Category = "Etat")
	int getTaille();
	UFUNCTION(BlueprintCallable, Category = "Attaque")
	void griffer(AActor* acteur);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Options", meta = (AllowPrivateAccess = "true"))
	int taille;
};