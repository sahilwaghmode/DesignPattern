//
//  MarketOrderHandler.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef MarketOrderHandler_h
#define MarketOrderHandler_h

#include "OrderHandler.h"
#include "MarketOrder.h"
#include <iostream>

class MarketOrderHandler : public OrderHandler 
{
public:
    void handleOrder(Order* order) override 
    {
        std::cout << "Handling Market Order." << std::endl;
        order->execute();
    }
};

#endif /* MarketOrderHandler_h */
