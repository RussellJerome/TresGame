#pragma once
#include "CoreMinimal.h"
#include "TresUInt8_Range.h"
#include "TresFloat32_RangeDegree.h"
#include "TresPoppingHolyProjectileOverrideParameters.h"
#include "TresPoppingHolyBulletShootParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresPoppingHolyBulletShootParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTresUInt8_Range m_HolyBulletShootNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTresFloat32_RangeDegree m_HolyBulletSpreadRangeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fHolyBulletShootYawAngleRandomOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bIsIgnoreKeyBladePitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTresFloat32_RangeDegree m_HolyBulletShootRandomPitchRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bIsOverrideHolyProjectileParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTresPoppingHolyProjectileOverrideParameters> m_HolyProjectileOverrideParameterList;
    
    TRESGAME_API FTresPoppingHolyBulletShootParameter();
};

