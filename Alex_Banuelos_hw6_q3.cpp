/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>

int main()
{
int number;
//asks user to enter a number 1-10
cout <<"Enter a number from 1-10: "<<endl;
cin>>number;

//displays the roman numer according to the number entered
switch (number){
case 1:
cout<<"You entered roman numeral: I"<<endl;
break;

case 2:
cout <<"You entered roman numeral: II"<<endl;
break;

case 3:
cout <<"You entered roman numeral: III"<<endl;
break;

case 4:
cout <<"You entered roman numeral: IV"<<endl;
break;

case 5:
cout <<"You entered roman numeral: V"<<endl;
break;

case 6:
cout <<"You entered roman numeral: VI"<<endl;
break;

case 7:
cout <<"You entered roman numeral: VII"<<endl;
break;

case 8:
cout <<"You entered roman numeral: VIII"<<endl;
break;

case 9:
cout <<"You entered roman numeral: IX"<<endl;
break;

case 10:
cout <<"You entered roman numeral: X"<<endl;
break;
//input validation
default:

cout<<"Invalid,enter a number 1-10"<<endl;

}


    return 0;
}