// This application is to create a calculator to let user to do calculation
//testing456789
// testing123


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
	int first{};
	char operation{};
	int result{};

	cout << "This is a calculator which do + - * / % ^" << endl;

	do {
		cout << "Enter number : ";
		cin >> first;
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
		cout << "Enter operation: ";
		cin >> operation;

	} while (operation != '=');

	cout << "final asnwer = " << result;
	return 0;
}