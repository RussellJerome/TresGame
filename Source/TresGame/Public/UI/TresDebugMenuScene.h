#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ETresDebugMenuState.h"
#include "TresDebugMenuScene.generated.h"

class UFont;
class UTresDebugMenuObject;
class UTresDebugMenuContainer;

UCLASS(Transient)
class UTresDebugMenuScene : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString m_Name;
    
    UPROPERTY()
    UFont* m_Font;
    
    UPROPERTY()
    int32 m_ViewX;
    
    UPROPERTY()
    int32 m_ViewY;
    
    UPROPERTY()
    int32 m_ViewWidth;
    
    UPROPERTY()
    int32 m_ViewHeight;
    
    UPROPERTY()
    FLinearColor m_DrawColor;
    
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuState> m_State;
    
    UPROPERTY()
    bool m_Fading;
    
    UPROPERTY()
    bool m_Modal;
    
    UPROPERTY()
    UTresDebugMenuContainer* m_Root;
    
    UPROPERTY()
    UTresDebugMenuObject* m_FocusObject;
    
    UTresDebugMenuScene();
};

