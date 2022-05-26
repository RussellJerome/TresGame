#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGimmickLinkData_e_ex044.generated.h"

class AActor;

UCLASS()
class UTresGimmickLinkData_e_ex044 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<AActor*> m_GimmickArray;
    
    UPROPERTY(EditAnywhere)
    TArray<AActor*> m_GimmickArray2;
    
    UTresGimmickLinkData_e_ex044();
};

