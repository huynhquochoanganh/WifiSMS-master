/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class <MFDataConsumer>, NSMutableData;



@interface Base64Decoder : NSObject <MFDataConsumer>
{
    <MFDataConsumer> *_consumer;
    NSMutableData *_leftovers;
    NSUInteger _decodedBits;
    NSUInteger _validBytes;
    NSUInteger _equalCount;
    BOOL _convertCommas;
    BOOL _bound;
}

@property BOOL isBound; /* unknown property attribute: V_bound */
@property(readonly) NSUInteger unconverted; /* unknown property attribute: V_validBytes */
@property BOOL convertCommas; /* unknown property attribute: V_convertCommas */
@property(readonly) <MFDataConsumer> *dataConsumer; /* unknown property attribute: V_consumer */

+ (id)decoderWithConsumer:(id)arg1;

- (id)initDecoderWithConsumer:(id)arg1;
- (unsigned long)_decodeBytes:(const char *)arg1 length:(unsigned long)arg2 into:(char *)arg3 length:(unsigned long)arg4 startingAt:(unsigned long)arg5 outEncodedOffset:(NSUInteger*)arg6;
- (void)appendData:(id)arg1;
- (void)done;
- (void)dealloc;
- (BOOL)isBound;
- (void)setIsBound:(BOOL)arg1;
- (unsigned long)unconverted;
- (BOOL)convertCommas;
- (void)setConvertCommas:(BOOL)arg1;
- (id)dataConsumer;

@end
