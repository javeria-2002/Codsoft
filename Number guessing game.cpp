#include <iostream>
#include <cstdlib> //used to generate random no.
#include <ctime>   //used to return current time
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    // use current time as a c-value so that every time a
    // random no. is generated it is different from the previous one
    int num = rand() int num = (rand() % 100) + 1;
    // random int should be in between 1-100
    int guess = 0;
    do
    {
        cout << "Enter guess no. between 1-100";
        cin >> guess;
        if (guess > num)
        {
            cout << "Guess a lower num!!" << endl;
        }
        else if (guess < num)
        {
            cout << "Guess a higher num!!" << endl;
        }
        else
            (guess == num)
            {
                cout << "You have guessed the right number :)";
            }
    } while (guess != num);
    return 0;
}
