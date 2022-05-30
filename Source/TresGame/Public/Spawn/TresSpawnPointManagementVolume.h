#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresSpawnPointSet.h"
#include "TresSpawnPointManagementVolume.generated.h"

class ATresSpawnPointManagementVolume;

UCLASS()
class TRESGAME_API ATresSpawnPointManagementVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_WeldOuterInitial;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresSpawnPointSet> m_PointSet;
    
    UPROPERTY(EditAnywhere)
    TArray<ATresSpawnPointManagementVolume*> m_InnerVolumes;
    
public:
    ATresSpawnPointManagementVolume();
    UFUNCTION(BlueprintCallable)
    void SetWeldOuter(bool WeldOuter);
    
    UFUNCTION(BlueprintPure)
    bool GetWeldOuter() const;
    
};

