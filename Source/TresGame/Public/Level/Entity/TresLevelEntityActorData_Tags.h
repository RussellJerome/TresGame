#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityActorData.h"
#include "TresLevelEntityActorData_Tags.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntityActorData_Tags : public UTresLevelEntityActorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_KeepRuntimeValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_Tags;
    
    UTresLevelEntityActorData_Tags();
};

