#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmick_Ts03_CraneObject.generated.h"

class ATresGimmick_Ts03_Crane;
class UTresBodyCollComponent;

UCLASS(Abstract)
class ATresGimmick_Ts03_CraneObject : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollComponent* BodyCollComponent;
    
public:
    ATresGimmick_Ts03_CraneObject();
    UFUNCTION(BlueprintCallable)
    void SetParentCrane(ATresGimmick_Ts03_Crane* pParent);
    
    UFUNCTION(BlueprintCallable)
    void CraneRemoveCollisionShape(const FName InTagName, bool bUpdate);
    
    UFUNCTION(BlueprintCallable)
    void CraneAppendCollisionShape(const FName InTagName, FVector InSize, FVector InRelativeLocaiton, FRotator InRelativeRotation, bool bUpdate);
    
};

