//
//  FirmOrder.hpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef FirmOrder_hpp
#define FirmOrder_hpp

#include "Order.hpp"
#include <iostream>

class FirmOrder : public Order 
{
public:
    void processOrder() override 
    {
        std::cout << "Processing firm order." << std::endl;
    }
};
#endif /* FirmOrder_hpp */
