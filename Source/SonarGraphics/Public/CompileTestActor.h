// Copyright is mid

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <GeometryCore/Public/Spatial/SparseDynamicOctree3.h>
#include <map>
//#include <Spatial/SparseDynamicOctree3.h>
#include "CompileTestActor.generated.h"

UCLASS()
class SONARGRAPHICS_API ACompileTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACompileTestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//FSparseDynamicOctree3 Octree;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
