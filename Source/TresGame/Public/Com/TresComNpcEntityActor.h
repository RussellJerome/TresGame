#pragma once
#include "CoreMinimal.h"
#include "TresComNpcBodySetupData.h"
#include "GameFramework/Actor.h"
#include "TresComNpcEntityMoveData.h"
#include "TresComNpcEntitySetData.h"
#include "TresComNpcScaleData.h"
#include "TresComNpcEntityLinkData.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcEntityVoiceData.h"
#include "TresComNpcEntityActor.generated.h"

class UTresComNpcMeshSet;
class UTresComNpcVoiceSet;

UCLASS()
class TRESGAME_API ATresComNpcEntityActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FName m_MasterGroupName;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bMasterGroupUseSkelton: 1;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UTresComNpcMeshSet*> m_MeshSetDatas;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UTresComNpcVoiceSet*> m_VoiceSetDatas;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTresComNpcEntitySetData> m_Datas;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTresComNpcEntityMoveData> m_MoveDatas;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTresComNpcEntityLinkData> m_LinkDatas;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTresComNpcBodySetupData> m_BodyDatas;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTresComNpcScaleData> m_ScaleDatas;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> m_MovePoints;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> m_NamePoints;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTresComNpcEntityVoiceData> m_VoiceDatas;
    
    ATresComNpcEntityActor();
};

