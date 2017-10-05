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

class FBullCowGame {
//First priority is the public interface
public:
    FBullCowGame(); //Constructor
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); //TODO Make a richer return value
    bool CheckGuessValidity(std::string); //TODO Make a richer return value
    //Method for counting bulls and cows, incrementing or increasing try number
    
    
private:
    int MyCurrentTry = 1;
    int MyMaxTries = 5;
};

#endif /* FBullCowGame_hpp */
