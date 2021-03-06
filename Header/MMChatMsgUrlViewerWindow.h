//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatItemViewerWindow.h"

#import "IContactMgrExt.h"
#import "MMGetA8KeyLogicDelegate.h"
#import "NSSharingServiceDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class AFURLSessionManager, MMGetA8KeyLogic, NSMutableDictionary, NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface MMChatMsgUrlViewerWindow : MMChatItemViewerWindow <WKUIDelegate, WKNavigationDelegate, MMGetA8KeyLogicDelegate, NSSharingServiceDelegate, IContactMgrExt>
{
    NSString *_msgUrlString;
    WKWebView *_webView;
    MMGetA8KeyLogic *_getA8KeyLogic;
    NSString *_chatUserName;
    NSMutableDictionary *_downloadPathDict;
    AFURLSessionManager *_httpDownloadMgr;
}

@property(retain, nonatomic) AFURLSessionManager *httpDownloadMgr; // @synthesize httpDownloadMgr=_httpDownloadMgr;
@property(retain, nonatomic) NSMutableDictionary *downloadPathDict; // @synthesize downloadPathDict=_downloadPathDict;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(retain, nonatomic) MMGetA8KeyLogic *getA8KeyLogic; // @synthesize getA8KeyLogic=_getA8KeyLogic;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *msgUrlString; // @synthesize msgUrlString=_msgUrlString;
- (void).cxx_destruct;
- (void)startDownloadTaskWithUrl:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)onModifyContacts:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getA8KeyDidFaildWithReason:(int)arg1;
- (void)getA8keyDidFinishedWithReason:(int)arg1 fullURL:(id)arg2;
- (id)contentForSharing;
- (BOOL)showLoadingIndicator;
- (void)willStartClosing:(BOOL)arg1;
- (void)openInWebView:(id)arg1;
- (void)openInExternalBrowser:(id)arg1;
- (void)nextItem:(id)arg1;
- (void)previousItem:(id)arg1;
- (id)shareSubMenuSupportActions;
- (id)supportedActions;
- (struct CGSize)sizeForContent;
- (BOOL)toolbarAutohides;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)willStartOpening:(BOOL)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

