#pragma once
#include<iostream>
using namespace std;
class INTEGER
{
private:
    int i_Value;
public:
    INTEGER(int value);
    INTEGER();
    ~INTEGER();
    INTEGER operator+(const INTEGER i);
    INTEGER operator-(const INTEGER i);
    INTEGER operator*(const INTEGER i);
    INTEGER operator/(const INTEGER i);
    friend ostream & operator<<(ostream & os,const INTEGER & i);
    friend istream & operator>>(istream & is,INTEGER & i);
};