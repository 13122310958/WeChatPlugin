//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMQLPreviewItem;

@protocol MMPreviewToolbarWindowControllerDelegate <NSObject>

@optional
- (id)currentContentForShare;
- (MMQLPreviewItem *)currentPreviewItem;
- (void)menuActionExport;
- (void)menuActionFavorite;
- (void)menuActionForward;
- (void)menuActionCopy;
- (void)menuActionOpenWith;
- (void)closePreview;
- (void)fullScreen;
- (void)menuMore;
- (void)rotate;
- (void)zoomIn;
- (void)zoomOut;
- (void)nextItem;
- (void)prevItem;
@end

