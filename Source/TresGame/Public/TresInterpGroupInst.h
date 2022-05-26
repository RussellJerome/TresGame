#pragma once
#include "CoreMinimal.h"
#include "TresInterpGroupInstUpdateSettings.h"
#include "Matinee/InterpGroupInst.h"
#include "TresInterpGroupInst.generated.h"

UCLASS()
class TRESGAME_API UTresInterpGroupInst : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresInterpGroupInstUpdateSettings> m_UpdateSettings;
    
    UTresInterpGroupInst();
};

