#include<iostream>
#include<string>


using namespace std;

int main()
{
   int size;
    string expenses;

    string *expArray = new string [size];
     cin>>size ; 

    for ( int i=0 ;i<=size ; i++)
    {
        cout<<"enter the expenses Number : [" << i << "]";
       cin>>expArray[i];
       // return 0;
     
    }

  for (int y = 0; y <=size; y++)
    {
        cout<<expArray[y] <<"\t";
    }
    
    return 0; 
    
}