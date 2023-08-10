# include<iostream>
# include<ctime>
# include<cstdlib>
using namespace std;
//globle constants
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;


//function prototype
void comChoice(int &);
void userChoice(int &);
void displayChoice(int, int);
void winner(int &, int &);


//main function
int main()
{
    //variables
    int c_choice = 0;
    int u_choice = 0;
    srand(time(0));

    //simulate computer choice(function)
    comChoice(c_choice);    

    //get user choice (function)
    userChoice(u_choice);

    //display the choice
    displayChoice(c_choice , u_choice); 
    
    // determine winner (function)
    winner(c_choice, u_choice);
    return 0;
}

//function defination
void comChoice(int &c_choice)
{
    const int MAX_VALUE = 3;
    const int MIN_VALUE = 1;

    c_choice = (rand()%(MAX_VALUE - MIN_VALUE + 1)+MIN_VALUE);
}

void userChoice(int &u_choice)
{
    int choice;
    cout<< "\nMenu\n";
    cout<< "1) Rock\n";
    cout<< "2) Paper\n";
    cout<< "3) Scissors\n";
    cout<< "Please enter choice: ";
    cin>> choice;

    while(choice < 1 || choice > 3)
    {
        cout<< "\nInvalid choice.\n";
        cout<< "\nMenu/\n";
        cout<< "1) Rock\n";
        cout<< "2) Paper\n";
        cout<< "3) Scissors\n";
        cout<< "Please enter choice: ";
        cin>> choice;
    }
    u_choice = choice;
}

void displayChoice(int c_choice , int u_choice)
{
    cout << "\nComputer Picked: " << c_choice << endl;
    cout << "\nYou Picked: " << u_choice << endl;
}
void winner(int &c_choice , int &u_choice)
{
    if(u_choice == c_choice)
        cout<< "\nNo winner\n";
    else if(u_choice == ROCK)
    {
        if(c_choice == PAPER)
        cout<< "Computer wins! Paper covers rock. \n";
        else if(c_choice == SCISSORS)
        cout<< "You win! Rock smashes scissors \n";
    }
    else if(u_choice == PAPER)
    {
        if(c_choice == ROCK)
        cout<< "You win! Paper covers rock\n";
        else if(c_choice == SCISSORS)
        cout<< "Computer Wins! Scissors cut paper\n";
    }
    else if(u_choice == SCISSORS)
    {
        if(c_choice == ROCK)
        cout<< "Computer wins! Rock smashes scissors\n";
        else if(c_choice == PAPER)
        cout<< "You win! Scissors cut paper\n";
    }
    else
        cout<< "\nsomthing went wrong. \n";
}