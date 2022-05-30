#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "ETresNotifyFriendNpc.h"
#include "TresTriggerVolumeFriendNpc.generated.h"

class AActor;

UCLASS(Config=Game)
class ATresTriggerVolumeFriendNpc : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresNotifyFriendNpc::Type> m_NotifyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_ActionPoint;
    
    ATresTriggerVolumeFriendNpc();
};

