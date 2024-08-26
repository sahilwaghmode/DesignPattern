//
//  FirmOrderFactory.hpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef FirmOrderFactory_hpp
#define FirmOrderFactory_hpp

#include "OrderFactory.hpp"
#include "FirmOrder.hpp"

class FirmOrderFactory : public OrderFactory 
{
public:
    Order* createOrder() override 
    {
        return new FirmOrder();
    }
};
#endif /* FirmOrderFactory_hpp */
