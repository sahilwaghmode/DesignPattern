//
//  OrderFactory.hpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef OrderFactory_hpp
#define OrderFactory_hpp

#include "Order.hpp"

class OrderFactory
{
public:
    virtual Order* createOrder() = 0; // Factory method
    virtual ~OrderFactory() {}
};

#endif /* OrderFactory_hpp */
