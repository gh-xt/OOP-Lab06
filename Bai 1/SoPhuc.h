#ifndef SOPHUC_H_
#define SOPHUC_H_
#include<iostream>
using namespace std;
class SoPhuc{
    private:
        double thuc;
        double ao=0;
    public:
    SoPhuc();
    SoPhuc(double t);
    friend ostream & operator<<(ostream & os,const SoPhuc& SP);
    friend istream & operator>>(istream & is,SoPhuc &SP);
    ~SoPhuc();
    SoPhuc operator+(const SoPhuc& SP);
    SoPhuc operator-(const SoPhuc& SP);
    SoPhuc operator*(const SoPhuc& SP);
    SoPhuc operator/(const SoPhuc& SP);
    bool operator==(const SoPhuc & SP);
    bool operator!=(const SoPhuc & SP);
    bool operator>(const SoPhuc & SP);
    bool operator<(const SoPhuc & SP);
    bool operator>=(const SoPhuc & SP);
    bool operator<=(const SoPhuc & SP);
};
#endif