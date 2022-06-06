#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresChrInitEquip.h"
#include "TresChrInitData.generated.h"

class UDataTable;

UCLASS()
class TRESGAME_API UTresChrInitData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_PlayerSora;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_PlayerSoraTuto;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_PlayerSoraTSGame;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_PlayerRiku29;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_PlayerAqua;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_PlayerKairi;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_PlayerRoxas;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendSora;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendDonald;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendGoofy;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendRiku;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendMickey;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendAqua;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendJackSparrow;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendWoody;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendBuzz;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendHercules;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendRapunzel;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendFlynn;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendSulley;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendMike;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendMarshmallow;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendBaymax;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendKairi;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendTerra;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendVentus;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendRoxas;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendLea;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChrInitEquip m_FriendXion;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_SpecialShipLevelData;
    
public:
    UTresChrInitData();
};

