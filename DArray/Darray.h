#ifndef DARRAY_H
#define DARRAY_H
#include<iostream>
class DArray{
    int* start{};
    int size{};
    int capacity{};
    void resize();

    public:
    DArray& operator=(const DArray&);
    void push_back(int);
    int getsize() const;
    int getcapacity() const;
    int operator[](int) const;
    ~DArray();
};

std::ostream& operator<<(std::ostream&, const DArray&);
#endif