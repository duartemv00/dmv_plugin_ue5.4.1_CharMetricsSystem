// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"

#include "DMVMCCustomWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class DMVMELEECOMBAT_API UDMVMCCustomWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UTextBlock* CharacterName;
};
