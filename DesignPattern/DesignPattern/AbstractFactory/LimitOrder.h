//
//  LimitOrder.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef LimitOrder_h
#define LimitOrder_h

#include "Order.h"
#include <iostream>

class LimitOrder : public Order 
{
public:
    void execute() override 
    {
        std::cout << "Executing Limit Order." << std::endl;
    }
};

#endif /* LimitOrder_h */
