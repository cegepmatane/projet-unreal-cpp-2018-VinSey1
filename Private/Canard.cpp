// Fill out your copyright notice in the Description page of Project Settings.

#include "Canard.h"
#include "Components/StaticMeshComponent.h"
#define D(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT(x));}

ACanard::ACanard() {
	this->getCorpsEnnemi()->SetSimulatePhysics(true);
}

int ACanard::getZoneDeDetection() {
	return this->zoneDeDetection;
}

void ACanard::picocher(AActor* acteur) {
	/*
	if (acteur->IsA( 'Classe C++ du personnage principal' )) {
		acteur->blesser(10);
	}
	*/
	D("Picocher");
}