#include<iostream>

using namespace std;

enum months{ January, February, March, April, 
May ,June ,July ,August, September ,October ,Nuvember ,December};
enum mobile{Batterycapacity=1, CameraQuality=2,largestorage=7};
enum DaysOfWeek {Monday, Tuesday , Wednesday ,Thursday , Friday ,Satrunday, Sunday};

 

 int main()
 {  months month;
    DaysOfWeek day; 
    mobile features;
    day = Monday;
    cout<<"Today we are at : "<<day<<endl;

    switch (features)
    {
        case Batterycapacity:
        {
            cout<<"batterycapacity";
            break;
        }
        case CameraQuality:
        {
            cout<<"camera is shining ";
        }
        default:
        break;
    }
    
  
    
    months m;
    cout<<"enter months:";
    m = April;
    cout<<"months is : "<<m+1 <<" mobile features: "<< features <<endl;
    return 0;

 }