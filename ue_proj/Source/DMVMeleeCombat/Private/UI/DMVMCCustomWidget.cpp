// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/DMVMCCustomWidget.h"

void UDMVMCCustomWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if(CharacterName)
	{
		CharacterName->SetText(FText::FromString(TEXT("Antonio")));
	}
}
