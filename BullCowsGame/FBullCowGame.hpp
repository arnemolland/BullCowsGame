//
//  FBullCowGame.hpp
//  BullCowsGame
//
//  Created by Arne Molland on 05/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount
{
    int32 Bulls = 0;
    int32 Cows = 0;
};

class FBullCowGame {
//First priority is the public interface
public:
    FBullCowGame(); //Constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString) const;
    
    void Reset(); //TODO Make a richer return value
    
    
    FBullCowCount SubmitGuess(FString);
    
    
private:
    int32 MyCurrentTry = 1;
    int32 MyMaxTries = 5;
    FString MyHiddenWord;
};

#endif /* FBullCowGame_hpp */
