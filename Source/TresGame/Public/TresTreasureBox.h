#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "UObject/NoExportTypes.h"
#include "TresTreasureBox.generated.h"

class ATresTreasureBox;
class UTresReactorComponent;
class UParticleSystem;
class ATresCharPawnBase;

UCLASS(Config=Game)
class ATresTreasureBox : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
public:
    UPROPERTY(EditAnywhere)
    FName m_TreasureID;
    
protected:
    UPROPERTY(EditAnywhere)
    uint32 m_bIsLargeBox: 1;
    
    UPROPERTY(EditAnywhere)
    FVector m_OpenerRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bUseKeyitemInfoWnd: 1;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* m_PreOpenEffect;
    
    UPROPERTY(EditAnywhere)
    FVector m_PreOpenEffLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator m_PreOpenEffRotation;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bIsFakeBox: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bIsOptionalOpenedBox: 1;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* m_DisappearEffect;
    
    UPROPERTY(Transient)
    ATresCharPawnBase* m_pOpenner;
    
    UPROPERTY(Transient)
    ATresTreasureBox* m_pTrueTreasureBox;
    
public:
    ATresTreasureBox();
    UFUNCTION(BlueprintCallable)
    bool OpenOptionalOpenedBox();
    
};

