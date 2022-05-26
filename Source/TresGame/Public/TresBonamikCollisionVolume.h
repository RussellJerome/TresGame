#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ObjectType -FallbackName=ESQEX_ObjectType
#include "TresBonamikCollisionVolume.generated.h"

class USkinnedMeshComponent;
class AActor;

UCLASS()
class TRESGAME_API ATresBonamikCollisionVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ESQEX_ObjectType> m_MonitoringObjectTypes;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    TArray<AActor*> m_BonamikActors;
    
    UPROPERTY(EditAnywhere)
    bool m_ControlBonamikCollision;
    
    UPROPERTY(EditAnywhere)
    bool m_ControlBonamikWeightAndEnable;
    
    UPROPERTY(EditAnywhere)
    bool m_AllowMultipleOverlaps;
    
    UPROPERTY(EditAnywhere)
    bool m_FixForGigasMesh;
    
    UPROPERTY(EditAnywhere)
    bool m_DisableHighFPSEvaluation;
    
    UPROPERTY(Export, Transient)
    TArray<USkinnedMeshComponent*> m_ReferencedComponets;
    
    ATresBonamikCollisionVolume();
};

