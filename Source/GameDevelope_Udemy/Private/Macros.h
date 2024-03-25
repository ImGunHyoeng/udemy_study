#pragma once

#include "DrawDebugHelpers.h"
#define DrawSphere(color,Location) if(GetWorld())DrawDebugSphere(GetWorld(), Location, 20, 12, color, true, {}, {},3);
#define DrawLine(color) if(GetWorld())DrawDebugLine(GetWorld(),GetActorLocation(),GetActorForwardVector()*1000+GetActorLocation(),color,true, {}, {},3);
#define DrawPoint(color,Location) if(GetWorld()) DrawDebugPoint(GetWorld(),Location,20,color,true, {}, {});
#define DrawCapsule(color,Location) if(GetWorld()) DrawDebugCapsule(GetWorld(), Location + FVector(10, 10, 0), 20, 10, FQuat::Identity, color,true);
