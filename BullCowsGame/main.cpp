//
//  main.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 03/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Initialize a constexpr value
    constexpr int WORD_LENGTH = 55;
    
    //Introduce the game
    cout << "Welcome to Bulls and Cows\n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram?\n";
    
    // Get input from user
    string Guess = "";
    cout << "Enter your guess: ";
    cin >> Guess;
    

    
    
    // Repeat inpot back to user
    return 0;
}

