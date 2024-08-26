//
//  OrderHandler.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef OrderHandler_h
#define OrderHandler_h

class OrderHandler 
{
public:
    virtual void handleOrder(Order* order) = 0;
    virtual ~OrderHandler() {}
};

#endif /* OrderHandler_h */
