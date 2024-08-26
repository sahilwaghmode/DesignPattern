//
//  main.cpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#include <iostream>
#include "OrderFactory.hpp"
#include "ClientOrderFactory.hpp"
#include "FirmOrderFactory.hpp"

int main(int argc, const char * argv[]) 
{
    OrderFactory* clientOrderFactory = new ClientOrderFactory();
    Order* clientOrder = clientOrderFactory->createOrder();
    clientOrder->processOrder();

    OrderFactory* firmOrderFactory = new FirmOrderFactory();
    Order* firmOrder = firmOrderFactory->createOrder();
    firmOrder->processOrder();

    delete clientOrder;
    delete clientOrderFactory;
    delete firmOrder;
    delete firmOrderFactory;

    return 0;
}
