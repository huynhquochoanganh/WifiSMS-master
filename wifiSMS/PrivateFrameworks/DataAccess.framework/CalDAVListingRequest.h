/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class CalDAVListingReader;



@interface CalDAVListingRequest : DAVRequest 
{
    CalDAVListingReader *_responseReader;
}

+ (id)nodeWithName:(id)arg1;
+ (id)nodeWithName:(id)arg1 attributes:(id)arg2;
+ (id)icsStringFromDate:(id)arg1;

- (id)initWithSession:(id)arg1 URI:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)dealloc;
- (id)filenamesToETags;
- (id)error;

@end
