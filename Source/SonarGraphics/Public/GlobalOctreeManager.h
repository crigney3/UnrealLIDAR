// Copyright is mid

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlobalOctreeManager.generated.h"

UCLASS()
class SONARGRAPHICS_API AGlobalOctreeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGlobalOctreeManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
