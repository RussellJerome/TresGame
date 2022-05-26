#pragma once
#include "CoreMinimal.h"
#include "Engine/Note.h"
#include "TresNote.generated.h"

UCLASS()
class TRESGAME_API ATresNote : public ANote {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Id;
    
    ATresNote();
};

