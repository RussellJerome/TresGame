#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickFZ_Icepillar_Manager_IActor.h"
#include "TresGimmickFZ_Icepillar_Escape.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickFZ_Icepillar_Escape : public ATresGimmickActor, public ITresGimmickFZ_Icepillar_Manager_IActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_PersonalSpaceRadius;
    
    ATresGimmickFZ_Icepillar_Escape();
    
    // Fix for true pure virtual functions not being implemented
};

