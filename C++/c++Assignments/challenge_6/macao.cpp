#include <iostream>
#include <cstdlib>
#include <vector>


void doPlay( const int player, std::vector <int> &playerSum){
        int randomDiceValue = (std::rand() % 6) + 1;
        playerSum[player] += randomDiceValue;
        std::cout << "You rolled a " << randomDiceValue << "! Score:" << playerSum[player] << std::endl;
}

void playAgain() {
     std::cout << "Roll the dice again? Press 'y' to continue or any other key to quit." << std::endl;
}

int main () {

    int numberOfPlayers;
    std::string continueOrNot;
    
    std::cout << "Enter with the nuber of players!" << std::endl;
    std::cin >> numberOfPlayers;

    std::vector <int> sumOfPlay(numberOfPlayers+1);

    for(int i = 0; i < numberOfPlayers;++i) {
        doPlay(i,sumOfPlay);

        std::cout << "NEXT TURN: Player " << i+1 <<std::endl;
        playAgain();

        
        std::cin >> continueOrNot;

        while ((continueOrNot == "y") && (sumOfPlay[i] < 9 )) {
            
            doPlay(i,sumOfPlay);
            if (sumOfPlay[i] > 9) {
                std::cout << "YOU LOSE!" << std::endl;
                break;
            }
            playAgain();
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