#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresChrInitEquip.h"
#include "TresChrInitData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TRESGAME_API UTresChrInitData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_PlayerSora;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_PlayerSoraTuto;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_PlayerSoraTSGame;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_PlayerRiku29;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_PlayerAqua;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_PlayerKairi;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_PlayerRoxas;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendSora;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendDonald;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendGoofy;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendRiku;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendMickey;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendAqua;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendJackSparrow;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendWoody;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendBuzz;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendHercules;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendRapunzel;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendFlynn;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendSulley;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendMike;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendMarshmallow;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendBaymax;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendKairi;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendTerra;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendVentus;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendRoxas;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendLea;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTresChrInitEquip m_FriendXion;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* m_SpecialShipLevelData;
    
public:
    UTresChrInitData();
};

