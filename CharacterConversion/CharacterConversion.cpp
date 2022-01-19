/* CharacterConversion.cpp : This file contains the 'main' function.Program execution begins and ends there. * /
/*
    This program is an implementation of algorithm in C++ to convert a string of characters (numbers) to its
    equivalent decimal number representations including supplementary problems and algorithms from the book 
    "How to Solve it by Computer" by R.G. Dromey.
*/

#include <iostream>
#include <string>
#include "conversionf.h"

int main()
{
    /* Display program name. */
    std::cout << "Character Conversion\n";
    for(int column = 1; column <= 35; ++column)
        std::cout << "-";

    int choice; bool exitStatus = false;    std::string charString;
    double decimalNumber = 0;
    while(!exitStatus)
    {
        /* Display the menu to the user. */
        std::cout << "\n1. Convert string of characters to its equivalent decimal representation";
        std::cout << "\n2. Convert string of characters to its equivalent decimal representation including decimal point";
        std::cout << "\n3. Convert decimal number to its equivalent characters (string) representation";
        std::cout << "\n4. Exit\nEnter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1: std::cout << "\nInput string (numbers): ";
                    std::cin >> charString;
                    std::cout << "\nDecimal (integer) representation: " << CharToInteger(charString) << "\n";
                    break;

            case 2: std::cout << "\nInput string (numbers including decimal point): ";
                    std::cin >> charString;
                    std::cout << "\nDecimal representation: " << CharToDecimal(charString) << "\n";
                    break;

            case 3: std::cout << "\nNote: current precision is 5 digits after decimal point.\nDecimal number: ";
                    std::cin >> decimalNumber;
                    std::cout << "\nCharacter string representation: " << DecimalToChar(decimalNumber);
                    break;

            case 4: std::cout << "\nExiting the program...\n";
                    exitStatus = true;
                    break;

            default:std::cout << "\nInvalid choice! Please choose from the options provided.\n";
                    break;
        }
    }
}