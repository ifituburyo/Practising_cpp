#include<iostream>

using namespace std;

int main()
{   Start: 
    int num1=0,num2=0;
   
    cout<<"calculating the :  "<<"input the number "<<endl; 
    cin >> num1;
    cout<<"\t \t \t";
    cin>>num2; 

    cout<<"num1 x num2  "<<num1*num2<<endl;
    cout<<"num1+num2  "<<num1+num2 <<endl;
    cout<<"need to make new operation? "<<"(y/N)\t ";
   // cout<<""


    char repeat;
    cin>>repeat; 
    if (repeat =='Y') {
       
           goto Start; }
        
    cout<<"thanks for calculating with us";
 return 0;
}