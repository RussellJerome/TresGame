#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresCommandKind.h"
#include "TresFriendEvaluationDataTable.generated.h"

USTRUCT()
struct FTresFriendEvaluationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BadStatEvaluation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_HitPointEvaluation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MagicPointEvaluation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FocusPointEvaluation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AllCharaEvaluation;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_SpecialCure: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RecoveryPoint;
    
    TRESGAME_API FTresFriendEvaluationDataTable();
};

