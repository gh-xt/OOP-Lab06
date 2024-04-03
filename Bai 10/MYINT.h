#pragma once
#include<iostream>
using namespace std;
class MYINT
{
private:
    int i_Value;
public:
    MYINT(int value);
    MYINT();
    ~MYINT();
    MYINT operator+(const MYINT i);
    MYINT operator-(const MYINT i);
    // MYINT operator*(const MYINT i);
    // MYINT operator/(const MYINT i);
    friend ostream & operator<<(ostream & os,const MYINT & i);
    friend istream & operator>>(istream & is,MYINT & i);
};