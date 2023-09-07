/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSData;



@interface PBDataReader : NSObject 
{
    NSData *_data;
    NSUInteger _pos;
    NSUInteger _length;
    BOOL _error;
}

@property NSUInteger position; /* unknown property attribute: V_pos */
@property NSUInteger length; /* unknown property attribute: V_length */


- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)data;
- (BOOL)isAtEnd;
- (BOOL)hasError;
- (BOOL)hasMoreData;
- (NSUInteger)offset;
- (BOOL)seekToOffset:(NSUInteger)arg1;
- (void)readTag:(unsigned short*)arg1 andType:(char *)arg2;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (unsigned short)readBigEndianFixed16;
- (NSUInteger)readBigEndianFixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readProtoBuffer;
- (BOOL)readInt8;
- (long long)readVarInt;
- (double)readDouble;
- (float)readFloat;
- (NSInteger)readInt32;
- (long long)readInt64;
- (NSUInteger)readUint32;
- (unsigned long long)readUint64;
- (NSInteger)readSint32;
- (long long)readSint64;
- (NSUInteger)readFixed32;
- (unsigned long long)readFixed64;
- (NSInteger)readSfixed32;
- (long long)readSfixed64;
- (BOOL)readBOOL;
- (id)readString;
- (id)readData;
- (NSInteger)read:(const char *)arg1 maxLength:(NSUInteger)arg2;
- (id)readBytes:(NSUInteger)arg1;
- (NSUInteger)position;
- (void)setPosition:(NSUInteger)arg1;
- (NSUInteger)length;
- (void)setLength:(NSUInteger)arg1;

@end
