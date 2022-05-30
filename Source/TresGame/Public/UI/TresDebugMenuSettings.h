#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugMenuSettings.generated.h"

UCLASS(Config=TresDebugMenu)
class UTresDebugMenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool m_English;
    
    UPROPERTY(Config)
    bool m_IgnoreGameFilter;
    
    UPROPERTY(Config)
    TArray<FString> m_PassCodes;
    
    UTresDebugMenuSettings();
};

