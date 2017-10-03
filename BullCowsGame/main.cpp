//
//  main.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 03/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.

#include <iostream>

using namespace std;

int main() {
    constexpr int WORD_LENGTH = 55;
    cout << "Welcome to Bulls and Cows\n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram?\n";
    return 0;
}

