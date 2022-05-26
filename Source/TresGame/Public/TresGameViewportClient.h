#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "TresDebugMenuInfo.h"
#include "TresGameViewportClient.generated.h"

class UTresDebugMenuScene;

UCLASS(NonTransient)
class UTresGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTresDebugMenuScene*> m_DebugMenuStack;
    
    UPROPERTY()
    UTresDebugMenuScene* m_FocusDebugMenu;
    
    UPROPERTY()
    TArray<FTresDebugMenuInfo> m_DebugMenuInfo;
    
    UTresGameViewportClient();
};

