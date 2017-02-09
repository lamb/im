//
//  TYHSocketManager.h
//  CScoketClient
//
//  Created by Lamb on 2017/1/18.
//  Copyright © 2017年 Lamb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TYHSocketManager : NSObject

+ (instancetype)share;

- (void)connect;
- (void)disConnect;

- (void)sendMsg:(NSString *)msg;


- (void)pullMsg;

@end
