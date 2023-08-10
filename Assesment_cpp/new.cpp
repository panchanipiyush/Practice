#include <iostream>

#include <locale>

#include <string>

#include <cstdlib>

#include <time.h>

using namespace std;

int play(int user, int cpu)
{

    return (user - cpu); // here is just substracting and returning the value entered by user and cpu
}

void display(int choice)
{ // to display the choices entered by user or cpu

    if (choice == 1)
    { // 1 for Rock

        cout << "Rock" << endl;
    }
    else if (choice == 2)
    { // 2 for Paper

        cout << "Paper" << endl;
    }
    else
    { // 3 for Scissors

        cout << "Scissors" << endl;
    }
}

void winner(int win)
{

    if (win == 0)
    { // if user and cpu entered same value

        cout << "A game is a draw." << endl;
    }
    else if (win == 1)
    { // if user entered Paper and cpu entered Rock or if user entered Scissors and cpu entered Paper

        cout << "Hurray You won." << endl;
    }
    else if (win == -1)
    { // if user entered Rock and cpu entered Paper or if user entered Paper and cpu entered Scissors

        cout << "CPU won." << endl;
    }
    else if (win == 2)
    { // if user entered Scissors and cpu entered Rock

        cout << "CPU won." << endl;
    }
    else if (win == -2)
    { // if user entered Rock and cpu entered Scissors

        cout << "Hurray You won." << endl;
    }
}

int cpu_choice()
{

    srand(time(NULL)); // this function is to generate random from time to time

    int cpu = 1000;

    while (cpu > 3)
    { // to generate random number between 1 to 3

        cpu = (rand() % cpu) + 1;
    }
    return cpu;
}

int main(){

    int choice = 0, cpu = 0, win = 0;
    locale loc;
    string ch;
    cout << "Enter your choice :" << endl;
    cout << "1. Rock\n2. Paper\n3. Scissors" << endl         << "\t";

    cin >> ch;
    ch[0] = toupper(ch[0], loc); // converting the first element to char if by misktake the user have entered lower case

    if (ch.compare("Rock") == 0 || ch.compare("Paper") == 0 || ch.compare("Scissors") == 0)
    { // if choice is correct
        cout << "You: " << ch << endl; // display the choice entered by the user

        if (ch[0] == 'r' || ch[0] == 'R')
            choice = 1; // if the user enter rock or Rock

        else if (ch[0] == 'p' || ch[0] == 'P')
            choice = 2; // if the user enter paper or Paper

        else if (ch[0] == 's' || ch[0] == 'S')
            choice = 3; // if the user enter scissors or Scissors

        cout << "CPU: ";

        cpu = cpu_choice(); // get cpu choice

        display(cpu); // display the choice entered by the cpu using the random number

        win = play(choice, cpu); // call the function to play the game and returns the winner

        winner(win); // display the winner
    }
    else
    { // if entered choice is wrong

        cout << "wrong choice!" << endl;
    }

    return 0;
}