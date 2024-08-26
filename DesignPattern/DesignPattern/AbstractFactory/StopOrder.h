//
//  StopOrder.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef StopOrder_h
#define StopOrder_h

#include "Order.h"
#include <iostream>

class StopOrder : public Order 
{
public:
    void execute() override 
    {
        std::cout << "Executing Stop Order." << std::endl;
    }
};

#endif /* StopOrder_h */
