#include "TresAIPoint_e_ex035.h"

bool ATresAIPoint_e_ex035::IsReserved() {
    return false;
}

bool ATresAIPoint_e_ex035::IsOccupied() {
    return false;
}

bool ATresAIPoint_e_ex035::IsAvailable() {
    return false;
}

TEnumAsByte<ETresEnemy_e_ex035_AIPointType> ATresAIPoint_e_ex035::GetAIPointType() {
    return ETresEnemy_e_ex035_AIPointType_Tree;
}

ATresAIPoint_e_ex035::ATresAIPoint_e_ex035() {
    this->m_AIPointType = ETresEnemy_e_ex035_AIPointType_Tree;
}

