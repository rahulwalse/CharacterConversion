/* CharacterConversion.cpp : This file contains the 'main' function.Program execution begins and ends there. * /
/*
    This program is an implementation of algorithm in C++ to convert a string of characters (numbers) to its
    equivalent decimal number representations including supplementary problems and algorithms from the book 
    "How to Solve it by Computer" by R.G. Dromey.
*/

#include <iostream>
#include <string>
#include "AuxFunc.h"

int main()
{
    /* Display program name. */
    std::cout << "Character Conversion\n";
    for(int column = 1; column <= 35; ++column)
        std::cout << "-";

    int choice; bool exitStatus = false;    std::string input_string;
    while(!exitStatus)
    {
        /* Display the menu to the user. */
        std::cout << "\n1. Convert string of characters to its equivalent decimal representation";
        std::cout << "\n2. Exit\nEnter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
            default:std::cout << "\nInvalid choice! Please choose from the options provided.\n";
                    break;

            case 1: std::cout << "\nInput string (numbers): ";
                    std::cin >> input_string;
                    std::cout << "\nDecimal representation: " << CharToDecimal(input_string) << "\n";
                    break;

            case 2: std::cout << "\nExiting the program...\n";
                    exitStatus = true;
                    break;

        }
    }

}