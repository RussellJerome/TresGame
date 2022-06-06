#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresFaceAnimType.h"
#include "UObject/NoExportTypes.h"
#include "ETresFaceAnimPlayPriority.h"
#include "TresAnimNotify_FaceAnimEye.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_FaceAnimEye : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFaceAnimType> m_AnimType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AnimName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bIsBattleFaceEnd: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bIsLoop: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PlaySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_BlendParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bSameCheck: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFaceAnimPlayPriority> m_PlayPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 m_bEnable0Frame: 1;
    
public:
    UTresAnimNotify_FaceAnimEye();
};

