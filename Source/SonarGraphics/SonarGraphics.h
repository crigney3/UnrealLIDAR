// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <GeometryCore/Public/Spatial/SparseDynamicOctree3.h>
#include <map>

class Octree
{

	Octree();

	struct Node {
		FVector origin;
		FVector extent;
	};

	Octree::Node boundingBox;

	std::map<FVector, int> InstanceLocationsAndIndices;

public:

	UFUNCTION(BlueprintCallable, Category = "BoundingBox")
		void SetBoundingBox(FVector origin, FVector extent);
};

