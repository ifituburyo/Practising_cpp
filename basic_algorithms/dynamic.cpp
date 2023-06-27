#include<iostream>

using namespace std;

int main()
{

    int size; 
    cout<<"Enter the size of array :";
    cin>>size;
    int* myArray = new int [size];
    for (int i=0 ;i<size ; i++)
    {
        cout<<"myArray ["<< i <<"]" ;
        cin>>myArray[i] ; //<<endl;

    }
   for (int i=0;i <size;i++)
   {
    cout<<myArray[i]<<"  ";
   }

   // delete [] myArray;
   //myArray =NULL;
    
}