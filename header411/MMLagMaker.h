//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMLagMaker : NSObject
{
    BOOL m_bOpenLagTest;
    unsigned int m_uiLagID;
}

+ (id)sharedInstance;
- (BOOL)isOpenLagTest;
- (void)openLagTest:(BOOL)arg1;
- (void)registerObservers:(id)arg1;
- (void)registerLagMakers;
- (unsigned int)currentLagID;
- (id)init;

@end

