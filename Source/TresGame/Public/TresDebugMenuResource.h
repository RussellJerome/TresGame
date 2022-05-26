#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugMenuTextResource.h"
#include "TresDebugMenuImageResource.h"
#include "TresDebugMenuElement.h"
#include "TresDebugMenuMovieClipResource.h"
#include "TresDebugMenuCustomPart.h"
#include "TresDebugMenuMotionObjectProperty.h"
#include "TresDebugMenuMotionObject.h"
#include "TresDebugMenuResource.generated.h"

UCLASS()
class UTresDebugMenuResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> m_TextureNames;
    
    UPROPERTY()
    int32 m_NumBaseTextureName;
    
    UPROPERTY()
    TArray<FTresDebugMenuImageResource> m_ImageResources;
    
    UPROPERTY()
    TArray<FTresDebugMenuTextResource> m_TextResources;
    
    UPROPERTY()
    TArray<FTresDebugMenuMovieClipResource> m_MovieClips;
    
    UPROPERTY()
    TArray<FTresDebugMenuElement> m_Elements;
    
    UPROPERTY()
    int32 m_RootElementIndex;
    
    UPROPERTY()
    TArray<FTresDebugMenuCustomPart> m_CustomParts;
    
    UPROPERTY()
    TArray<FTresDebugMenuMotionObjectProperty> m_MotionObjectProperties;
    
    UPROPERTY()
    TArray<FTresDebugMenuMotionObject> m_MotionObjects;
    
    UTresDebugMenuResource();
};

