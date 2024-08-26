//
//  Order.hpp
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef Order_hpp
#define Order_hpp

#include <stdio.h>

// Order.h
#ifndef ORDER_H
#define ORDER_H

class Order 
{
public:
    virtual void processOrder() = 0; // Pure virtual function
    virtual ~Order() {}
};

#endif // ORDER_H


#endif /* Order_hpp */
