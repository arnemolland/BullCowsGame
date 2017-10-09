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
bool FBullCowGame::IsGameWon() const {return bGameIsWon;}


void FBullCowGame::Reset()
{
    constexpr int32 MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    
    const FString HIDDEN_WORD = "plante";
    MyHiddenWord = HIDDEN_WORD;
    MyCurrentTry = 1;
    bGameIsWon = false;
   
    return;
}

EGuessStatus FBullCowGame::CheckGuessValidity(FString Guess) const
{
    
    if (false) {
        
        return EGuessStatus::Not_Isogram;
    }
    
    else if (false) {
        return EGuessStatus::Not_Lowercase;
    }
    
    else if (Guess.length() != GetHiddenWordLength()){
        return EGuessStatus::Wrong_Length;
    }
    
    else {
        return EGuessStatus::OK;
    }
    // If guess is not isogram, return error
    // If not all lowercase, return error
    // If guess length is wrong, return error
    // Else, return OK
    return EGuessStatus::OK; //TODO make actual error
}

// Recieves *valid* guess, increments turn, returns count
FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess)
{
    MyCurrentTry++;
    
    FBullCowCount BullCowCount;
    int32 WordLength = MyHiddenWord.length(); // Assume same length as guess
    // Loop trough letters in hidden word
    // Compare letters to hidden word
    // If match, +bulls if in same place, else increment cows
    for (int32 MWChar = 0; MWChar < WordLength; MWChar++)
        {
        for (int32 GChar = 0; GChar < WordLength; GChar++)
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
    
    
    if (BullCowCount.Bulls == WordLength) {
        bGameIsWon = true;
    }
    else {
        bGameIsWon = false;
    }
    return BullCowCount;
}



