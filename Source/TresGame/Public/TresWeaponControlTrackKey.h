#pragma once
#include "CoreMinimal.h"
#include "TresWeaponControlTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresWeaponControlTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    bool m_Visible;
    
    UPROPERTY(EditAnywhere)
    bool m_AppearEffect;
    
    UPROPERTY(EditAnywhere)
    float m_AppearEffectPlayRate;
    
    TRESGAME_API FTresWeaponControlTrackKey();
};

