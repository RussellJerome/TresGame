#include "TresWinniePuzzleFlower.h"
#include "TresWinniePuzzleHoneypotController.h"
#include "TresWinniePuzzlePoohController.h"

ATresWinniePuzzleFlower::ATresWinniePuzzleFlower() {
    this->RabbitPawn = NULL;
    this->PoohPawn = NULL;
    this->GopherPawn = NULL;
    this->HoneypotCtrl = CreateDefaultSubobject<UTresWinniePuzzleHoneypotController>(TEXT("UTresWinniePuzzleHoneypotController"));
    this->PoohCtrl = CreateDefaultSubobject<UTresWinniePuzzlePoohController>(TEXT("UTresWinniePuzzlePoohController"));
    this->m_pRabbitPawn = NULL;
    this->m_pPoohPawn = NULL;
    this->m_pGopherPawn = NULL;
}

