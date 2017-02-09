//
//  TYHSocketManager.h
//  CocoaSyncSocket
//
//  Created by Lamb on 2017/1/18.
//  Copyright © 2017年 Lamb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TYHSocketManager : NSObject

+ (instancetype)share;

- (BOOL)connect;
- (void)disConnect;

- (void)sendMsg:(NSString *)msg;

@end
