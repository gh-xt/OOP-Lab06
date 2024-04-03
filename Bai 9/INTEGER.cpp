#include<iostream>
#include"INTEGER.h"
using namespace std;
INTEGER::INTEGER(){
    i_Value=0;
}
INTEGER::~INTEGER(){
}
INTEGER::INTEGER(int value){
    i_Value=value;
}
INTEGER INTEGER::operator+(const INTEGER i){
    return(this->i_Value+i.i_Value);
}
INTEGER INTEGER::operator-(const INTEGER i){
    return(this->i_Value-i.i_Value);
}
INTEGER INTEGER::operator*(const INTEGER i){
    return(this->i_Value*i.i_Value);
}
INTEGER INTEGER::operator/(const INTEGER i){
    return(this->i_Value/i.i_Value);
}
ostream & operator<<(ostream & os,const INTEGER & i){
    os<<i.i_Value;
    return os;
}
istream & operator>>(istream & is,INTEGER & i){
    is>>i.i_Value;
    return is;
}