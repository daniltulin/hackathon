//
//  QueryTests.h
//  Hackathon
//
//  Created by Alex on 20.11.16.
//  Copyright © 2016 Alex. All rights reserved.
//

#ifndef QueryTests_h
#define QueryTests_h

#import "OrderManager.h"

void testQuery() {
    NSLog(@"Tests");
    OrderManager *orderManager = [[OrderManager alloc] initWithDelegate:nil];
    [orderManager obtainOrdersWithHandler:nil];
}

#endif /* QueryTests_h */