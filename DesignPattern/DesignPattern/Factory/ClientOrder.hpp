//
//  ClientOrder.hpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef ClientOrder_hpp
#define ClientOrder_hpp

#include "Order.hpp"
#include <iostream>

class ClientOrder : public Order
{
public:
    void processOrder() override
    {
        std::cout << "Processing client order." << std::endl;
    }
};


#endif /* ClientOrder_hpp */
