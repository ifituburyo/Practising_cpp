#include<iostream>
using namespace std;
int calculate(int number1, int number2);

int main(){

    int num1;
    int num2;
    int result;

    cout<<"Enter number1 "<<endl;
    cin>>num1;
    cout<<"enter the number 2" <<endl;

    cin>>num2;
    result = calculate(num1,num2);
    cout<<"we can calculate the sam now if the number are diffrent and triple of sum if number are the same "<< result;
    

    return 0;
}

int calculate (int number1, int number2)
{
    int sum;
    if(number1!=number2)
    {
    sum=number1+number2; return sum; 
    }
    else 
    {
        int triple =3*(number1+number2);
        return triple;
    }

   
}