#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresEffectAttachTrackKey.h"
#include "SQEX_AttachEffectTrackDataToDataAsset.h"
#include "SQEX_StructParticleAttachData.h"
#include "SQEX_Structs.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_StructParticleAttachData -FallbackName=SQEX_StructParticleAttachData
#include "TresInterpTrackEffectAttach.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackEffectAttach : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresEffectAttachTrackKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_StructParticleAttachData> MetaAttachData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_AttachEffectTrackDataToDataAsset> AttachDataList;
    
    UTresInterpTrackEffectAttach();
};

