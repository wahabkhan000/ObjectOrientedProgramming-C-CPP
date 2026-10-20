#include "Store.h"
#include <iostream>

store::store(int item = 0,int Quantity = 0,double Cost = 0.00){
    setItemNumber(item);
    setQuantity(Quantity);
    setCost(Cost);
    setTotalCost();
}
void store::setItemNumber(int item){
    if(item < 0){
        std::cout<<"Invalid ItemNumber!"<<"\n";
    }
    else{
        itemNumber = item;
    }
}
void store::setQuantity(int Quantity){
    if(Quantity < 0){
        std::cout<<"Invalid quantity!"<<"\n";
    }
    else{
        quantity = Quantity;
    }
}
void store::setCost(double Cost){
    if(Cost < 0.000){
        std::cout<<"Invalid cost!"<<"\n";
    }
    else{
        cost = Cost;
    }
}

void store::setTotalCost(){
    totalCost = quantity*cost;
}

double store::getCost() const{
    return cost;
}
int store::getItemNumber() const{
    return itemNumber;
}
int store::getQuantity() const{
    return quantity;
}
double store::getTotalCost() const{
    return totalCost;
}