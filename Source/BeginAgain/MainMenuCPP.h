// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuCPP.generated.h"

/**
 * 
 */
UCLASS()
class BEGINAGAIN_API UMainMenuCPP : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual bool Initialize();

	UPROPERTY(Meta = (BindWidget), BlueprintReadWrite, EditAnywhere)
	class UProgressBar* HPBar;



};
