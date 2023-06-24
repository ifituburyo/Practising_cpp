#include<iostream>
using namespace std;

int main()
{    int number ;
    int factorial =1;
    cout<<"enter the number for factorial";
    cin>>number; 
    for (int i=1;i<=number;i++)
    {
        factorial = factorial * i ;
        cout<<"factorial: "<<factorial<<endl;

    }
    return 0;
}