#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Cursor.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_Cursor : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_AnchorCursor;
    
    UPROPERTY()
    UGFxObject* m_LightCursor;
    
public:
    UTresUIP_Cursor();
};

