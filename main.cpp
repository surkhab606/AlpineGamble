#include <iostream> 
#include <string> 
#include <map> 
using namespace std;

//PLAYER CHOOSES TO MOVE FORWARD, PLAY CARD OR STAY PUT
//AS PLAYER MOVES FORWARD, THEY ENCOUNTER CAMPS. CAN CHOOSE 
//TO STAY AT CAMPS OR MOVE PAST THEM
//AFTER PLAYER CHOICE, MOUNTAIN PLAYS CARD
//MOUNTAIN CARDS CAN KILL OR OTHERWISE DISRUPT PLAYER

//PLAYER GOAL: GET TO SUMMIT AND COME DOWN
//MOUNTAIN GOAL: KILL PLAYER



map<string, string> mountainCards() { 
    map<string, string> mountainCardList = {{"...", "..."},
                                            {"...", "..."},
                                            {"...", "..."}, 
                                            {"...", "..."}};
    
    return mountainCardList; 
}




map<string, string> playerCards() { 
    map<string, string> playerCardList = {{"1) Granola Bar", "Restore 5% of your Total Energy."}, 
                                    {"2) Red Talisman", "Your next move uses 150% less Total Energy. Discarded upon use."},
                                    {"3) Bag of Trail Mix", "Restore 15% of your Total Energy."}};
    
    return playerCardList; 

}



void mountainMove() { 
    
}










void playerMove(int playerChoice) { 
    if(playerChoice == 1) { 
        cout << "You move forward.";
    }

    else if (playerChoice == 2) { 
        int playingCardDecision; 
        cout << "What card would you like to play? Select 0 to view available cards, or select 1, 2 or 3 to play that card." << "\n"; 
        cin >> playingCardDecision; 
        while (playingCardDecision == 0) { 
            for (auto card : playerCards()) { 
                cout << card.first << ": " << card.second << "\n\n"; 
            }
            cout << "What card would you like to play? Select 1, 2 or 3 to play that card." << "\n"; 
            cin >> playingCardDecision; 

        };

    }
}

int main() { 

    //PLAYER always starts first 
    int playerTurn = 1; 
    cout << "PRESS (1) TO MOVE FORWARD. (2) TO PLAY A CARD. (3) TO STAY PUT." << "\n"; 
    int userChoice; 
    cin >> userChoice; 
    playerMove(userChoice); 
    playerTurn = 0; 




    return 0;   

}