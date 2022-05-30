#pragma once
#include "CoreMinimal.h"
#include "ETresStickerType.h"
#include "TresGummiShipSticker.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipSticker {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresStickerType m_nStickerType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nStickerID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_posX;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_posY;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_posZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_roll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Pitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Yaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Scale;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_flip;
    
    TRESGAME_API FTresGummiShipSticker();
};

