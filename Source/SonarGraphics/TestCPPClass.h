// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <GeometryCore/Public/Spatial/SparseDynamicOctree3.h>
#include <map>

/**
 * 
 */
class SONARGRAPHICS_API TestCPPClass
{
public:
	
	TestCPPClass();
	~TestCPPClass();

	UPROPERTY(EditAnywhere);
	int compileTest;

	struct Node {
		FVector origin;
		FVector extent;
	};

	TestCPPClass::Node boundingBox;

	std::map<FVector, int> InstanceLocationsAndIndices;

public:

	UFUNCTION(BlueprintCallable, Category = "BoundingBox")
		void SetBoundingBox(FVector origin, FVector extent);
};
