#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityActorData.h"
#include "TresComNpcEntityData.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class TRESGAME_API UTresComNpcEntityData : public UTresLevelEntityActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_ReplaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_IdleAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_RecordName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bBodyImmovable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDisableStagger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bEnableBgCave: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDisableReactor: 1;
    
    UPROPERTY(EditAnywhere)
    FName m_ActionSeqName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ReplaceMovePoints;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_Tags;
    
    UTresComNpcEntityData();
};

