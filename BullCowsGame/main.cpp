//
//  main.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 03/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.

#include <iostream>
#include <string>

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

string GetGuessAndPrintBack() {
    
    // Get input from user
    string Guess = "";
    cout << "Enter your guess: ";
    getline(cin, Guess);
    cout << endl;

    // Repeat input back to user
    cout << "You guess was: " << Guess << endl;
    return Guess;
}

int main(){
    constexpr int TURNS = 5;
    PrintIntro();
    for (int i=1; i<=TURNS; i++) {
    GetGuessAndPrintBack();
        cout << "___________" << endl << endl;
    }
    
    return 0;
}



