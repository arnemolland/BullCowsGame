//
//  main.cpp
//  BullCowsGame
//
//  Created by Arne Molland on 03/10/2017.
//  Copyright © 2017 Arne Molland. All rights reserved.

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"


void PrintIntro();
std::string GetGuess();
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
    constexpr int WORD_LENGTH = 55;
    //Introduce the game
    std::cout << "Welcome to Bulls and Cows\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letter isogram?\n";
    return;
}

std::string GetGuess()
{
    int CurrentTry = BCGame.GetCurrentTry();
    
    // Get input from user
    std::string Guess = "";
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    std::getline(std::cin, Guess);
    return Guess;
}

void PlayGame()
{
    BCGame.Reset();
    int MaxTries = BCGame.GetMaxTries();
    
    //TODO change til while-loop
    for (int i=1; i<=MaxTries; i++){
        std::string Guess = GetGuess(); //TODO Validity check
        std::cout << std::endl;
        
        //TODO summarize game
        //Print # of bulls and cows
        
        std::cout << "You guess was: " << Guess << std::endl;
    }
    

}



bool AskToReplay()
{
    std::cout << "Do you want to play again? (y/n)";
    std::string Response = "";
    getline(std::cin, Response);
    std::cout << std::endl;
    return (Response[0] == 'y')||(Response[0] == 'Y');
}


