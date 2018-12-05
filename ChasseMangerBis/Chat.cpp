// Fill out your copyright notice in the Description page of Project Settings.

#include "Chat.h"
#include "Components/StaticMeshComponent.h"
#define D(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT(x));}

AChat::AChat() {
	this->getCorpsEnnemi()->SetSimulatePhysics(true);
}

int AChat::getTaille() {
	return this->taille;
}

void AChat::griffer(AActor* acteur) {
	/*
	if (acteur->IsA( 'Classe C++ du personnage principal' )) {
		acteur->blesser(10);
	}
	*/
	D("Griffer");
}