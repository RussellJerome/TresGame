#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresActionDefinitionBase.h"
#include "ColorTypes_e_ex781Gigas.h"
#include "TresAction9_e_ex781_CallGigas.generated.h"

class USoundBase;
class UTresStateBase;
class ATresGenerator_e_ex781_CallGigas;

UCLASS()
class UTresAction9_e_ex781_CallGigas : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bCallAction;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_CallActionRootScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSingleCall;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ColorTypes_e_ex781Gigas> m_GigasType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_GigasAction;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_GigasRotSetAction;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGenerator_e_ex781_CallGigas> m_GigasGenerator;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UTresAction9_e_ex781_CallGigas();
};

