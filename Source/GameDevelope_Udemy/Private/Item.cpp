// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Macros.h"
// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Staticmesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemStaticMesh"));
	RootComponent = Staticmesh;
	deltaTimeSum = 0;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	
	
}

FRotator AItem::Rotate(float time)
{
	FRotator result=GetActorRotation()+FRotator(0,0,1);
	
	return result;
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//deltaTimeSum += DeltaTime;
	
	//DrawSphere(FColor::Blue, GetActorLocation());
	//DrawLine(FColor::Cyan);
	//DrawPoint(FColor::Black, GetActorLocation());
	//DrawCapsule(FColor::Yellow, GetActorLocation());
}

