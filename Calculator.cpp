#include <iostream>
using namespace std;
int main()
{
    char op;
    float num, num1, num2, num3;

    cout << "          **** MENU ****       " << endl;
    cout << "1: For Addition" << endl;
    cout << "2: For Subtraction" << endl;
    cout << "3: For Multiplication" << endl;
    cout << "4: For Division" << endl;
    cout << "Choose any number from the given menu" << endl;
    cin >> op;

    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    {
        switch (op)
        {
        case '1':
            cout << "Answer :" << num1 + num2 << endl;
            break;

        case '2':
            cout << "Answer :" << num1 - num2 << endl;
            break;

        case '3':
            cout << "Answer :" << num1 * num2 << endl;
            break;

        case '4':
            cout << "Answer :" << num1 / num2 << endl;
            break;

        default:
            break;
        }
    }
}
