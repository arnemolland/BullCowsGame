//
//  FBullCowGame.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 05/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame(){ Reset(); }

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
    constexpr int MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    
    MyCurrentTry = 1;
   
    return;
}

bool FBullCowGame::IsGameWon() const
{
    return true;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
    return true;
}


