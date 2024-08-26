//
//  main.cpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#include <iostream>
#include "MarketOrderFactory.h"
#include "LimitOrderFactory.h"
#include "StopOrderFactory.h"

void processOrder(OrderFactory* factory) 
{
    Order* order = factory->createOrder();
    OrderHandler* handler = factory->createOrderHandler();
    handler->handleOrder(order);

    delete order;
    delete handler;
}

void AbstractFactory() 
{
    std::cout << "Abstract Factory Design Pattern" << std::endl;
    
    OrderFactory* marketOrderFactory = new MarketOrderFactory();
    processOrder(marketOrderFactory);
    delete marketOrderFactory;

    OrderFactory* limitOrderFactory = new LimitOrderFactory();
    processOrder(limitOrderFactory);
    delete limitOrderFactory;

    OrderFactory* stopOrderFactory = new StopOrderFactory();
    processOrder(stopOrderFactory);
    delete stopOrderFactory;
    
    std::cout << std::endl;
}

