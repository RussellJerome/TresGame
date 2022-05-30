#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TresHUDBase.generated.h"

class AMatineeActor;
class UMaterialInterface;

UCLASS(NonTransient)
class ATresHUDBase : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* m_ScreenMaterial;
    
    UPROPERTY()
    float m_ScreenMaterialX;
    
    UPROPERTY()
    float m_ScreenMaterialY;
    
    UPROPERTY()
    float m_ScreenMaterialW;
    
    UPROPERTY()
    float m_ScreenMaterialH;
    
    UPROPERTY()
    TArray<AMatineeActor*> m_MatineeActorArray;
    
    ATresHUDBase();
    UFUNCTION(Exec)
    void ShowAreaRect(int32 X, int32 Y, int32 Width, int32 Height);
    
};

