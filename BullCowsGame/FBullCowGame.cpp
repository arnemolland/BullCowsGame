//
//  FBullCowGame.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 05/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.
//

#include "FBullCowGame.hpp"

using int32 = int;
using FString = std::string;

FBullCowGame::FBullCowGame(){ Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::GetHiddenWordLength ()  const{ return MyHiddenWord.length(); }


void FBullCowGame::Reset()
{
    constexpr int32 MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    
    const FString HIDDEN_WORD = "plante";
    MyHiddenWord = HIDDEN_WORD;
    
    MyCurrentTry = 1;
   
    return;
}

bool FBullCowGame::IsGameWon() const
{
    return true;
}

EGuessStatus FBullCowGame::CheckGuessValidity(std::string) const
{
    if (false) {
        return EGuessStatus::Not_Isogram;
    }
    
    else if (false) {
        return EGuessStatus::Not_Lowercase;
    }
    
    else if (false) {
        return EGuessStatus::Wrong_Length;
    }
    
    else {
        return EGuessStatus::OK;
    }
    //If guess is not isogram, return error
    //If not all lowercase, return error
    //If guess length is wrong, return error
    //Else, return OK
    return EGuessStatus::OK; //TODO make actual error
}

// Recieves *valid* guess, increments turn, returns count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
    // Increment turn number
    MyCurrentTry++;
    
    // Setup return variable
    FBullCowCount BullCowCount;
    int32 HiddenWordLength = MyHiddenWord.length();
    // Loop trough letters in guess
    //Compare letters to hidden word
    //If match, +bulls if in same place, else increment cows
    for (int32 MWChar = 0; MWChar < HiddenWordLength; MWChar++)
        {
        for (int32 GChar = 0; GChar < HiddenWordLength; GChar++)
            {
            if (Guess[GChar] == MyHiddenWord[MWChar])
                {
                if (MWChar == GChar)
                    {
                    BullCowCount.Bulls++;
                    }
                        else
                        {
                            BullCowCount.Cows++;
                        }
            }
        }
        
    }
    
    
    
    return BullCowCount;
}



