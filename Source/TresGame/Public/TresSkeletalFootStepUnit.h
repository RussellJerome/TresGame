#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "ETresIkCollision.h"
#include "UObject/NoExportTypes.h"
#include "ETresSkeletalFootStampDir.h"
#include "TresSkeletalFootStepUnit.generated.h"

class UTresFootStepSet;

USTRUCT(BlueprintType)
struct FTresSkeletalFootStepUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference m_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_BoneName;
    
    UPROPERTY(Transient)
    int32 m_BoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresIkCollision::Type> m_ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_OffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_CheckDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TouchedCheckDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_EffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTresFootStepSet* m_FootStepSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_FootStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresSkeletalFootStampDir m_FootStampDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StampCheckDist;
    
    TRESGAME_API FTresSkeletalFootStepUnit();
};

