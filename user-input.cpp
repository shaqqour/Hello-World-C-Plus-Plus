#include <iostream>

using namespace std;

int main()
{
    int first;
    int another;
    int theNextDishTime;
    int totalTime;
    int numberOfDishes = 0;

    cout << "Please enter the time takes to cook the first dish: ";
    cin >> first;

    cout << "\nPlease enter the time takes to cook any additional dish: ";
    cin >> another;

    cout << "\nPlease enter the total time you have for cooking: ";
    cin >> totalTime;

    totalTime -= first;
    theNextDishTime = first + another;

    while (totalTime >= 0)
    {
        numberOfDishes++;
        totalTime -= theNextDishTime;
        theNextDishTime = theNextDishTime + another;
    }

    cout << "\nThe number of total dishes you can cook is: ";
    cout << numberOfDishes;
    cout << "\n";
}