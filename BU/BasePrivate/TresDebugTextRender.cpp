#include "TresDebugTextRender.h"
#include "Components/TextRenderComponent.h"

void ATresDebugTextRender::SetText(const FText& Value) {
}

void ATresDebugTextRender::SetSize(float Value) {
}

void ATresDebugTextRender::SetColor(const FLinearColor& Value) {
}

ATresDebugTextRender::ATresDebugTextRender() {
    this->TextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
    this->m_Text = FText::FromString(TEXT("Text"));
    this->m_Size = 32.00f;
    this->TextMaterial = NULL;
    this->Font = NULL;
}

