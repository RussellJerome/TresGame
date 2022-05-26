#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "TresControllerInterface.h"
#include "ETresCharInputType.h"
#include "UObject/NoExportTypes.h"
#include "TresAIController.generated.h"

class AActor;

UCLASS(Abstract)
class ATresAIController : public AAIController, public ITresControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresCharInputType> m_CharInputType;
    
public:
    ATresAIController();
    UFUNCTION(BlueprintCallable)
    void SetMyTarget(AActor* inNewMyTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetDestination(const FVector& inNewDestination);
    
    UFUNCTION(BlueprintPure)
    bool IsElapsedTimeFromDamaged(float InTime, const AActor* InTarget) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorRightSide(AActor* inOtherActor) const;
    
    UFUNCTION(BlueprintPure)
    float GetVerticalDistanceToMyTarget(bool inCollision) const;
    
    UFUNCTION(BlueprintPure)
    float GetVerticalDistanceToActor(AActor* inOtherActor, bool inCollision) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetMyTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalDistanceToMyTarget(bool inCollision) const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalDistanceToActor(AActor* inOtherActor, bool inCollision) const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToMyTarget(bool inCollision) const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToActor(AActor* inOtherActor, bool inCollision) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDestination() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCoopTeamMemberID() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCoopTeamID() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* FindMyTarget(bool inFindGimmick);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetHeadFocus(AActor* NewFocus);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetHeadFocalPoint(FVector Fp);
    
    UFUNCTION(BlueprintPure)
    AActor* BP_GetHeadFocusActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetHeadFocalPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearHeadFocus();
    
    
    // Fix for true pure virtual functions not being implemented
};

