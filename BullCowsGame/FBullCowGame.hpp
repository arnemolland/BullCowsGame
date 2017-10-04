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

class FBullCowGame {
//First priority is the public interface
public:
   void Reset(); //TODO Make a richer return value
    int GetMaxTries();
    
private:
    int MyCurrentTry;
    int MyMaxTries;
}

#endif /* FBullCowGame_hpp */
