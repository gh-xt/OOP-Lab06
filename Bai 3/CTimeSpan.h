#ifndef CTIMESPAN_H_
#define CTIMESPAN_H_
#include<iostream>
using namespace std;
class CTimeSpan
{
private:
    long Day;
    int Hour;
    int Minute;
    int second;
public:
    CTimeSpan();
    CTimeSpan(long d,int h,int m,int s);
    ~CTimeSpan();
    long GetDay();
    int GetHour();
    int GetMinute();
    int GetSecond();
    long GetTotalHour();
    long GetTotalMinute();
    long GetTotalSecond();
    friend ostream& operator<<(ostream & os,CTimeSpan & Time);
    friend istream& operator>>(istream& is,CTimeSpan & Time);
    CTimeSpan operator+(CTimeSpan& T);
    CTimeSpan operator-(CTimeSpan& T);
    bool operator>( CTimeSpan&T);
    bool operator<( CTimeSpan&T);
    bool operator>=( CTimeSpan&T);
    bool operator<=( CTimeSpan&T);
    bool operator==( CTimeSpan&T);
    bool operator!=( CTimeSpan&T);
};
#endif