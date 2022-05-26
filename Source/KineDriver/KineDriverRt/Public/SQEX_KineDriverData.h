#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEX_KineDriverConnectEZParamLink.h"
#include "SQEX_KineDriverOperatorHead.h"
#include "SQEX_KineDriverSource.h"
#include "SQEX_KineDriverTargetDircns.h"
#include "SQEX_KineDriverComputeSpaceBases.h"
#include "SQEX_KineDriverSourceRotate.h"
#include "SQEX_KineDriverSourceTranslate.h"
#include "SQEX_KineDriverTargetRotate.h"
#include "SQEX_KineDriverSourceOther.h"
#include "SQEX_KineDriverTargetTranslate.h"
#include "SQEX_KineDriverTargetScale.h"
#include "SQEX_KineDriverTargetBendRoll.h"
#include "SQEX_KineDriverTargetBendSTRoll.h"
#include "SQEX_KineDriverTargetPoscns.h"
#include "SQEX_KineDriverTargetOricns.h"
#include "SQEX_KineDriverTargetOther.h"
#include "SQEX_KineDriverConnectEquals.h"
#include "SQEX_KineDriverConnectLinkWith.h"
#include "SQEX_KineDriverConnectEZParamLinkLinear.h"
#include "SQEX_KineDriverData.generated.h"

class USkeleton;

UCLASS()
class KINEDRIVERRT_API USQEX_KineDriverData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    USkeleton* Skeleton;
    
    UPROPERTY()
    int32 WorkNum;
    
    UPROPERTY()
    TArray<int32> PreComputeObjects;
    
    UPROPERTY()
    TArray<FName> PreComputeObjectBoneNameArray;
    
    UPROPERTY()
    TArray<int32> ComputedObjects;
    
    UPROPERTY()
    TArray<FName> ComputedObjectBoneNameArray;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverOperatorHead> Operators;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverComputeSpaceBases> ComputeSpaceBasesBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverSource> SourceBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverSourceTranslate> SourceTranslateBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverSourceRotate> SourceRotateBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverSourceOther> SourceOtherBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetTranslate> TargetTranslateBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetScale> TargetScaleBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetRotate> TargetRotateBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetBendRoll> TargetBendRollBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetBendSTRoll> TargetBendSTRollBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetPoscns> TargetPoscnsBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetOricns> TargetOricnsBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetDircns> TargetDircnsBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverTargetOther> TargetOtherBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverConnectEquals> ConnectEqualsBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverConnectLinkWith> ConnectLinkWithBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverConnectEZParamLink> ConnectEZParamLinkBody;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverConnectEZParamLinkLinear> ConnectEZParamLinkLinearBody;
    
public:
    USQEX_KineDriverData();
};

