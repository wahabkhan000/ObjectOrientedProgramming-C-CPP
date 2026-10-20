#include <iostream>
#include "Store.h"

int main(){
    store s(-1,-15,-12);
    std::cout<<s.getTotalCost()<<"\n";
    s.setItemNumber(11);
    s.setCost(1250);
    s.setQuantity(20);
    s.setTotalCost();
    std::cout<<s.getCost()<<"\n";
    std::cout<<s.getQuantity()<<"\n";
    std::cout<<s.getItemNumber()<<"\n";
    std::cout<<s.getTotalCost();
}
