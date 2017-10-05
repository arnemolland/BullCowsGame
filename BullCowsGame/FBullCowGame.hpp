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

class FBullCowGame {
//First priority is the public interface
public:
    FBullCowGame(); //Constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); //TODO Make a richer return value
    bool CheckGuessValidity(FString); //TODO Make a richer return value
    //Method for counting bulls and cows, incrementing or increasing try number
    
    
private:
    int32 MyCurrentTry = 1;
    int32 MyMaxTries = 5;
};

#endif /* FBullCowGame_hpp */
