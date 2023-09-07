/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASPolicy, NSString;



@interface ASProvisionTask : ASTask 
{
    NSInteger _type;
    ASPolicy *_policy;
    NSString *_key;
}


- (id)_initWithType:(NSInteger)arg1 policy:(id)arg2 key:(id)arg3;
- (id)initWithOriginalKeyForPolicyRequest:(id)arg1;
- (id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
- (NSInteger)type;
- (id)_policyID;
- (NSInteger)commandCode;
- (id)_provisioningType;
- (id)requestBody;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (BOOL)processContext:(id)arg1;
- (void)finishWithError:(id)arg1;

@end
