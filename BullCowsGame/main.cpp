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
FText GetValidGuess();
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
    std::cout << "\nWelcome to Bulls and Cows\n";
    std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
    std::cout << " letter isogram?\n";
    return;
}


FText GetValidGuess() //TODO change to GetValidGuess
{
    EGuessStatus Status = EGuessStatus::Invalid_Status;
    FText Guess = "";
    do {
     // Get input from user
    int32 CurrentTry = BCGame.GetCurrentTry();
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    std::getline(std::cin, Guess);
    
    Status = BCGame.CheckGuessValidity(Guess);
    switch (Status) {
        case EGuessStatus::Wrong_Length:
            std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word.\n";
            break;
            
        case EGuessStatus::Not_Isogram:
            std::cout << "Please enter an isogram.\n";
            break;
            
        case EGuessStatus::Not_Lowercase:
            std::cout << "Please enter in all lowercase.\n";
            break;
            
        default:
            // Assume the guess is valid
        break;        }
        std::cout << std::endl;
        
    } while (Status != EGuessStatus::OK); //Loop until valid input
    
    return Guess;
}


void PlayGame()
{
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    
    //TODO change to while-loop
    //Loop asking for guesses while game is not won and there are turns left
   while (!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries){
        FText Guess = GetValidGuess(); //TODO Validity check
        std::cout << std::endl;
        

       FBullCowCount BullCowCount = BCGame.SubmitValidGuess(Guess);
        // Print # of bulls and cows
        std::cout << "Bulls = " << BullCowCount.Bulls;
        std::cout << " Cows = " << BullCowCount.Cows << "\n\n";
        
        
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


