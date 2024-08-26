//
//  StopOrderFactory.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef StopOrderFactory_h
#define StopOrderFactory_h

#include "OrderFactory.h"
#include "StopOrder.h"
#include "StopOrderHandler.h"

class StopOrderFactory : public OrderFactory 
{
public:
    Order* createOrder() override 
    {
        return new StopOrder();
    }

    OrderHandler* createOrderHandler() override 
    {
        return new StopOrderHandler();
    }
};

#endif /* StopOrderFactory_h */
