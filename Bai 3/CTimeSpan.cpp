#include<iostream>
#include"CTimeSpan.h"
#include"CTimeSpan.cpp"
using namespace std;

CTimeSpan::CTimeSpan(){
    this->Day=this->Hour=this->Minute=this->second=0;
}
CTimeSpan::CTimeSpan(long d,int h,int m,int s){
    this->Day=d;
    this->Hour=h;
    this->Minute=m;
    this->second=s;
}
CTimeSpan::~CTimeSpan(){
}
long CTimeSpan::GetDay(){
    return this->Day;
}
int CTimeSpan::GetHour(){
    return this->Hour;
}
int CTimeSpan::GetMinute(){
    return this->Minute;
}
int CTimeSpan::GetSecond(){
        return this->second;
}
long CTimeSpan::GetTotalHour(){
    return this->Hour+this->Day*24;
}
long CTimeSpan::GetTotalMinute(){
    return this->Minute+this->Hour*60+this->Day*24*60;
}
long CTimeSpan::GetTotalSecond(){
    return this->second+this->Minute*60+this->Hour*60*60+this->Day*24*60*60;
}
ostream& operator<<(ostream & os,CTimeSpan & Time){
    os<<Time.Day<<"d"<<Time.Hour<<"h"<<Time.Minute<<"m"<<Time.second<<"s";
    return os;
}
istream& operator>>(istream& is,CTimeSpan & Time){
    is>>Time.Day>>Time.Hour>>Time.Minute>>Time.second;
}
CTimeSpan CTimeSpan::operator+(CTimeSpan& T){
    CTimeSpan Time;
    Time.Day=(this->GetTotalHour()+T.GetTotalHour())/24;
    Time.Hour=(this->GetTotalHour()+T.GetTotalHour())%24;
    Time.Minute=(this->GetTotalMinute()+T.GetTotalMinute())%60;
    Time.second=(this->GetTotalSecond()+T.GetTotalSecond())%60;
    return Time;
}
CTimeSpan CTimeSpan::operator-( CTimeSpan& T){
    CTimeSpan Time;
    if(this->GetTotalSecond()-T.GetTotalSecond()<0){
        cout<<"Fail,negative time!"<<endl;
        return Time;
    }
    Time.Day=(this->GetTotalHour()-T.GetTotalHour())/24;
    Time.Hour=(this->GetTotalHour()-T.GetTotalHour())%24;
    Time.Minute=(this->GetTotalMinute()-T.GetTotalMinute())%60;
    Time.second=(this->GetTotalSecond()-T.GetTotalSecond())%60;
    return Time;
}
bool CTimeSpan::operator>( CTimeSpan&T){
    return (this->GetTotalSecond()>T.GetTotalSecond());
}
bool CTimeSpan::operator<( CTimeSpan&T){
     return (this->GetTotalSecond()<T.GetTotalSecond());
}   
bool CTimeSpan::operator>=( CTimeSpan&T){
    return (this->GetTotalSecond()>=T.GetTotalSecond());
}
bool CTimeSpan::operator<=( CTimeSpan&T){
    return (this->GetTotalSecond()<=T.GetTotalSecond());
}
bool CTimeSpan::operator==( CTimeSpan&T){
    return(this->GetTotalSecond()==T.GetTotalSecond());
}
bool CTimeSpan::operator!=( CTimeSpan&T){
    return(this->GetTotalSecond()!=T.GetTotalSecond());
}