//
//  checkSIM.h
//  检测手机拔卡或者插卡
//
//  Created by shiyong on 17/3/16.
//  Copyright © 2017年 ShiYong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface checkSIM : NSObject
extern NSString* const kCTSMSMessageReceivedNotification;
extern NSString* const kCTSMSMessageReplaceReceivedNotification;
extern NSString* const kCTSIMSupportSIMStatusNotInserted;
extern NSString* const kCTSIMSupportSIMStatusReady;

id CTTelephonyCenterGetDefault(void);
void CTTelephonyCenterAddObserver(id,id,CFNotificationCallback,NSString*,void*,int);
void CTTelephonyCenterRemoveObserver(id,id,NSString*,void*);
int CTSMSMessageGetUnreadCount(void);

int CTSMSMessageGetRecordIdentifier(void * msg);
NSString * CTSIMSupportGetSIMStatus();
NSString * CTSIMSupportCopyMobileSubscriberIdentity();

id  CTSMSMessageCreate(void* unknow,NSString* number,NSString* text);
void * CTSMSMessageCreateReply(void* unknow,void * forwardTo,NSString* text);

void* CTSMSMessageSend(id server,id msg);

NSString *CTSMSMessageCopyAddress(void *, void *);
NSString *CTSMSMessageCopyText(void *, void *);

@end
