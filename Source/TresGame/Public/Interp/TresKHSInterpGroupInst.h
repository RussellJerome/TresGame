#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroupInst.h"
#include "TresKHSInterpGroupInst.generated.h"

class ATresKHShaderController;
class UTresObjectDataBuffer;

UCLASS()
class TRESGAME_API UTresKHSInterpGroupInst : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresKHShaderController* m_GroupActor;
    
    UPROPERTY(Transient)
    UTresObjectDataBuffer* m_KHSBuffer;
    
    UTresKHSInterpGroupInst();
};

