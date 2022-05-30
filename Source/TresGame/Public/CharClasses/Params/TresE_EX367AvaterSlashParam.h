#pragma once
#include "CoreMinimal.h"
#include "MoveSlashTypes_e_ex367.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX367AvaterSlashParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX367AvaterSlashParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<MoveSlashTypes_e_ex367> m_MoveSlashType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRot;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_PopOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseOwnerLocation;
    
    TRESGAME_API FTresE_EX367AvaterSlashParam();
};

