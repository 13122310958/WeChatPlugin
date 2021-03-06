//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewItem.h"

@class FavoritesItem, MessageData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MMQLPhotoPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *_itemUrl;
    NSString *_itemTitle;
    NSString *_itemUrlString;
    MessageData *_message;
    NSString *_messageUniqueId;
    FavoritesItem *_favItem;
    struct CGSize _originalImageSize;
}

+ (BOOL)canOpenByWeChat:(id)arg1;
+ (BOOL)canPreviewItem:(id)arg1;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) NSString *messageUniqueId; // @synthesize messageUniqueId=_messageUniqueId;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(retain, nonatomic) NSString *itemUrlString; // @synthesize itemUrlString=_itemUrlString;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSURL *itemUrl; // @synthesize itemUrl=_itemUrl;
- (void).cxx_destruct;
@property(readonly) NSURL *previewItemURL;
@property(readonly) NSString *previewItemTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

