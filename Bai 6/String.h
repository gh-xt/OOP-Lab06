#ifndef STRING_H_
#define STRING_H_
#include<iostream>
using std::ostream;
using std::istream;
class String{
    private:
        char * Str;
        int Len;
        static int Num_strings;
        static const int CINLIN =80 ;
    public:
        String(const char * s);
        String();
        String(const String &);
        ~String();
        int GetterLen() const;
        void ReverseString();
        void ToUpperString();
        void ToLowerString();
        String & operator =(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char &operator[](int i) const;
        friend bool operator<(const String & st1,const String & st2);
        friend bool operator>(const String & st1,const String & st2);
        friend bool operator==(const String & st1,const String & st2);
        friend bool operator!=(const String & st1,const String & st2);
        friend String operator+(String &St1,const String & St2);
        friend ostream & operator<<(ostream & os,const String & st);
        friend istream & operator>>(istream & is,String & st);
        static int HowMany();
};
#endif