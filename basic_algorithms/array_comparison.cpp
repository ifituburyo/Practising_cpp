#include<iostream>
#include<cmath>

using namespace std;
int main()
{ int max;
    int size;
    cout<<"enter the size: ";
    cin>>size;

    int array[size];

    for(int i =0; i<size ;i++)
    {
        cout<<"enter element ["<<i<<"]"<<endl;
        cin>>array[i];
    }
    for (int j= 0; j < size; j++)
    {
     if (array[j]>max){
        max=array[j];
        
     }

    }
    cout<<"maximu :"<<max<<endl;
    return 0;
}