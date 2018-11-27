// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Apparition.generated.h"

UCLASS()
class CHASSEMANGER_API AApparition : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AApparition();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Apparition")
	TSubclassOf<class AActor> objetApparition;
	FTimerHandle minuteur;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparition")
	float delaiMinimum;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparition")
	float delaiMaximum;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Apparition", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent * lieuApparition;
	float delai = 4.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE class UBoxComponent* getLieuApparition() const { return this->lieuApparition; }
	UFUNCTION(BlueprintPure, Category = "Apparition")
	FVector getPointsAuHasard();
	void apparaitre();
	
};