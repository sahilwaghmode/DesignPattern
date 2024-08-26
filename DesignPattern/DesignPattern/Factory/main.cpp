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

void Factory()
{
    std::cout << "Factory Design Pattern" << std::endl;
    OrderFactory* clientOrderFactory = new ClientOrderFactory();
    Order* clientOrder = clientOrderFactory->createOrder();
    clientOrder->processOrder();

    OrderFactory* firmOrderFactory = new FirmOrderFactory();
    Order* firmOrder = firmOrderFactory->createOrder();
    firmOrder->processOrder();
    
    std::cout << std::endl;

    delete clientOrder;
    delete clientOrderFactory;
    delete firmOrder;
    delete firmOrderFactory;
}
