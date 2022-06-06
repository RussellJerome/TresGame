#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickFrogPerformer.generated.h"

class AActor;
class UTresSkeletalMeshComponent;
class USoundBase;
class UAnimSequence;
class ATresGimmickFrogPerformer;

UCLASS(Config=Game)
class ATresGimmickFrogPerformer : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* MyMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Broken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlayBrokenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* AttachedSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* m_PerformAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* m_IdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* m_BrokenAnim;
    
public:
    ATresGimmickFrogPerformer();
    UFUNCTION(BlueprintCallable)
    void SetSpeedRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterFrog(ATresGimmickFrogPerformer* pFrog);
    
    UFUNCTION(BlueprintCallable)
    void SetBroken(bool _Broken);
    
    UFUNCTION(BlueprintNativeEvent)
    void ChangeSpeedRate(float Rate);
    
};

