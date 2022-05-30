#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcBodySetupData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcBodySetupData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 m_BodyType;
    
    UPROPERTY(VisibleAnywhere)
    FName m_attachBoneName;
    
    UPROPERTY(VisibleAnywhere)
    FVector m_BodySize;
    
    UPROPERTY(VisibleAnywhere)
    FVector m_BodyLocation;
    
    UPROPERTY(VisibleAnywhere)
    FRotator m_BodyRotation;
    
    UPROPERTY(VisibleAnywhere)
    uint8 m_bEnableDamage: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 m_bEnablePush: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 m_bEnableCamera: 1;
    
    TRESGAME_API FTresComNpcBodySetupData();
};

