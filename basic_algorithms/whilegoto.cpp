#include<iostream>

using namespace std;

int main()
{
    char userSelectionMode ='R';
    cout<<"input primary prompty: ";
    cin>>userSelectionMode;
    int num1, num2 ; 
    while(userSelectionMode =='R')
    {
        cout<<"enter the two number for operation";
        cin>> num1;
        cout<<"enter  the second number: \t \t";
        cin >> num2;
        cout<<"the sum of num1 and num2 : \t num1+num2 "<<num1+num2 <<endl;
        cout<<"the product of num1 and num2 : \t num1 * num2"<< num1*num2<<endl; 
        cout<<"do you wish to repeat a process: ? press 'R' for yes , else for No" ;
        cin>> userSelectionMode;

    }

    cout << "thanks for calculating with us "; 
    cout<<"goodbye";

    return 0; 
}