#include<iostream>
#include "PhanSo.h"
#include<math.h>
using namespace std;
PHANSO::PHANSO(){
    TuSo=0;
    MauSo=1;
}
PHANSO::PHANSO(int a){
    TuSo=a;
    MauSo=1;
}
void PHANSO::Reduce(){
    int ucln;
    int a=abs(TuSo);
    int b=abs(MauSo);
    if(TuSo==0&&MauSo==0){
        ucln=TuSo+MauSo;
    }
    else{
        while(a!=b){
            if(a>b){
                a-=b;
            }
            else
            {
                b-=a;
            }
        }
        ucln=a;
    }
    TuSo/=ucln;
    MauSo/=ucln;
}
PHANSO::~PHANSO(){
}
PHANSO PHANSO::operator+(const PHANSO & Ps){
    PHANSO res;
    res.TuSo=this->TuSo*Ps.MauSo+Ps.TuSo*this->MauSo;
    res.MauSo=this->MauSo*Ps.MauSo;
    res.Reduce();
    return res;
}
PHANSO PHANSO::operator-(const PHANSO & Ps){
    PHANSO res;
    res.TuSo=this->TuSo*Ps.MauSo-Ps.TuSo*this->MauSo;
    res.MauSo=this->MauSo*Ps.MauSo;
    res.Reduce();
    return res;
}
PHANSO PHANSO::operator*(const PHANSO & Ps){
    PHANSO res;
    res.TuSo=this->TuSo*Ps.TuSo;
    res.MauSo=this->MauSo*Ps.MauSo;
    res.Reduce();
    return res;
}
PHANSO PHANSO::operator/(const PHANSO & Ps){
    PHANSO res;
    res.TuSo=this->TuSo*Ps.MauSo;
    res.MauSo=this->MauSo*Ps.TuSo;
    res.Reduce();
    return res;
}
bool PHANSO::operator==(const PHANSO & Ps){
    return (this->TuSo/this->MauSo-Ps.TuSo/Ps.MauSo==0);
}
bool PHANSO::operator!=(const PHANSO & Ps){
    return (this->TuSo/this->MauSo-Ps.TuSo/Ps.MauSo!=0);
}
bool PHANSO::operator>(const PHANSO & Ps){
    return (this->TuSo/this->MauSo-Ps.TuSo/Ps.MauSo>0);
}
bool PHANSO::operator<(const PHANSO & Ps){
    return (this->TuSo/this->MauSo-Ps.TuSo/Ps.MauSo<0);
}
bool PHANSO::operator>=(const PHANSO & Ps){
    return (this->TuSo/this->MauSo-Ps.TuSo/Ps.MauSo>=0);
}
bool PHANSO::operator<=(const PHANSO & Ps){
    return (this->TuSo/this->MauSo-Ps.TuSo/Ps.MauSo<=0);
}
ostream & operator<<(ostream &os,const PHANSO &Ps){
    os<<Ps.TuSo<<"/"<<Ps.MauSo;
    return os;
}
istream & operator>>(istream &is,PHANSO& Ps){
    cout<<"Nhap tu so: ";
    is>>Ps.TuSo;
    Ps.MauSo=1;
    return is;
}