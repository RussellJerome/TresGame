#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuContainer.h"
#include "TresDebugMenuSimpleOptionWindow.generated.h"

class UTresDebugMenuObject;

UCLASS(NonTransient)
class UTresDebugMenuSimpleOptionWindow : public UTresDebugMenuContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTresDebugMenuObject* m_BackGround;
    
    UPROPERTY()
    bool m_CanCancel;
    
    UPROPERTY()
    FString m_Message;
    
    UPROPERTY()
    int32 m_FirstOption;
    
    UPROPERTY()
    int32 m_Cursor;
    
    UTresDebugMenuSimpleOptionWindow();
};

