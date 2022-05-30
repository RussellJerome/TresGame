#pragma once
#include "CoreMinimal.h"
#include "GummiEditorState.generated.h"

UENUM(BlueprintType)
enum GummiEditorState {
    GummiEditorLoad,
    GummiEditorPrepare,
    GummiEditorTop,
    GummiEditorPlanSelect,
    GummiEditorMainEditSelect,
    GummiEditorMaterialGummiCategorySelect,
    GummiEditorMaterialGummiBlockSelect,
};

