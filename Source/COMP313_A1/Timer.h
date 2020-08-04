// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#define WIN32_LEAN_AND_MEAN
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Timer.generated.h"

/**
 * 
 */
UCLASS()
class COMP313_A1_API UTimer : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Timer")
		static int getMinutes();

	UFUNCTION(BlueprintCallable, Category = "Timer")
		static void startCountdown();

	UFUNCTION(BlueprintCallable, Category = "Timer")
		static int getSeconds();


	UFUNCTION(BlueprintCallable, Category = "Timer")
		static bool gameOver();

	UFUNCTION(BlueprintCallable, Category = "Timer")
		static void reset();
		


};



