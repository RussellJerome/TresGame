#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ATTACH_OBJECT_NAME -FallbackName=ESQEX_ATTACH_OBJECT_NAME
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ATTACH_EFFECT_END_TYPE -FallbackName=ESQEX_ATTACH_EFFECT_END_TYPE
#include "TresHologramWorldInitParam.h"
#include "TresPhotoHologramEffectData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresPhotoHologramEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* AttachEffect;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FName EndSocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector ScaleOffset;
    
    UPROPERTY(EditAnywhere)
    float WarmupTime;
    
    UPROPERTY(EditAnywhere)
    bool PauseEffect;
    
    UPROPERTY(EditAnywhere)
    float PauseTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_ATTACH_EFFECT_END_TYPE> AttachEffectEndType;
    
    UPROPERTY(EditAnywhere)
    float FadeOut;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresHologramWorldInitParam> WorldInitParamList;
    
    UPROPERTY(EditDefaultsOnly)
    bool EffectInvisibleInPhoto;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsAsWeaponEffect;
    
    TRESGAME_API FTresPhotoHologramEffectData();
};

