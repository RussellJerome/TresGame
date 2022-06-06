#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "ETresSavePointDispType.h"
#include "ETresShopChrID.h"
#include "ETresShopID.h"
#include "TresShopActor.generated.h"

class UTresBodyCollComponent;
class UTresMapMarkerComponent;
class UTresReactorComponent;

UCLASS()
class ATresShopActor : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresMapMarkerComponent* MyMapMarker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresShopID m_ShopID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresShopChrID m_ShopChrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DefaultIdlingMotName;
    
public:
    ATresShopActor();
protected:
    UFUNCTION()
    void OnChangeShopActorDispType(ETresSavePointDispType InDispType);
    
    UFUNCTION()
    void OnChangePlayerArtsMode(bool bIsArtsMode);
    
    UFUNCTION()
    void OnChangeCinematicMode(bool bIsCinematicMode);
    
    UFUNCTION()
    void OnChangeBattleMode(bool bIsBattleMode);
    
};

