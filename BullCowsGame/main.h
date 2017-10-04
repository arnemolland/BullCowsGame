//
//  main.h
//  BullCowsGame
//
//  Created by Arne Molland on 04/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.
//

#ifndef main_h
#define main_h
#pragma once

using namespace std;

void PrintIntro() {
    // Initialize a constexpr value
    constexpr int WORD_LENGTH = 55;
    //Introduce the game
    cout << "Welcome to Bulls and Cows\n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram?\n";
    return;
}

string GetGuess() {
    
    // Get input from user
    string Guess = "";
    cout << "Enter your guess: ";
    getline(cin, Guess);
    return Guess;
}

static void PlayGame() {
    constexpr int TURNS = 5;
    for (int i=1; i<=TURNS; i++) {
        GetGuess();
        
        
        cout << "___________" << endl << endl;
    }
}

void PrintBack() {
    cout << endl;
    string Guess = GetGuess();
    // Repeat input back to user
    cout << "You guess was: " << Guess << endl;
}

#endif /* main_h */
