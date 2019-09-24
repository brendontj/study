#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {

    const int numberOfPlayers;
    int player = 1;
    std::srand(std::time(nullptr));


    std::cout << "Enter with the nuber of players!";
    std::cin >> numberOfPlayers;


    while(1){

        std::out << "NEXT TURN: Player " << player <<std::endl;
        int sumOfPlay = 0;
        int randomDiceValue = std::rand();
        int continueOrNot;
        // fix the randomDiceValue

        sumOfPlay += randomDiceValue;
        std::cout << "You rolled a " << randomDiceValue << "! Score:" << sumOfPlay << std::endl;
        std::cout << "Roll the dice again? Press 'y' to continue or any other key to quit." << std::endl;

        std::cin >> continueOrNot;

        while (continueOrNot == 121 || sumOfPlay >) {


        }


    }

    





}