#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackBonamikWorldWindKey.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_WindType_Notify.h"
#include "ESQEX_Bonamik_WindAreaType.h"
#include "TresInterpTrackBonamikWorldWind.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikWorldWind : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackBonamikWorldWindKey> m_Keys;
    
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
    
    UTresInterpTrackBonamikWorldWind();
};

