#pragma once
#include "CoreMinimal.h"
#include "ETresGummiType.h"
#include "TresGummiShipPartsStruct.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipPartsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int8 m_indexX;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_indexY;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_indexZ;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGummiType m_gummiKind;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_gummiID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_sizeX;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_sizeY;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_sizeZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_rotX;
    
    UPROPERTY(EditDefaultsOnly)
    float m_rotY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_rotZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pointX;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pointY;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pointZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_materialID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_patternID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_baseColor;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_materilColor;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_flipX;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_flipY;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_flipZ;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Offset;
    
    TRESGAME_API FTresGummiShipPartsStruct();
};

