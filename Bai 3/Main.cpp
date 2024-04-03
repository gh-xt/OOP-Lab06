#include<iostream>
#include "CTimeSpan.h"
using namespace std;
int main(){
    CTimeSpan Time1;  //call default constructor
    CTimeSpan Time2(3,20,25,40);//call constructor
    cout<<"Time1 after constructor: "<<Time1<<", Time1 total second: "<<Time1.GetTotalSecond()<<endl;
    cout<<"Time2 after constructor: "<<Time2<<", Time2 total second: "<<Time2.GetTotalSecond()<<endl;
    cout<<"Set value to Time1: ";
    cin>>Time1;
    CTimeSpan SumTime;
    SumTime=Time1+Time2;
    cout<<"Add Time1 "<<Time1<<" to Time2 "<<Time2<<" = "<<SumTime<<endl;
    CTimeSpan SubTime;
    SubTime=Time1-Time2;
    cout<<"Sub Time1 "<<Time1<<" to Time2 "<<Time2<<" = "<<SubTime<<endl;
    cout<<"Compare time1 and time2 : "<<endl;
    cout<<"Time1 > Time2: "<<(Time1>Time2)<<endl;
    cout<<"Time1 < Time2: "<<(Time1<Time2)<<endl;
    cout<<"Time1 >= Time2: "<<(Time1>=Time2)<<endl;
    cout<<"Time1 <= Time2: "<<(Time1<=Time2)<<endl;
    cout<<"Time1 == Time2: "<<(Time1==Time2)<<endl;
    cout<<"Time1 != Time2: "<<(Time1!=Time2)<<endl;
    return 0;
}