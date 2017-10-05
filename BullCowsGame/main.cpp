//
//  main.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 03/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.

/* This is the console executable, which makes use of the BullCow class
   This acts as the view in a MVC pattern, and is responsible for all
   user interaction. For game logic, see the FBullCowGame class. */

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
FText GetGuess();
void PlayGame();
void PrintBack();
bool AskToReplay();

FBullCowGame BCGame; // Instantiate a new game

int main()
{
    do
    {
    PrintIntro();
    PlayGame();
    }
    while (AskToReplay());
    return 0;
}

void PrintIntro()
{
    // Initialize a constexpr value
    //Introduce the game
    std::cout << "Welcome to Bulls and Cows\n";
    std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
    std::cout << " letter isogram?\n";
    return;
}

FText GetGuess()
{
    int CurrentTry = BCGame.GetCurrentTry();
    
    // Get input from user
    FText Guess = "";
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    std::getline(std::cin, Guess);
    return Guess;
}

void PlayGame()
{
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    
    //TODO change til while-loop
    for (int32 i=1; i<=MaxTries; i++){
        FText Guess = GetGuess(); //TODO Validity check
        std::cout << std::endl;
        
       FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
        // Print # of bulls and cows
        std::cout << "Bulls = " << BullCowCount.Bulls;
        std::cout << " Cows = " << BullCowCount.Cows;
        std::cout << std::endl;
        
        
        //TODO summarize game
        //Print # of bulls and cows
        
        std::cout << "You guess was: " << Guess << std::endl;
    }
    

}



bool AskToReplay()
{
    std::cout << "Do you want to play again? (y/n)";
    FText Response = "";
    getline(std::cin, Response);
    std::cout << std::endl;
    return (Response[0] == 'y')||(Response[0] == 'Y');
}


