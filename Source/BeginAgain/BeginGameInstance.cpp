// Fill out your copyright notice in the Description page of Project Settings.


#include "BeginGameInstance.h"
#include "MainMenuCPP.h"

void UBeginGameInstance::Init()
{
	Super::Init();



	UE_LOG(LogTemp, Warning, TEXT("Game Instance Loaded"));
}

void UBeginGameInstance::StartGameInstance()
{
	Super::StartGameInstance();
}

void UBeginGameInstance::OnStart()
{
	Super::OnStart();

	BaseUI = CreateWidget<UMainMenuCPP>(this, MainUI);
	if (BaseUI)
	{
		BaseUI->AddToViewport();
	}
}
