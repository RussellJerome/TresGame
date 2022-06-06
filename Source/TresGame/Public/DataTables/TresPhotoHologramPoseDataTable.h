#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresHologramCharaWindParam.h"
#include "ETresHologramSubAnimReplaceType.h"
#include "TresPhotoHologramEffectData.h"
#include "SQEX_BonamikChangingParameter.h"
#include "ETresCharWearForm.h"
#include "TresPhotoHologramPoseDataTable.generated.h"

USTRUCT()
struct FTresPhotoHologramPoseDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_LocationOffSet;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_RotationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_FocusDefaultLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MapSetId;
    
    UPROPERTY(EditDefaultsOnly)
    FString PoseNameNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoseIndex;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bWeaponVisible;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ValidWeaponTag;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ValidBodyCollTag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ExtraValidBodyCollTagList;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableWeaponOnOff;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresHologramSubAnimReplaceType> m_WeaponOffHandReplacement;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_FacialTypeList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresPhotoHologramEffectData> m_EffectData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresCharWearForm m_WearForm;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSQEX_BonamikChangingParameter> m_BonamikGroupParams;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresHologramCharaWindParam> m_BonamikCharaWind;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SetPosePreEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SetPosePostEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AfterPoseEvent;
    
    TRESGAME_API FTresPhotoHologramPoseDataTable();
};

