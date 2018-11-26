// Fill out your copyright notice in the Description page of Project Settings.

#include "Canard.h"
#include "Components/StaticMeshComponent.h"

ACanard::ACanard() {
	this->getCorpsEnnemi()->SetSimulatePhysics(true);
}

int ACanard::getZoneDeDetection() {
	return this->zoneDeDetection;
}