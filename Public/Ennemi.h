// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ennemi.generated.h"

UCLASS()
class CHASSEMANGER_API AEnnemi : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnnemi();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuel", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent * corpsEnnemi;
	int vitesseDeDeplacement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE class UStaticMeshComponent * getCorpsEnnemi() const { return this->corpsEnnemi; }
	UFUNCTION(BlueprintPure, Category = "Etat")
		int getVitesseDeDeplacement();

};
