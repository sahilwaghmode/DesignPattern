//
//  OrderFactory.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef OrderFactory_h
#define OrderFactory_h

#include "Order.h"
#include "OrderHandler.h"

class OrderFactory 
{
public:
    virtual Order* createOrder() = 0;
    virtual OrderHandler* createOrderHandler() = 0;
    virtual ~OrderFactory() {}
};

#endif /* OrderFactory_h */
