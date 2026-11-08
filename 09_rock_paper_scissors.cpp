#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int pcMoves[5]= {3, 2, 1, 2, 3};
    int round= 0;
    int userWins= 0, pcWins = 0, draws = 0;

    cout<< "Enter 1 for Rock, 2 for Paper, 3 for Scissor\n";
    cout<< "Enter 0 to exit the game.\n";

    while (round< 5) 
    {
        int userChoice;
        cout<< "\nRound "<< (round+ 1)<< ": ";
        cin>> userChoice;

        if (userChoice== 0)
            break;
        if ((userChoice!= 1)&&(userChoice!= 2)&&(userChoice!= 3))
        {
            cout<< "invalid number!!";
            break;
        }

        int pcMove= pcMoves[round];
        string pcMoveName;
        if (pcMove== 1) 
             pcMoveName= "Rock";
        else if (pcMove== 2) 
             pcMoveName= "Paper";
        else 
             pcMoveName= "Scissor";

        cout<< "computer chose: " << pcMoveName<< '\n';

       if (((userChoice== 1)&&(pcMove== 3))||((userChoice== 2)&&(pcMove== 1))||((userChoice== 3)&&(pcMove== 2))) 
        {
            cout<< "you win"<<'\n';
            userWins++; 
        }
        else if (userChoice== pcMove) 
        {
            cout<< "draw"<< '\n';
            draws++;
        }
        else 
        {
            cout<< "you lose"<< '\n';
            pcWins++;
        }

        round++;
    }
    
    cout<< "\nresult is:"<< '\n';
    cout<< "for "<< round<< " round"<< '\n';
    cout<< "your wins: "<< userWins<< '\n';
    cout<< "pc wins: "<< pcWins<< '\n';
    cout<< "draws: "<< draws<< '\n';

    return 0;
}
