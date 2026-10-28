#include "String.h"
#include <iostream>

int String::length(const char* src) const{
    if(!src) return 0;
    int len{};
    while (src[len] != '\0'){
        ++len;
    }
    return len;
}
void String::dynamiccopy(const char* src, char*& des,int arg){
    if(!src) return;
    if(arg == 0){
        if(des) delete[] des;
        int len{};
        des = new char[len=length(src)+1];
        while (len>=0){
            des[len] = src[len];
            len--;
        }
    }
    else if(arg == 1){
        int len1{length(src)};
        int len2{length(des)};
        char* temp = new char[len1+len2+1];
        for(int i{};i<len2;i++){
            temp[i] = des[i];
        }
        for(int i{};i<=len1;i++){
            temp[i+len2] = src[i];
        }
        dynamiccopy(temp,des,0);
        delete [] temp;
    }
    else return;
    
}
String::String(){
    str = new char[1];
    str[0] = '\0';
}
String::String(const char* src){
    dynamiccopy(src,str,0);
}
String::String(const String& src){
    dynamiccopy(src.getstring(),str,0);
}
void String::setstring(const char* src){
    dynamiccopy(src,str,0);
}
char* String::getstring() const{
    return str;
}
int String::getlength() const{
    return length(str);
}
bool String::operator==(const String& rhs) const{
    int index{};
    char *temp = rhs.getstring();
    while(str[index] != '\0' && temp[index] != '\0'){
        if(str[index] != temp[index]){
            return false;
        }
    }
    if(str[index] != temp[index]) return false;
    return true;
}
String& String::operator=(const String& rhs){
    if(this!=&rhs){
        dynamiccopy(rhs.getstring(),str,0);
    }
    return *this;
}
String& String::operator=(const char* src){
    dynamiccopy(src,str,0);
    return *this;
}
String& String::operator+(const char* src){
    if(src){
        dynamiccopy(src,str,1);
    }
    return *this;
    
}
char& String::operator[](int index){
    return str[index];
}
const char String::operator[](int index) const{
    return str[index];
}
String::~String(){
    if(str) delete [] str;
}

std::ostream& operator<<(std::ostream& os, const String& obj){
    os<<obj.getstring();
    return os;
}
std::istream& operator>>(std::istream& is,String& obj){
    char copy[1000];
    is>>copy;
    obj.setstring(copy);
    return is;
}
