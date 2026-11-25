#include<iostream>
#include<fstream>
#include<string>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"

int main(){
    Person* PArray[3]{new Student(),new Teacher(),new Student()};
    std::ifstream file("data.txt");

    std::string temp{};
    int i{};
    while(i<3 && std::getline(file,temp,';')){
        std::string name{};
        int age{};
        std::string address{};

        int j{};
        for(; temp[j] !=',' && j<temp.length();j++){
            name += temp[j];
        }
        for(j++;temp[j]!=',' && j<temp.length();j++){
            if(temp[j] !=' '){
                age*=10;
                age += (temp[j] - '0');
            }
        }
        for(j++;j<temp.length() && temp[j] != ';';j++){
            address += temp[j];
        }

        PArray[i]->setname(name);
        PArray[i]->setage(age);
        PArray[i]->setaddress(address);
        i++;
    }
    
    for(int i{}; i<3; i++){
        PArray[i]->print();
        delete PArray[i];
    }

    file.close();
    return 0;

}