// This application is to create a calculator to let user to do calculation


#include <iostream>
#include <string>

using namespace std;

bool isint(string num) {
        for (int i = 0; i < num.length(); i++) {
                if (isdigit(num[i]) == false) {
                        return false;
                }
        }
        return true;
}

bool isOperation(char operation) {
        string operationlist = "+-*/%^";
        for (int i = 0; i < operationlist.length(); i++) {
                if (operationlist[i] == operation) {
                        return true;
                }
        }
        return false;
}

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
int mod(int first, int second) {
	return first % second;
}
int powerOf(int first, int second) {
	
	if (second == 0) {
		return first * first;
	}
	else {
		second -= 1;
		return powerOf(first, second);
	}
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
	case '%':
		return mod(firstNo, secondNo);
		break;
	case '^':
		return powerOf(firstNo, secondNo);
	default:
		return 0;
	}
}

int main() {
	string infirst;
	int first;
	char operation;
	int result;

	cout << "This is a calculator which do + - * / % ^" << endl;

	do {
		cout << "Please enter a number : ";
                cin >> infirst;
                while (isint(infirst) != true) {
                        cout << "Error!" << endl;
                        cout << "Please enter a number : ";
                        cin >> infirst;
                }
		first = stoi(infirst);
		if (operation != NULL) {
			cout << result << " " << operation << " " << first;

			result = doOperation(operation, result, first);
			cout << " = ";			
		}
		else {
			result = first;
		}

		cout << result;
		cout << endl;
		cout << "Please enter an operation: ";
                cin >> operation;
                while (isOperation(operation) != true) {
                        cout << "Error!" << endl;
                        cout << "Please choose your operation: ";
                        cin >> operation;
                }
		
	} while (operation != '=');

	cout << "Final asnwer = " << result;
	return 0;
}
