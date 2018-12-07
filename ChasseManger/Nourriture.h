// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Nourriture.generated.h"

UCLASS()
class CHASSEMANGER_API ANourriture : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANourriture();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Calorie")
	float calorie;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintNativeEvent)
	void estAttrape();
	virtual void estAttrape_Implementation();
	FORCEINLINE float getCalorie() { return this->calorie; }
	FORCEINLINE class UStaticMeshComponent * getCorpsNourriture() const { return this->corpsNourriture; }
	FORCEINLINE class UStaticMeshComponent * getTigeNourriture() const { return this->tigeNourriture; }

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuel", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent * corpsNourriture;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuel", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent * tigeNourriture;

};