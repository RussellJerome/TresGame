#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresFaceAnimType.h"
#include "UObject/NoExportTypes.h"
#include "ETresFaceAnimPlayPriority.h"
#include "TresAnimNotify_FaceAnim.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_FaceAnim : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFaceAnimType> FaceAnimType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FaceAnimName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bIsBattleFaceEnd: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool isLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlaySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BlendParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SameCheck;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFaceAnimPlayPriority> m_PlayPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 m_bEnable0Frame: 1;
    
public:
    UTresAnimNotify_FaceAnim();
};

