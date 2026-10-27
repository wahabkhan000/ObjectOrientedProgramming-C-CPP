#include <iostream>
#include "Name.h"
void print(Name _name){
    operator<<(std::cout,_name);
}
int main(){
    Name name1("Object","O","programming");  
}