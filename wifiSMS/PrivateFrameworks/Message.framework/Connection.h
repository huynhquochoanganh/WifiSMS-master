/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <SASLSecurityLayer>, _NSSocket, NSData, NSMutableString;



@interface Connection : NSObject 
{
    <SASLSecurityLayer> *_securityLayer;
    _NSSocket *_socket;
    char *_buffer;
    NSInteger _bufferRemainingBytes;
    NSUInteger _bufferStart;
    NSUInteger _bufferLength;
    NSUInteger _desiredBufferLength;
    NSData *_logData;
    NSUInteger _dontLogReads;
    NSUInteger _readBytesNotLogged;
    NSMutableString *_readBytesToLog;
    unsigned int _isFetching : 1;
    unsigned int _allowFallbacks : 1;
}

+ (void)readLoggingDefaults;
+ (void)initialize;
+ (void)logBytes:(const char *)arg1 length:(NSInteger)arg2;
+ (void)flushLog;
+ (id)logClasses;
+ (void)setLogClasses:(id)arg1;
+ (BOOL)logAllSocketActivity;
+ (void)setLogAllSocketActivity:(BOOL)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (BOOL)shouldTryFallbacksAfterError:(id)arg1;

- (void)dealloc;
- (BOOL)isForcedConnection;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)connectUsingSettings:(id)arg1;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)connectUsingFallbacksForAccount:(id)arg1;
- (void)setAllowsFallbacks:(BOOL)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (id)capabilities;
- (id)authenticationMechanisms;
- (BOOL)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)writeData:(id)arg1;
- (void)setDesiredReadBufferLength:(NSUInteger)arg1;
- (void)enableReadLogging:(BOOL)arg1;
- (void)logReadChars:(const char *)arg1 length:(NSUInteger)arg2;
- (BOOL)readLineIntoData:(id)arg1;
- (BOOL)readBytesIntoData:(id)arg1 desiredLength:(NSUInteger)arg2;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (BOOL)startTLSForAccount:(id)arg1;
- (BOOL)isValid;
- (void)disconnect;
- (void*)_socket;
- (BOOL)hasBytesAvailable;
- (id)_createSocket;
- (double)lastUsedTime;
- (id)_nssocket;

@end
