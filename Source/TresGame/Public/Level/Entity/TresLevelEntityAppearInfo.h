#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityAppearMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresLevelEntityAppearInfo.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLevelEntityAppearInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresLevelEntityAppearMode> m_AppearMode;
    
    UPROPERTY(EditAnywhere)
    float m_AppearWaitMin;
    
    UPROPERTY(EditAnywhere)
    float m_AppearWaitMax;
    
    UPROPERTY(EditAnywhere)
    bool m_Visible;
    
    UPROPERTY(EditAnywhere)
    int32 m_CoopNo;
    
    UPROPERTY(EditAnywhere)
    FVector m_Location;
    
    UPROPERTY(EditAnywhere)
    FRotator m_Rotation;
    
    FTresLevelEntityAppearInfo();
};

