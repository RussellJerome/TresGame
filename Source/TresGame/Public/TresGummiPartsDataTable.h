#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiPartsDataTable.generated.h"

USTRUCT()
struct FTresGummiPartsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_nSkeltalMeshName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nGetMax;
    
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
    bool m_isFlip;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isPattern;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isSticker;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isColorChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isAnim;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isUVAnim;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreviewScale;
    
    TRESGAME_API FTresGummiPartsDataTable();
};

