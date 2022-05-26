#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "TresSharedUMG.generated.h"

class UUserWidget;

UCLASS(Abstract, BlueprintType)
class UTresSharedUMG : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UUserWidget> UMGReference;
    
private:
    UPROPERTY(Export, Transient)
    UUserWidget* m_pWidget;
    
public:
    UTresSharedUMG();
};

