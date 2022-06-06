#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_WindType_Notify.h"
#include "ESQEX_Bonamik_WindAreaType.h"
#include "TresAnimNotifyState_Bonamik_WorldWind.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_WorldWind : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_WindType_Notify> m_WindType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_WindAreaType> m_AreaType;
    
    UPROPERTY(EditAnywhere)
    bool m_BonamikWindGlobalAddition;
    
    UPROPERTY(EditAnywhere)
    FVector m_ModelOffset;
    
    UPROPERTY(EditAnywhere)
    float m_SphereRadius;
    
    UPROPERTY(EditAnywhere)
    FVector m_BoxSize;
    
    UPROPERTY(EditAnywhere)
    float m_AreaMargin;
    
    UPROPERTY(EditAnywhere)
    FVector m_WindForce;
    
    UPROPERTY(EditAnywhere)
    FVector m_RandomRange;
    
    UPROPERTY(EditAnywhere)
    float m_RandomTime;
    
    UPROPERTY(EditAnywhere)
    float m_BlastStrength;
    
    UPROPERTY(EditAnywhere)
    float m_PeakInRange;
    
    UPROPERTY(EditAnywhere)
    float m_BlastRange;
    
    UPROPERTY(EditAnywhere)
    float m_BlastSpeed;
    
    UPROPERTY(EditAnywhere)
    int32 m_LoopNum;
    
    UPROPERTY(EditAnywhere)
    int32 m_StartFrame;
    
    UTresAnimNotifyState_Bonamik_WorldWind();
};

