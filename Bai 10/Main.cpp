#include<iostream>
#include"MYINT.h"
#include"MYINT.cpp"
using namespace std;
int main(){
    MYINT i1,i2;
    cin>>i1>>i2;
    cout<<i1<<" + "<<i2<<" ="<<(i1+i2)<<endl;
    cout<<i1<<" - "<<i2<<" ="<<(i1-i2)<<endl;
    // cout<<i1<<" * "<<i2<<" ="<<(i1*i2)<<endl;
    // cout<<i1<<" / "<<i2<<" ="<<(i1/i2)<<endl;
}