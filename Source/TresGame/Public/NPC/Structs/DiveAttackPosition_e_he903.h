#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DiveAttackPosition_e_he903.generated.h"

USTRUCT(BlueprintType)
struct FDiveAttackPosition_e_he903 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vDiveAttackStartOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_vDiveAttackStartRot;
    
    UPROPERTY(EditAnywhere)
    bool bDiveAttackStartOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDiveAttackStartRot;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vDiveAttackEndOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDiveAttackEndOffset;
    
    TRESGAME_API FDiveAttackPosition_e_he903();
};

