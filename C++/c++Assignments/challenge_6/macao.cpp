#include <iostream>
#include <cstdlib>
#include <vector>


int main () {

    int numberOfPlayers;
    
    std::cout << "Enter with the nuber of players!" << std::endl;
    std::cin >> numberOfPlayers;

    std::vector <int> sumOfPlay(numberOfPlayers+1);

    for(int i = 0; i < numberOfPlayers;++i) {

        std::cout << "NEXT TURN: Player " << i+1 <<std::endl;
        
        int randomDiceValue = (std::rand() % 6) + 1;
        std::string continueOrNot;
        // fix the randomDiceValue

        sumOfPlay[i] += randomDiceValue;
        std::cout << "You rolled a " << randomDiceValue << "! Score:" << sumOfPlay[i] << std::endl;
        std::cout << "Roll the dice again? Press 'y' to continue or any other key to quit." << std::endl;
        std::cin >> continueOrNot;

        while ((continueOrNot == "y") && (sumOfPlay[i] < 9 )) {
            randomDiceValue = (std::rand() % 6) + 1;
            sumOfPlay[i] += randomDiceValue;
            std::cout << "You rolled a " << randomDiceValue << "! Score:" << sumOfPlay[i] << std::endl;

            if (sumOfPlay[i] > 9) {
                std::cout << "YOU LOSE!" << std::endl;
                break;
            }
            std::cout << "Roll the dice again? Press 'y' to continue or any other key to quit." << std::endl;
            std::cin >> continueOrNot;
        }

        std::cout << "Your final score is: " << sumOfPlay[i] << std::endl;
    }

    int betterPlayer = numberOfPlayers;
    bool findTheWinner = false;
    for (int j = 0 ; j<numberOfPlayers; ++j) {
        if (sumOfPlay[j] == 9) {
            findTheWinner = true;
            std::cout << "Player " << j+1 << " has won with a score of " << sumOfPlay[j] << "!" << std::endl;
        }
        else if (!findTheWinner){
            if ((sumOfPlay[j] > sumOfPlay[betterPlayer]) && (sumOfPlay[j] < 9)){
                betterPlayer = j;
            }
        }

    }

    if (!findTheWinner) {
        std::cout << "Player " << betterPlayer+1 << " has won with a score of " << sumOfPlay[betterPlayer] << "!" << std::endl;
    }

    return 0;
}