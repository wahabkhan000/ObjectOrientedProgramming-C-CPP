#include"DArray.h"
#include<iostream>
DArray& DArray::operator=(const DArray& obj){
    size = obj.getsize();
    capacity = obj.getcapacity();

    if(start) delete[] start;
    start = new int[capacity];

    int size_copy = size-1;
    while(size_copy>=0){
        start[size_copy] = obj[size_copy];
        size_copy--; 
    }

    return *this;
}

int DArray::getsize() const{
    return size;
}
int DArray::getcapacity() const{
    return capacity;
}
DArray::~DArray(){
    if(start) delete[] start;
    size = 0;
    capacity = 0;
}
void DArray::push_back(int value){
    if(size >= capacity){
        resize();
    }
    start[size++] = value;
}
void DArray::resize(){
    if(capacity == 0) {
        capacity = 1;
        start = new int[1];
    }
    else {
        int *temp = new int[capacity*2];
        int copy = size-1;
        while(copy>=0){
            temp[copy] = start[copy];
            copy--;
        }
        delete[] start;
        start = temp;
        capacity*=2;
    }
}

std::ostream& operator<<(std::ostream& os, const DArray& obj){
    for(int i{}; i<obj.getsize(); i++){
        os<<obj[i]<<" ";
    }
    return os;
}
int DArray::operator[](int index) const{
    return start[index];
}


