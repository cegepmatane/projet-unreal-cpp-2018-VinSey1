// Fill out your copyright notice in the Description page of Project Settings.

#include "Chien.h"
#include "Components/StaticMeshComponent.h"

AChien::AChien() {
	this->getCorpsEnnemi()->SetSimulatePhysics(true);
}

int AChien::getDegats() {
	return this->degats;
}