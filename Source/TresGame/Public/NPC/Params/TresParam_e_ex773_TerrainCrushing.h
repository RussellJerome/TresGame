#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEnemy_e_ex773_CrushingParam.h"
#include "TresEnemy_e_ex773_CrushingPattern.h"
#include "InputCoreTypes.h"
#include "TresParam_e_ex773_TerrainCrushing.generated.h"

UCLASS(Abstract, Const)
class UTresParam_e_ex773_TerrainCrushing : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_ex773_CrushingParam> m_pro_CrushingParamArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_ex773_CrushingPattern> m_pro_CrushingPatternArray;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FaceClawPatternIdx;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FlarePillarPatternIdx;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_HeavenlyPillarPatternIdx;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableKyes;
    
    UPROPERTY(EditDefaultsOnly)
    FKey m_ClearKeys;
    
    UTresParam_e_ex773_TerrainCrushing();
};

