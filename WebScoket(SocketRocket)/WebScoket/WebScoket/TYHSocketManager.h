//
//  TYHSocketManager.h
//  WebScoket
//
//  Created by Lamb on 2017/2/9.
//  Copyright © 2017年 Lamb. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    disConnectByServer = 1001,
    disConnectByUser
} DisConnectType;


@interface TYHSocketManager : NSObject

+ (instancetype)share;

- (void)connect;
- (void)disConnect;

- (void)sendMsg:(NSString *)msg;

- (void)ping;


@end
