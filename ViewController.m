//
//  ViewController.m
//  检测手机拔卡或者插卡
//
//  Created by shiyong on 17/3/16.
//  Copyright © 2017年 ShiYong. All rights reserved.
//

#import "ViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSString *CTSIMSupportGetSimStatus();
    [[NSNotificationCenter defaultCenter] postNotificationName:@"kCTSIMSupportSIMStatusChangeNotification" object:nil];
    [[NSNotificationCenter defaultCenter]
     addObserver:self selector:@selector(SIMNotification:) name:@"kCTSIMSupportSIMStatusChangeNotification" object:nil];
-(void)SIMNotification:(id)selector{
    self.view.backgroundColor = [UIColor redColor];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
