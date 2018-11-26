// Fill out your copyright notice in the Description page of Project Settings.

#include "Chat.h"
#include "Components/StaticMeshComponent.h"

AChat::AChat() {
	this->getCorpsEnnemi()->SetSimulatePhysics(true);
}

int AChat::getTaille() {
	return this->taille;
}