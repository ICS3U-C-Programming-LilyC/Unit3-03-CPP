// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/14/2023
// This programs allows for the generating
// of random numbers. The user can input
// a guess and my program will tell them
// if they got it right or wrong.
// Importing the random generator from the C++ libraries.
#include <cstdlib>
#include <iostream>

int main() {
    // Declaring variables for user guess
    // and the random number that is generated.
    int userGuess;
    int randomNumber;

    // Initializing the random generator.
    srand(time(NULL));

    // Generating a random number between 1 and 10.
    randomNumber = rand() % 17 + 1;

    // Getting the user's guess.
    std::cout << "Enter a number between 1-17 for your guess: ";
    std::cin >> userGuess;

    // Checking if the user's guess is
    // correct using an If...Then...Else statement.
    if (userGuess == randomNumber) {
        std::cout << "You guessed correctly. The number is " << randomNumber << "" << std::endl;
    } else {
        std::cout << "You guessed wrong. The correct number was " << randomNumber << "" << std::endl;
    }
}