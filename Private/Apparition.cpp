// Fill out your copyright notice in the Description page of Project Settings.

#include "Apparition.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "Runtime/Engine/Public/TimerManager.h"

// Sets default values
AApparition::AApparition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = true;
	this->lieuApparition = CreateDefaultSubobject<UBoxComponent>(TEXT("Lieu d'apparition"));
	this->RootComponent = this->lieuApparition;
	this->delaiMinimum = 1.0f;
	this->delaiMaximum = 4.5f;
}

// Called when the game starts or when spawned
void AApparition::BeginPlay()
{
	Super::BeginPlay();
	this->delai = FMath::FRandRange(delaiMinimum, delaiMaximum);
	GetWorldTimerManager().SetTimer(minuteur, this, &AApparition::apparaitre, delai, true);
}

// Called every frame
void AApparition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector AApparition::getPointsAuHasard()
{
	FVector origine = this->lieuApparition->Bounds.Origin;
	FVector etendue = this->lieuApparition->Bounds.BoxExtent;
	return UKismetMathLibrary::RandomPointInBoundingBox(origine, etendue);
}

void AApparition::apparaitre()
{
	UWorld * monde = GetWorld();
	if (NULL == this->objetApparition) return;
	if (NULL == monde) return;

	FActorSpawnParameters parametresApparition;
	parametresApparition.Owner = this;
	parametresApparition.Instigator = Instigator;

	FVector lieuApparition = this->getPointsAuHasard();

	FRotator rotation;
	rotation.Yaw = FMath::FRand() * 360.0f;
	rotation.Pitch = FMath::FRand() * 360.0f;
	rotation.Roll = FMath::FRand() * 360.0f;

	monde->SpawnActor<AActor>(this->objetApparition, lieuApparition, rotation, parametresApparition);

	this->delai = FMath::FRandRange(delaiMinimum, delaiMaximum);
}