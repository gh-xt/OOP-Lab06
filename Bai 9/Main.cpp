#include<iostream>
#include"INTEGER.h"
#include"INTEGER.cpp"
using namespace std;
int main(){
    INTEGER i1,i2;
    cin>>i1>>i2;
    cout<<i1<<" + "<<i2<<" ="<<(i1+i2)<<endl;
    cout<<i1<<" - "<<i2<<" ="<<(i1-i2)<<endl;
    cout<<i1<<" * "<<i2<<" ="<<(i1*i2)<<endl;
    cout<<i1<<" / "<<i2<<" ="<<(i1/i2)<<endl;
}