#pragma once
#include "CoreMinimal.h"
#include "TresGummiBaseParam.h"
#include "TresGummiShipPartsStruct.h"
#include "TresRealGummiShipStruct.generated.h"

class USkeletalMesh;
class USkeletalMeshComponent;
class USceneComponent;
class UTexture2D;

USTRUCT(BlueprintType)
struct FTresRealGummiShipStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* m_pSkeltalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USkeletalMeshComponent* m_pSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(EditDefaultsOnly)
    int64 m_nUniqueID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nMterialID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nPattern;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiBaseParam m_nPartsParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiBaseParam m_nMaterialParam;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_NormalTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NormalTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_AOTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AOTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nPartsColorIndex;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_nMaterialColorIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAxisX;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAxisY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAxisZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UVScrollSpeedU;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UVScrollSpeedV;
    
    UPROPERTY(Transient)
    FTresGummiShipPartsStruct planData;
    
    TRESGAME_API FTresRealGummiShipStruct();
};

