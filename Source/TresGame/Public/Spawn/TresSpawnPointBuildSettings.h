#pragma once
#include "CoreMinimal.h"
#include "ETresSpawnPointSize.h"
#include "ETresSpawnPointBuildMethod.h"
#include "TresSpawnPointBuildSettings.generated.h"

USTRUCT()
struct FTresSpawnPointBuildSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Id;
    
    UPROPERTY(EditAnywhere)
    ETresSpawnPointSize m_Size;
    
    UPROPERTY(VisibleAnywhere)
    float m_Radius;
    
    UPROPERTY(VisibleAnywhere)
    float m_Height;
    
    UPROPERTY(EditAnywhere)
    ETresSpawnPointBuildMethod m_Method;
    
    TRESGAME_API FTresSpawnPointBuildSettings();
};

