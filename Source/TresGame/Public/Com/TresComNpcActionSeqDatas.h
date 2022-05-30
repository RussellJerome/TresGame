#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActMotion.h"
#include "TresComNpcActTarget.h"
#include "TresComNpcActMoveNormal.h"
#include "TresComNpcActLookTarget.h"
#include "TresComNpcActRandomValue.h"
#include "TresComNpcActSelectBranch.h"
#include "TresComNpcFaceMotion.h"
#include "TresComNpcActGreet.h"
#include "TresComNpcActionSeqDatas.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActionSeqDatas {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_SeqName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_LinkActorMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_LookAtMax;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<uint32> m_Commands;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActMotion> m_Motions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActTarget> m_Targets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActMoveNormal> m_MoveNormals;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActRandomValue> m_RandomValues;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActSelectBranch> m_Branchs;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActLookTarget> m_LookTargets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcFaceMotion> m_FaceMotions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActGreet> m_GreetActions;
    
    TRESGAME_API FTresComNpcActionSeqDatas();
};

