//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FacingMember : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasEncodeUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasSmallImgUrl:1;
    unsigned int hasStatus:1;
    unsigned int status;
    NSString *userName;
    NSString *encodeUserName;
    NSString *nickName;
    NSString *smallImgUrl;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetSmallImgUrl:) NSString *smallImgUrl; // @synthesize smallImgUrl;
@property(readonly, nonatomic) BOOL hasSmallImgUrl; // @synthesize hasSmallImgUrl;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetEncodeUserName:) NSString *encodeUserName; // @synthesize encodeUserName;
@property(readonly, nonatomic) BOOL hasEncodeUserName; // @synthesize hasEncodeUserName;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

