/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSFileHandle;



@interface _DAVGetToFileReader : NSObject <DAVResponseBodyReader>
{
    NSFileHandle *_fileHandle;
}


- (id)initWithFileHandle:(id)arg1;
- (void)dealloc;
- (BOOL)request:(id)arg1 acceptResponseWithHTTPStatusCode:(NSInteger)arg2;
- (void)request:(id)arg1 readResponseBody:(id)arg2;

@end
