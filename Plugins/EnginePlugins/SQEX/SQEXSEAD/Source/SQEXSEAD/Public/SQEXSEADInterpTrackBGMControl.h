#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "SQEXSEADBGMControlTrackKey.h"
#include "SQEXSEADInterpTrackBGMControl.generated.h"

class USoundBase;

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackBGMControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSQEXSEADBGMControlTrackKey> Keys;
    
    UPROPERTY(EditAnywhere)
    USoundBase* BGMAssetPtr;
    
    USQEXSEADInterpTrackBGMControl();

    virtual const FString GetEdHelperClassName() const override { return FString::FString(); };
    virtual const FString GetSlateHelperClassName() const override { return FString::FString(); };

#if WITH_EDITORONLY_DATA
    virtual UTexture2D* GetTrackIcon() const override { return TrackIcon; }
#endif

    virtual FColor GetKeyframeColor(int32 KeyIndex) const override { return FColor::FColor(); }
    
};

