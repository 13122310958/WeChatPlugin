//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItemDataField, NSString;

@protocol IMMRecordNestedDownloadMgrExt <NSObject>

@optional
- (void)OnRecordNestedDataFieldDownloadRetryFailedImageRecordData:(NSString *)arg1;
- (void)OnRecordNestedDataFieldDownloadOK:(FavoritesItemDataField *)arg1;
- (void)OnDownloadRecordNestedDataFieldPart:(FavoritesItemDataField *)arg1 DataId:(NSString *)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordNestedDataFieldOK:(FavoritesItemDataField *)arg1 DataId:(NSString *)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordNestedDataFieldFail:(FavoritesItemDataField *)arg1 DataId:(NSString *)arg2;
- (void)OnDownloadRecordNestedDataFieldExpired:(FavoritesItemDataField *)arg1 DataId:(NSString *)arg2;
@end
