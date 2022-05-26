#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresDebugTextRender.generated.h"

class UTextRenderComponent;
class UMaterialInterface;
class UFont;

UCLASS()
class ATresDebugTextRender : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UTextRenderComponent* TextRender;
    
    UPROPERTY(EditAnywhere)
    FText m_Text;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_Color;
    
    UPROPERTY(EditAnywhere)
    float m_Size;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* TextMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UFont* Font;
    
public:
    ATresDebugTextRender();
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& Value);
    
};

