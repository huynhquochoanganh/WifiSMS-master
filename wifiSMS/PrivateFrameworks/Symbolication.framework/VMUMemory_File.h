/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUArchitecture, NSDate, NSString;



@interface VMUMemory_File : VMUMemory_Base <VMUMemory>
{
    char *_mappedAddress;
    NSUInteger _mappedSize;
    NSDate *_lastModifiedTimestamp;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } _addressRange;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } _fileRange;
    NSString *_path;
    VMUArchitecture *_architecture;
}

+ (id)headerWithPath:(id)arg1;
+ (id)memoryWithPath:(id)arg1;
+ (id)memoryWithPath:(id)arg1 fileRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4;

- (id)initWithPath:(id)arg1 fileRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4;
- (id)path;
- (id)lastModifiedTimestamp;
- (BOOL)map;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (id)architecture;
- (BOOL)isContiguous;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (id)memoryFromSubRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)view;
- (id)swappedView;

@end
