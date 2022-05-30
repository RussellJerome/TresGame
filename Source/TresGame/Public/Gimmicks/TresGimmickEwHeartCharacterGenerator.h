#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickGeneratorBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickEwHeartCharacterGenerator.generated.h"

class USceneComponent;
class ATresGimmickEwHeartCharacter;
class ASQEX_SplineActor;
class AActor;

UCLASS(Abstract)
class ATresGimmickEwHeartCharacterGenerator : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 CraeteNum;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSubclassOf<ATresGimmickEwHeartCharacter> GeneratedClass;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ASQEX_SplineActor* splineActor;
    
public:
    ATresGimmickEwHeartCharacterGenerator();
    UFUNCTION(BlueprintCallable)
    void SetPreviewActorData(AActor* Actor, USceneComponent* SceneComponent, const FTransform& Transform);
    
    UFUNCTION(BlueprintPure)
    void GetPreviewTransformArray(TArray<FTransform>& retTransformArray);
    
};

