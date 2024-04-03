#pragma once
#include<iostream>
using namespace std;
class PHANSO{
    private:
        int TuSo;
        int MauSo=1;
    public:
        PHANSO();
        PHANSO(int a);
        void Reduce();
        PHANSO operator+(const PHANSO & Ps);
        PHANSO operator-(const PHANSO & Ps);
        PHANSO operator*(const PHANSO & Ps);
        PHANSO operator/(const PHANSO & Ps);
        bool operator==(const PHANSO & Ps);
        bool operator!=(const PHANSO & Ps);
        bool operator>(const PHANSO & Ps);
        bool operator<(const PHANSO & Ps);
        bool operator>=(const PHANSO & Ps);
        bool operator<=(const PHANSO & Ps);
        friend ostream & operator<<(ostream &os,const PHANSO &Ps);
        friend istream & operator>>(istream &is,PHANSO& Ps);
        ~PHANSO();
};