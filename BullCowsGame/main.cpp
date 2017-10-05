//
//  main.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 03/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"


void PrintIntro() {
    // Initialize a constexpr value
    constexpr int WORD_LENGTH = 55;
    //Introduce the game
    std::cout << "Welcome to Bulls and Cows\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letter isogram?\n";
    return;
}

std::string GetGuess() {
    
    // Get input from user
    std::string Guess = "";
    std::cout << "Enter your guess: ";
    std::getline(std::cin, Guess);
    return Guess;
}

static void PlayGame() {
    FBullCowGame BCGame; // Instantiate a new game
    
    constexpr int TURNS = 5;
    for (int i=1; i<=TURNS; i++) {
        GetGuess();
        
        
        std::cout << "___________" << std::endl << std::endl;
    }
}

void PrintBack() {
    std::cout << std::endl;
    std::string Guess = GetGuess();
    // Repeat input back to user
    std::cout << "You guess was: " << Guess << std::endl;
}

bool AskToReplay(){
    std::cout << "Do you want to play again? (y/n)";
    std::string Response = "";
    getline(std::cin, Response);
    std::cout << std::endl;
    return (Response[0] == 'y')||(Response[0] == 'Y');
}


int main(){
    
    do {
    PrintIntro();
    PlayGame();
    }
    while (AskToReplay());
    return 0;
}



