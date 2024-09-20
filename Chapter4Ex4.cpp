/* Title : Chapter 4 Exercise 4 - 
   File Name : Chapter4Ex4
   Programmer : Josh Richards
   Date : Sep 20, 2024
   Requirements : 


*/
#include <iostream>
using namespace std;


int main()
{
    int numberBooks;
    std::cout << "How many boods did you purchase?";
    cin >> numberBooks;
    switch (numberBooks)
    {
    case 0: cout << "You have earned NO points" << endl;
        break;
    case 1: cout << "You have earned 5 points" << endl;
        break;
    case 2: cout << "You have earned 10 points" << endl;
        break;
    case 3: cout << "You have earned 30 points" << endl;
        break;
    default: "You have earned 60 points" << endl;

    }
    if (numberBooks >= 0)
    {
        if (numberBooks == 0)
            cout << "You have earned NO points" << endl;
        else if (numberBooks == 1)
            cout << "You have earned 5 points" << endl;
        else if (numberBooks == 2)
            cout << "You have earned 10 points" << endl;
        else if (numberBooks == 3)
            cout << "You have earned 30 points" << endl;
        else
            cout << "You have earned 60 points" << endl;
    }
    else
        cout << "Please enter a valid number";

}

