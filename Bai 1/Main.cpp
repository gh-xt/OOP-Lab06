#include<iostream>
#include "SoPhuc.h"
#include "SoPhuc.cpp"
using namespace std;
int main(){
    SoPhuc sp1(2);
    SoPhuc sp2(5);
    cout<<"So phuc 1: "<<sp1<<endl;
    cout<<"So phuc 2: "<<sp2<<endl;;
    SoPhuc add,sub,multi,div;
    add=sp1+sp2;
    cout<<"Add: "<<add<<endl;
    sub=sp1-sp2;
    cout<<"Sub: "<<sub<<endl;
    multi=sp1*sp2;
    cout<<"Multi: "<<multi<<endl;
    div=sp1/sp2;
    cout<<"Div: "<<div<<endl;
    cin>>sp1>>sp2;
    cout<<"Compare:"<<endl;
    cout<<"sp1 == sp2 : "<<(bool)(sp1==sp2)<<endl;
    cout<<"sp1 != sp2 : "<<(bool)(sp1!=sp2)<<endl;
    cout<<"sp1 > sp2 : "<<(bool)(sp1>sp2)<<endl;
    cout<<"sp1 < sp2 : "<<(bool)(sp1<sp2)<<endl;
    cout<<"sp1 >= sp2 : "<<(bool)(sp1>=sp2)<<endl;
    cout<<"sp1 <= sp2 : "<<(bool)(sp1<=sp2)<<endl;
    cout<<sp1<<endl<<sp2;
    return 0;
}