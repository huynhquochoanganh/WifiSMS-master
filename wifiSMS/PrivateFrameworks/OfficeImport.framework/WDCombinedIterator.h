/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDIterator;



@interface WDCombinedIterator : WDIterator 
{
    WDIterator *mParentIterator;
    WDIterator *mChildIterator;
}


- (id)initWithParentIterator:(id)arg1;
- (void)dealloc;
- (id)childIteratorFrom:(id)arg1;
- (BOOL)hasNext;
- (id)next;
- (void)incrementChildIterator;

@end
