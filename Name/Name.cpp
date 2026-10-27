#include "Name.h"
#include <iostream>
int Name::lenght(const char* src){
    if(!src) return 0;
    int len{};
    while (src[len] != '\0')
    {
        ++len;
    }
    return len;
}
void Name::dynamiccopy(const char* src, char*& des){
    if(des) delete[] des;
    int len{};
    des = new char[len=lenght(src)+1];

    while (len>=0){
        des[len] = src[len];
        --len;
    }
}
void Name::setfirstname(const char* name){
    dynamiccopy(name,first_name);
}
void Name::setlastname(const char* name){
    dynamiccopy(name,last_name);
}
void Name::setmiddlename(const char name){
    middle_name = name;
}
Name::Name(){
    dynamiccopy("\0",first_name);
    middle_name = ' ';
    dynamiccopy("\0",last_name);
}
Name::Name(const char* first,const char middle,const char* last){
    if(!first || !last){
        std::cout<<"Invalid Arguments\n";
    }
    else{
        dynamiccopy(first,first_name);
        middle_name = middle;
        dynamiccopy(last,last_name);
    }
}

Name::Name(const Name& obj){
    dynamiccopy(obj.getfirstname(),first_name);
    dynamiccopy(obj.getlastname(),last_name);
    middle_name = obj.getmiddlename();
}

char* Name::getfirstname() const{
    return first_name;
}
char Name::getmiddlename() const{
    return middle_name;
}
char* Name::getlastname() const{
    return last_name;
}
Name::~Name(){
    delete[] first_name;
    delete[] last_name;
    first_name = nullptr;
    last_name = nullptr;
}
Name& Name::operator=(const Name& rhs){
    if(*this != rhs){
        dynamiccopy(rhs.getfirstname(),first_name);
        dynamiccopy(rhs.getlastname(),last_name);
        middle_name = rhs.getmiddlename();
    }
    return *this;
}
bool Name::operator==(const Name& rhs){
    return (*first_name == *rhs.getfirstname() && *last_name == *rhs.getlastname() && middle_name == rhs.getmiddlename()) ? true : false;
}
std::ostream& operator<<(std::ostream& os,const Name &obj){
    os<<*obj.getfirstname()<<obj.getmiddlename()<<". "<<*obj.getlastname()<<std::endl;
    return os;
}
std::istream& operator>>(std::istream& is,Name &obj){
    char* _first = new char[1];
    char middle;
    char* _last = new char[1];

    is>>_first[0]>>middle>>_last[0];
    
    obj.setfirstname(_first);
    obj.setmiddlename(middle);
    obj.setlastname(_last);
    return is;
}
