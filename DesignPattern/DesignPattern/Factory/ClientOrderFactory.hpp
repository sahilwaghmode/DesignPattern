//
//  ClientOrderFactory.hpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef ClientOrderFactory_hpp
#define ClientOrderFactory_hpp

#include "OrderFactory.hpp"
#include "ClientOrder.hpp"

class ClientOrderFactory : public OrderFactory 
{
public:
    Order* createOrder() override 
    {
        return new ClientOrder();
    }
};

#endif /* ClientOrderFactory_hpp */
