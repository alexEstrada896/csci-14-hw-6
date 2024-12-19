/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	char sign;
//asks user to enter two numbers and an arithmic operation
	cout<<"Enter two numbers: "<<endl;
	cin>>num1;
	cin>>num2;
	cout <<"Enter an arithmic operation(+,-,* or /)"<<endl;
	cin>>sign;




//outputs result based on operation
	switch (sign) {

	case '+':
		cout<<"Result: "<<num1+num2<<endl;
		break;

	case '-':
		cout <<"Result "<<num1-num2<<endl;
		break;

	case '*':
		cout <<"Result "<<num1*num2<<endl;
		break;

	case '/':
//checks if a nummber is divided by 0
		if (num2 == 0) {
			cout<<"Error: Division by zero"<<endl;
		}
		else {

			cout <<"Result "<<num1/num2<<endl;
		}
		break;
//input validation
	default:
		cout <<"Error Invalid operation"<<endl;
	}

	return 0;
}