#include<iostream>
using namespace std;

int main ()

{

    int someNums[]= {1,-200,40,27,-53,873};
    for (const int num :someNums)
    cout<<num<<endl;

    for (int i =0; i<=someNums.length;i++)
    {
        if (someNums[i]=200)

        {
            cout<<"match";
        }
        else
         {
           return 0;
        }
    }

    return 0;

}
/*ask romarik*/