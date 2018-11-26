// Fill out your copyright notice in the Description page of Project Settings.

#include "Chien.h"
#include "Components/StaticMeshComponent.h"
#define D(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT(x));}

AChien::AChien() {
	this->getCorpsEnnemi()->SetSimulatePhysics(true);
}

int AChien::getDegats() {
	return this->degats;
}

void AChien::mordre(AActor* acteur) {
	/*
	if (acteur->IsA( 'Classe C++ du personnage principal' )) {
		acteur->blesser(this->degats);
	}
	*/
	D("Mordre");
}