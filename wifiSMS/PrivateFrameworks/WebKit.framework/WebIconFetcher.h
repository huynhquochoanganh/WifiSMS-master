/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebIconFetcherPrivate;



@interface WebIconFetcher : NSObject 
{
    WebIconFetcherPrivate *_private;
}

+ (id)_fetchApplicationIconForFrame:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)cancel;
- (id)_initWithIconFetcher:(struct PassRefPtr<WebCore::IconFetcher> { struct IconFetcher {} *x1; })arg1 client:(struct WebIconFetcherClient { int (**x1)(); struct RetainPtr<WebIconFetcher> { id x_2_1_1; } x2; id x3; SEL x4; }*)arg2;

@end
