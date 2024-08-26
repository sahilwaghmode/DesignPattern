//
//  LimitOrderHandler.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef LimitOrderHandler_h
#define LimitOrderHandler_h

#include "OrderHandler.h"
#include "LimitOrder.h"
#include <iostream>

class LimitOrderHandler : public OrderHandler 
{
public:
    void handleOrder(Order* order) override 
    {
        std::cout << "Handling Limit Order." << std::endl;
        order->execute();
    }
};

#endif /* LimitOrderHandler_h */
