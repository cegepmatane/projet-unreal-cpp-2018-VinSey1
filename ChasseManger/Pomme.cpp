// Fill out your copyright notice in the Description page of Project Settings.

#include "Pomme.h"

APomme::APomme() {
	this->calorie = 150.0f;
	this->getCorpsNourriture()->SetSimulatePhysics(true);
	this->getCorpsNourriture()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	this->getTigeNourriture()->SetSimulatePhysics(true);
	this->getTigeNourriture()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void APomme::estAttrape_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("APomme::estAttrape_Implementation()"));
	Destroy();
}