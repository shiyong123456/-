//
//  checkSIM.m
//  检测手机拔卡或者插卡
//
//  Created by shiyong on 17/3/16.
//  Copyright © 2017年 ShiYong. All rights reserved.
//

#import "checkSIM.h"

@implementation checkSIM

-(void)checkSIM{
    BOOL noSim=[CTSIMSupportGetSIMStatus() isEqualToString:kCTSIMSupportSIMStatusNotInserted];
    NSLog(@"no Sim %@",noSim?@"YES":@"NO");
}

@end
