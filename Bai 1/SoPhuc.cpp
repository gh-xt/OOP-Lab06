#include<iostream>
#include "SoPhuc.h"
#include<cmath>
using namespace std;
SoPhuc::SoPhuc(){
    thuc=ao=0;
}
SoPhuc::SoPhuc(double t){
    thuc=t;
    ao=0;
}
SoPhuc::~SoPhuc(){
}

SoPhuc SoPhuc::operator+(const SoPhuc& SP){
    return SoPhuc(this->thuc+SP.thuc);
}

SoPhuc SoPhuc::operator-(const SoPhuc& SP){
    SoPhuc sub(this->thuc-SP.thuc);
    return sub;

}
SoPhuc SoPhuc::operator*(const SoPhuc& SP){
    SoPhuc multi(this->thuc*SP.thuc);
    return multi;
}
SoPhuc SoPhuc::operator/(const SoPhuc& SP){
    SoPhuc div(this->thuc/SP.thuc);
    return div;
}
bool SoPhuc::operator==(const SoPhuc & SP){
    return (this->thuc==SP.thuc);
}
bool SoPhuc::operator!=(const SoPhuc & SP){
    return (this->thuc!=SP.thuc);
}
bool SoPhuc::operator>(const SoPhuc & SP){
    return (this->thuc>SP.thuc);
}
bool SoPhuc::operator<(const SoPhuc & SP){
    return (this->thuc<SP.thuc);
}
bool SoPhuc::operator>=(const SoPhuc & SP){
    return (this->thuc>=SP.thuc);
}
bool SoPhuc::operator<=(const SoPhuc & SP){
    return (this->thuc<=SP.thuc);
}
ostream & operator<<(ostream & os,const SoPhuc& SP){
    os<<SP.thuc<<((SP.ao>=0)? " + " :" - ")<<abs(SP.ao)<<"i";
    return os;
}
istream & operator>>(istream & is,SoPhuc &SP){
    cout<<"Nhap phan thuc: ";
    is>>SP.thuc;
    return is;
}