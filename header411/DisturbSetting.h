//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class DisturbTimeSpan;

@interface DisturbSetting : PBGeneratedMessage
{
    unsigned int hasNightSetting:1;
    unsigned int hasNightTime:1;
    unsigned int hasAllDaySetting:1;
    unsigned int hasAllDayTime:1;
    unsigned int nightSetting;
    unsigned int allDaySetting;
    DisturbTimeSpan *nightTime;
    DisturbTimeSpan *allDayTime;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetAllDayTime:) DisturbTimeSpan *allDayTime; // @synthesize allDayTime;
@property(readonly, nonatomic) BOOL hasAllDayTime; // @synthesize hasAllDayTime;
@property(nonatomic, setter=SetAllDaySetting:) unsigned int allDaySetting; // @synthesize allDaySetting;
@property(readonly, nonatomic) BOOL hasAllDaySetting; // @synthesize hasAllDaySetting;
@property(retain, nonatomic, setter=SetNightTime:) DisturbTimeSpan *nightTime; // @synthesize nightTime;
@property(readonly, nonatomic) BOOL hasNightTime; // @synthesize hasNightTime;
@property(nonatomic, setter=SetNightSetting:) unsigned int nightSetting; // @synthesize nightSetting;
@property(readonly, nonatomic) BOOL hasNightSetting; // @synthesize hasNightSetting;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

