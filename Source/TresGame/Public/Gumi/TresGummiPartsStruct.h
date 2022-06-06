#pragma once
#include "CoreMinimal.h"
#include "TresGummiGraphicData.h"
#include "TresGummiPartsStruct.generated.h"

USTRUCT()
struct FTresGummiPartsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nSizeX;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nSizeY;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nSizeZ;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nCost;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nHP;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nPower;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nRoll;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nAttack;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nTurn;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isPattern;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isSticker;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isColorChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isFlip;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isAnim;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isUVAnim;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreviewScale;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiGraphicData m_GraphicData;
    
    TRESGAME_API FTresGummiPartsStruct();
};

