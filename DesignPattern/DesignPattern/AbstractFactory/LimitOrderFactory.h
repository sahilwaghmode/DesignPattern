//
//  LimitOrderFactory.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef LimitOrderFactory_h
#define LimitOrderFactory_h

#include "OrderFactory.h"
#include "LimitOrder.h"
#include "LimitOrderHandler.h"

class LimitOrderFactory : public OrderFactory 
{
public:
    Order* createOrder() override 
    {
        return new LimitOrder();
    }

    OrderHandler* createOrderHandler() override 
    {
        return new LimitOrderHandler();
    }
};

#endif /* LimitOrderFactory_h */
