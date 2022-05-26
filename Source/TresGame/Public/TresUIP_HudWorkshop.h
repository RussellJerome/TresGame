#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudWorkshop.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudWorkshop : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconL;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconR;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconBaseL;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconBaseR;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconGrowL;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconGrowR;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconTextL;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconTextR;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconGrowInL;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjIconGrowInR;
    
public:
    UTresUIP_HudWorkshop();
};

