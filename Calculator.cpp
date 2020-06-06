// This application is to create a calculator to let user to do calculation

#include <iostream>
#include <string>
using namespace std;

int add(int first, int second) {
    return first + second;
}
int subtract(int first, int second) {
    return first - second;
}
int multiple(int first, int second) {
    return first * second;
}
int division(int first, int second) {
    return first / second;
}

int doOperation(char operation, int firstNo, int secondNo) {
    
    switch (operation) {
    case '+': 
        return add(firstNo, secondNo);
        break;
    case '-': 
        return subtract(firstNo, secondNo);
        break;
    case '*': 
        return multiple(firstNo, secondNo);
        break;
    case '/': 
        return division(firstNo, secondNo);
        break;
    default: 
        return 0;
    }
}

int main()
{
    int first{};
    int second{};
    char operation{};

    cout << "This is a calculator. " << endl;
    cout << "Please enter number : ";
    cin >> first;
    cout << "Please choose your operation: ";
    cin >> operation;
    cout << "Please enter number : ";
    cin >> second;

    int result = doOperation(operation, first, second);
    cout << "Ans : " << result << endl;
}
