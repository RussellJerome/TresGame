#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickSimpleStaticBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract, Config=Game)
class ATresGimmickSimpleStaticBase : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickSimpleStaticBase();
    
    // Fix for true pure virtual functions not being implemented
};

