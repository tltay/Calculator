// This application is to create a calculator to let user to do calculation
// updates

#include <iostream>
#include <string>

using namespace std;

bool isint(string num) {
        for (int i = 0; i < num.length(); i++) {

			// just use !boolean return from function
                if (!isdigit(num[i])) {
                        return false;
                }
        }
        return true;
}

bool isOperation(char operation) {
        string operationlist = " +-*/%^";
		return operationlist.find(operation);

		// do not need this use string.find will do
		/*if ( {
			
		}
        for (int i = 0; i < operationlist.length(); i++) {
                if (operationlist[i] == operation) {
                        return true;
                }
        }*/
        /*return false;*/
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

const char EQUAL_SIGN = '=';
int main() {
	// use brace initialisation
	string infirst{};
	int first{};
	char operation{};
	int result{};

	cout << "This is a calculator which do + - * / % ^" << endl;

	do {
		cout << "Please enter a number : ";
                cin >> infirst;
				// use ! boolean return from funtion
                while (!isint(infirst)) {
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
				//  use ! boolean return from functions
                while (!isOperation(operation)) {
                        cout << "Error!" << endl;
                        cout << "Please choose your operation: ";
                        cin >> operation;
                }
		// use a global constant
	} while (operation != EQUAL_SIGN);

	cout << "Final answer = " << result;
	return 0;
}
