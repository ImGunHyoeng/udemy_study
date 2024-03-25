// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class GAMEDEVELOPE_UDEMY_API Macro
{
public:
#include "DrawDebugHelpers.h"
#define DrawSphere(color,Location) if(GetWorld())DrawDebugSphere(GetWorld(), Location, 20, 12, color, true, {}, {},3);
	Macro();
	~Macro();
};
