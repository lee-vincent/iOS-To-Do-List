//
//  ToDoItem.h
//  ToDoList
//
//  Created by Vincent Lee on 4/10/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
