// Fill out your copyright notice in the Description page of Project Settings.

#include "Nourriture.h"
#include "Components/StaticMeshComponent.h"
#include "Engine.h"

// Sets default values
ANourriture::ANourriture()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	this->calorie = 150.0f;
	this->corpsNourriture = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Corps Nourriture"));
	this->tigeNourriture = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tige Nourriture"));
	this->RootComponent = this->corpsNourriture;
}

// Called when the game starts or when spawned
void ANourriture::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANourriture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANourriture::estAttrape_Implementation() {
	UE_LOG(LogClass, Log, TEXT("AEnergiePure::estAttrapeImplementation"));
}

void ANourriture::adapterTailleAuLieu(FVector point)
{
	float taille = point.Y / 5000;
	this->getCorpsNourriture()->SetRelativeScale3D(FVector(taille, taille, taille));
}