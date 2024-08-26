//
//  MarketOrderFactory.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef MarketOrderFactory_h
#define MarketOrderFactory_h

#include "OrderFactory.h"
#include "MarketOrder.h"
#include "MarketOrderHandler.h"

class MarketOrderFactory : public OrderFactory 
{
public:
    Order* createOrder() override 
    {
        return new MarketOrder();
    }

    OrderHandler* createOrderHandler() override 
    {
        return new MarketOrderHandler();
    }
};

#endif /* MarketOrderFactory_h */
