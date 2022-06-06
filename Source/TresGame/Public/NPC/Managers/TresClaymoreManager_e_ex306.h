#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresClaymoreIdleInfo_e_ex306.h"
#include "Components/ActorComponent.h"
#include "TresClaymoreSwingDownInfo_e_ex306.h"
#include "TresClaymoreManager_e_ex306.generated.h"

class ATresProjectile_e_ex306_Claymore_Idle;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresClaymoreManager_e_ex306 : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex306_Claymore_Idle> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTresClaymoreIdleInfo_e_ex306 m_IdleInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FTresClaymoreSwingDownInfo_e_ex306 m_SwingDownInfo;
    
public:
    UTresClaymoreManager_e_ex306();
};

