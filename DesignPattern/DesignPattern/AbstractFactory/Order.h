//
//  Order.h
//  DesignPattern
//
//  Created by Sahil Waghmode on 26/08/24.
//

#ifndef Order_h
#define Order_h

class Order 
{
public:
    virtual void execute() = 0;
    virtual ~Order() {}
};


#endif /* Order_h */
