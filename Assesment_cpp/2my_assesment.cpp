#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;
class GAME
{
public:
    char name[100];
    int round;
    int choice;
    // set up my variables for the scores
    int win = 0;
    int tie = 0;
    int lose = 0;
    char yesNo;

    void getdata()
    {

        cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
        cout << "               NAME               \n";
        cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";
        cout << "Enter Your Name : ";
        cin >> name;
    }
    void playGame()
    {
        // do
        // {
            int Com_choice = rand() % 3 + 1;
            for (int i = 1; i <= round; i++)
            {
                cout << "\n\nRound No : " << i << "/" << round << endl;
                cout << "\n-* " << name << "'s Score = " << win << endl;
                cout << "\n-* Computer Score = " << lose << endl;

                cout << "\n\n";
                cout << "Enter your choice and play your game" << endl;
                cout << "1) for Rock," << endl
                     << "2) for Paper," << endl
                     << "3) for Scissors," << endl;
                cin >> choice;
                cout << endl;
                cout << "select your choice : " << choice << endl;

                cout << endl;
                cout << "The computer chose: " << Com_choice << endl;

                // cout << "\n\nRound No : " << i << "/" << round << endl;

                // int Com_choice = rand() % 3 + 1;

                // starts possible outcome sequence in rock paper scissors there are 9 possible out comes 3 wins 3 ties and 3 losses.
                if (choice == 1 && Com_choice == 1)
                {
                    cout << endl
                         << "Rock meets Rock its a tie!" << endl;
                    tie++;
                }
                else if (choice == 1 && Com_choice == 2)
                {
                    cout << endl
                         << "Rock is covered by Paper the computer wins!." << endl;
                    lose++;
                }
                else if (choice == 1 && Com_choice == 3)
                {
                    cout << endl
                         << "Rock crushes Scissors you win!" << endl;
                    win++;
                }
                else if (choice == 2 && Com_choice == 1)
                {
                    cout << endl
                         << "Paper covers Rock you win!" << endl;
                    win++;
                }
                else if (choice == 2 && Com_choice == 2)
                {
                    cout << endl
                         << "Paper meets Paper its a tie!" << endl;
                    tie++;
                }
                else if (choice == 2 && Com_choice == 3)
                {
                    cout << endl
                         << "Paper is cut by Scissors the computer wins!" << endl;
                    lose++;
                }
                else if (choice == 3 && Com_choice == 1)
                {
                    cout << endl
                         << "Scissors are crushed by Rock computer wins!" << endl;
                    lose++;
                }
                else if (choice == 3 && Com_choice == 2)
                {
                    cout << endl
                         << "Scissors cuts Paper you win!" << endl;
                    win++;
                }
                else if (choice == 3 && Com_choice == 3)
                {
                    cout << endl
                         << "Scissors meet Scissors its a tie!" << endl;
                    tie++;
                }
                // this is what happens if the player doesn't hit 1 2 or 3
                else
                {
                    cout << "You didn't select 1, 2, or 3" << endl;
                }
            }

            cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
            cout << endl;
            cout << "Wins: " << win << endl;
            cout << "Ties:" << tie << endl;
            cout << "Losses:" << lose << endl;
            cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";

            cout << "Would you like to play again? Y/N" << endl;
            cin >> yesNo;
            // system("CLS");
        // }
    }
    void ROUND()
    {
        cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
        cout << "               ROUNDS               \n";
        cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";
        cout << name << " How Many Rounds you want to play? : ";
        cin >> round;

        cout << "\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
        cout << "               GAME               \n";
        cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";
    }
};

int main()
{

    char yesNo;
    class GAME player;

    do
    {
        player.getdata();
        player.ROUND();
        player.playGame();
        cout << "Would you like to play again? Y/N" << endl;
        cin >> yesNo;
        // system("CLS");
    } while (yesNo == 'Y' || yesNo == 'y');

    return 0;
}
// char name[100];
// int round;
// cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
// cout<<"               NAME               \n";
// cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";
// cout<<"Enter Your Name : ";
// cin>>name;

// cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
// cout<<"               ROUNDS               \n";
// cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";
// cout<<name<<" How Many Rounds you want to play? : ";
// cin>>round;