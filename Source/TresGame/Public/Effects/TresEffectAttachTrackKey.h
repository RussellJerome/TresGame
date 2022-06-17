#pragma once
#include "CoreMinimal.h"
#include "ESQEX_ATTACH_OBJECT_NAME.h"
#include "ESQEX_Enums.h"
#include "ETresEffectAttachTrack_AttachType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ATTACH_OBJECT_NAME -FallbackName=ESQEX_ATTACH_OBJECT_NAME
#include "TresEffectAttachTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresEffectAttachTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEffectAttachTrack_AttachType> m_AttachType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> m_AttachObjectType;
    
    UPROPERTY(EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(EditAnywhere)
    int32 m_GroupID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_RunEvenWhenSkippingKey: 1;
    
    TRESGAME_API FTresEffectAttachTrackKey();
};

