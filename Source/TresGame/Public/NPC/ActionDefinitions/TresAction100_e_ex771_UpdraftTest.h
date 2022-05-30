#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction100_e_ex771_UpdraftTest.generated.h"

class ATresActor_e_ex771_Descent;
class ATresActor_e_ex771_Updraft;
class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAction100_e_ex771_UpdraftTest : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresActor_e_ex771_Updraft* m_pUpdraft;
    
    UPROPERTY()
    ATresActor_e_ex771_Descent* m_pDescent;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Updraft> m_pro_UpdraftClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftForce;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_UpdraftForceRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_UpdraftEffParticleNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftEffSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftEffScale;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_UpdraftEffData;
    
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_UpdraftEff;
    
    UTresAction100_e_ex771_UpdraftTest();
};

