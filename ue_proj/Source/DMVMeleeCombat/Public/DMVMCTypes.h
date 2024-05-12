// Enum of all the metrics that can be used to track the character's state

#pragma once
#include "CoreMinimal.h"
#include "DMVMCTypes.generated.h"

UENUM(BlueprintType)
enum class ECharMetricsEnum : uint8
{
	STAT,
	REGENERATIVE
};

// UCLASS()
// class DMVMELEECOMBAT_API UPIDamageType : public UDamageType
// {
// 	GENERATED_BODY()
// public:
// 	UPIDamageType();
// };
//
// UCLASS()
// class DMVMELEECOMBAT_API UPILevitateDamageType : public UDamageType
// {
// 	GENERATED_BODY()
//
// };
//
// UCLASS()
// class DMVMELEECOMBAT_API UPIHitDamageType : public UDamageType
// {
// 	GENERATED_BODY()
//
// };
