#pragma once
#include "CoreMinimal.h"
#include "TresLSIScoreEntryMusicalFarmer.h"
#include "GameFramework/Actor.h"
#include "TresLSIScoreEntryScores.h"
#include "TresLSIScoreEntryStages.h"
#include "TresLSIScoreEntryWins.h"
#include "TresLSIScoreEntryHowtoPlayGolf.h"
#include "TresLSIScoreBarnyardSports.h"
#include "TresLSIScoreEntryHowtoPlayBaseball.h"
#include "TresLSIGameActor.generated.h"

UCLASS()
class ATresLSIGameActor : public AActor {
    GENERATED_BODY()
public:
    ATresLSIGameActor();
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_TrafficTroubles(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_TheWaywardCanary(const FTresLSIScoreEntryStages& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_TheMailPilot(const FTresLSIScoreEntryStages& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_TheKlondikeKid(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_TheKarnivalKid(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_TheCastaway(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_TheBarnyardBattle(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MusicalFarmer(const FTresLSIScoreEntryMusicalFarmer& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MickeyStepsOut(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MickeysPrisonEscape(const FTresLSIScoreEntryStages& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MickeysMechanicalMan(const FTresLSIScoreEntryWins& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MickeysKittenCatch(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MickeysCircus(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MickeyCutsUp(const FTresLSIScoreEntryStages& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_MadDoctor(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_HowtoPlayGolf(const FTresLSIScoreEntryHowtoPlayGolf& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_HowtoPlayBaseball(const FTresLSIScoreEntryHowtoPlayBaseball& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_Giantland(const FTresLSIScoreEntryStages& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_FishinAround(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_CampingOut(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_BuildingaBuilding(const FTresLSIScoreEntryStages& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_BeachParty(const FTresLSIScoreEntryScores& ScoreEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedScore_BarnyardSports(const FTresLSIScoreBarnyardSports& Score);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedGameMode(uint8 ModeIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnExecutedDebugCommand(const FString& Command);
    
    UFUNCTION(BlueprintPure)
    static bool NeedToExchangeActionButton();
    
    UFUNCTION(BlueprintPure)
    float GetGameUnpausedTimeSinceCreation();
    
};

