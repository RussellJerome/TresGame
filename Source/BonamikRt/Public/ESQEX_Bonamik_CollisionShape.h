#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_CollisionShape.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_CollisionShape {
    ESQEX_Bonamik_CollisionShape_None,
    ESQEX_Bonamik_CollisionShape_Sphere,
    ESQEX_Bonamik_CollisionShape_Capsule,
    ESQEX_Bonamik_CollisionShape_Inverse_Sphere,
    ESQEX_Bonamik_CollisionShape_Inverse_Capsule,
    ESQEX_Bonamik_CollisionShape_ReservedA,
    ESQEX_Bonamik_CollisionShape_Plane,
    ESQEX_Bonamik_CollisionShape_ReservedB,
    ESQEX_Bonamik_CollisionShape_Box,
    ESQEX_Bonamik_CollisionShape_Self_Collision,
};

