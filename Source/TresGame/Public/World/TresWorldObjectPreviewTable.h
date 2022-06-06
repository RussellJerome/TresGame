#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "TresWorldObjectPreviewTable.generated.h"

USTRUCT()
struct FTresWorldObjectPreviewTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_he;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_tt;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_ts;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_ra;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_fz;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_mi;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_bx;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_ca;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_kg;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_cs;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_travel;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform m_nTransform_jump;
    
    TRESGAME_API FTresWorldObjectPreviewTable();
};

