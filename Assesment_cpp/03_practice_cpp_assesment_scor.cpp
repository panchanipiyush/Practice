#include <iostream>
#include <stdlib.h>
//#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>
using namespace std;

void instructions()
{
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1) ROCK!\n";
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "2) PAPER!\n";
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "3) SCISSORS!\n";
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Shoot! ";
    
}
int main()
{
    int userWins = 0;
    int computerWins = 0;

    int gamesCount = 0;

    //assign gamesCount = user input

    std::cout << "============================================================================\n";
    std::cout << "Welcome! Thank you for playing a game of rock, paper, and scissors with me!  \n";
    std::cout << "Please choose one of the following options: \n";
    std::cout << "============================================================================\n";

    while ((gamesCount < 10) && (userWins <= 3) && (computerWins <= 3) && (userWins <= computerWins + 2) && (computerWins != userWins + 2))
    {
        ++gamesCount;

        srand(time(NULL));
        int computer = rand() % 3 + 1;
        int user = 0;

        instructions();

        std::cin >> user;
        if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2))
        {
            std::cout << "You win!\n";
            ++userWins;
        }
        else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1))
        {
            std::cout << "Computer win!\n";
            ++computerWins;
        }
        else if (user == computer)
        {
            std::cout << "Tied\n";
        }
        else
        {
            std::cout << "Error, please use and input between 1-3\n";
        }
        std::cout << "Your score is currently " << userWins << ", Computer score is " << computerWins << "\n";
        std::cout << "============================================================================\n";
    }

    std::cout << "Your final score is " << userWins << ", whereas the Computer's final score is " << computerWins << "\n";

    if (userWins > computerWins)
    {
        std::cout << "You have succesfully beat the computer! Congratulations!\n";
    }
    else if (userWins < computerWins)
    {
        std::cout << "Unfortunately the computer has bested you!\n";
    }
    else
    {
        std::cout << "DRAW! What a close game!\n";
    }
}



//https://codereview.stackexchange.com/questions/268716/rock-paper-scissors-in-c