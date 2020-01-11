// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BeginGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BEGINAGAIN_API UBeginGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	
	virtual void Init() override;

	virtual void StartGameInstance() override;

	virtual void OnStart() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MainUI")
	TSubclassOf<class UUserWidget> MainUI;

	UPROPERTY(BlueprintReadWrite)
	class UMainMenuCPP* BaseUI;

};
