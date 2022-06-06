#include "TresTreasureBox.h"
#include "TresReactorComponent.h"

bool ATresTreasureBox::OpenOptionalOpenedBox() {
    return false;
}

ATresTreasureBox::ATresTreasureBox() {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor0"));
    this->m_bIsLargeBox = false;
    this->m_bUseKeyitemInfoWnd = false;
    this->m_PreOpenEffect = NULL;
    this->m_bIsFakeBox = false;
    this->m_bIsOptionalOpenedBox = false;
    this->m_DisappearEffect = NULL;
    this->m_pOpenner = NULL;
    this->m_pTrueTreasureBox = NULL;
}

