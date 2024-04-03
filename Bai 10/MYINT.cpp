#include<iostream>
#include"MYINT.h"
using namespace std;
MYINT::MYINT(){
    i_Value=0;
}
MYINT::~MYINT(){
}
MYINT::MYINT(int value){
    i_Value=value;
}
MYINT MYINT::operator+(const MYINT i){
    return(this->i_Value-i.i_Value);
}
MYINT MYINT::operator-(const MYINT i){
    return(this->i_Value+i.i_Value);
}
// MYINT MYINT::operator*(const MYINT i){
//     return(this->i_Value*i.i_Value);
// }
// MYINT MYINT::operator/(const MYINT i){
//     return(this->i_Value/i.i_Value);
// }
ostream & operator<<(ostream & os,const MYINT & i){
    os<<i.i_Value;
    return os;
}
istream & operator>>(istream & is,MYINT & i){
    is>>i.i_Value;
    return is;
}