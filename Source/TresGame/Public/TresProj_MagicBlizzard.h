#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicBlizzard.generated.h"

class ATresDecalMeshSplineActor;
class ATresRailSlideActor;

UCLASS(Abstract)
class ATresProj_MagicBlizzard : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GenerateRailHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GenerateRailLife;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATresDecalMeshSplineActor> m_SplineMeshActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bAutoFadeInOutOnShutdown: 1;
    
    UPROPERTY(Transient)
    ATresDecalMeshSplineActor* m_SplineMeshActor;
    
    UPROPERTY(Transient)
    ATresRailSlideActor* m_PrevPutRailSlideActor;
    
public:
    ATresProj_MagicBlizzard();
};

