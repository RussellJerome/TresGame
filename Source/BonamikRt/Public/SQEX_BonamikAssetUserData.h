#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "ESQEX_Bonamik_OutOfCamera.h"
#include "SQEX_BonamikGroupLOD.h"
#include "SQEX_BonamikAssetUserData.generated.h"

class USQEX_BonamikAsset;

UCLASS(EditInlineNew)
class BONAMIKRT_API USQEX_BonamikAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<USQEX_BonamikAsset*> BonamikAssets;
    
    UPROPERTY()
    bool m_bAlwaysUse60FPSsetting;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> IgnoreEffectors;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ReferenceGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckGroundBodyPosGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_BonamikGroupLOD> BonamikGroupLODs;
    
    UPROPERTY(EditAnywhere)
    float TeleportDistance;
    
    UPROPERTY(EditAnywhere)
    bool bAccurateBoundsUpdate;
    
    UPROPERTY(EditAnywhere)
    int32 PreRollStepOnResume;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_OutOfCamera> OutOfCamera;
    
    USQEX_BonamikAssetUserData();
};

