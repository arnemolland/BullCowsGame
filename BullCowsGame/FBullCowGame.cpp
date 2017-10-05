//
//  FBullCowGame.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 05/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.
//

#include "FBullCowGame.hpp"

int FBullCowGame::GetMaxTries() { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() { return MyCurrentTry; }

void FBullCowGame::Reset()
{
    return;
}

bool FBullCowGame::IsGameWon()
{
    return true;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
    return true;
}

