//
//  RNSinch.h
//  RNSinch
//
//  Created by fangqiang on 2017/8/4.
//  Copyright © 2017年 fangqiang. All rights reserved.
//

#import <SinchVerification/SinchVerification.h>

#import "RCTBridgeModule.h"

@interface RNSinch : NSObject <RCTBridgeModule>

@property (strong, nonatomic) id<SINVerification> verification;

@end

