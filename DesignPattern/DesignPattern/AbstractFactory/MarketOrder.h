//
//  MarketOrder.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef MarketOrder_h
#define MarketOrder_h

#include "Order.h"
#include <iostream>

class MarketOrder : public Order 
{
public:
    void execute() override {
        std::cout << "Executing Market Order." << std::endl;
    }
};

#endif /* MarketOrder_h */
