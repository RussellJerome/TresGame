#include "TresRandomPlaceRuleSphere.h"

UTresRandomPlaceRuleSphere::UTresRandomPlaceRuleSphere() {
    this->SpawnActorArray.AddDefaulted(1);
    this->Radius = 300.00f;
    this->ObjectSpan = 10.00f;
    this->Num = 10;
    this->RotatorRule = NULL;
}

