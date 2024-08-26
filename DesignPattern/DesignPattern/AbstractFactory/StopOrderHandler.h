//
//  StopOrderHandler.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef StopOrderHandler_h
#define StopOrderHandler_h

#include "OrderHandler.h"
#include "StopOrder.h"
#include <iostream>

class StopOrderHandler : public OrderHandler {
public:
    void handleOrder(Order* order) override {
        std::cout << "Handling Stop Order." << std::endl;
        order->execute();
    }
};

#endif /* StopOrderHandler_h */
