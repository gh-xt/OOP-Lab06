#include<iostream>
#include "PhanSo.h"
#include "PhanSo.cpp"
using namespace std;
int main(){
    PHANSO ps1(4);
    cout<<"Phan So 1: "<<ps1<<endl;
    PHANSO ps2(8);
    cout<<"Phan So 2: "<<ps2<<endl;
    PHANSO sub,add,multi,div;
    sub=ps1-ps2;
    add=ps1+ps2;
    multi=ps1*ps2;
    div=ps1/ps2;
    cout<<"Sub: "<<sub<<endl;
    cout<<"Add: "<<add<<endl;
    cout<<"Multi: "<<multi<<endl;
    cout<<"Div: "<<div<<endl;
    cin>>ps1>>ps2;
    cout<<"Compare ps1 , ps2: "<<endl;
    cout<<"ps1 == ps2 : "<<(ps1==ps2)<<endl;
    cout<<"ps1 != ps2 : "<<(ps1!=ps2)<<endl;
    cout<<"ps1 > ps2 : "<<(ps1>ps2)<<endl;
    cout<<"ps1 < ps2 : "<<(ps1<ps2)<<endl;
    cout<<"ps1 >= ps2 : "<<(ps1>=ps2)<<endl;
    cout<<"ps1 <= ps2 : "<<(ps1<=ps2)<<endl;
    return 0;
}