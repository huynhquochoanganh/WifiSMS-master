/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString;



@interface GMMEnhancedContent : PBCodable 
{
    NSString *_source;
    NSMutableArray *_keys;
    NSMutableArray *_values;
    NSString *_url;
}

@property(readonly) NSInteger keysCount;
@property(readonly) NSInteger valuesCount;
@property(retain) NSString *url; /* unknown property attribute: V_url */
@property(retain) NSMutableArray *values; /* unknown property attribute: V_values */
@property(retain) NSMutableArray *keys; /* unknown property attribute: V_keys */
@property(retain) NSString *source; /* unknown property attribute: V_source */


- (id)init;
- (void)dealloc;
- (NSInteger)keysCount;
- (void)setKey:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)keyAtIndex:(NSUInteger)arg1;
- (void)addKey:(id)arg1;
- (NSInteger)valuesCount;
- (void)setValue:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)valueAtIndex:(NSUInteger)arg1;
- (void)addValue:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)values;
- (void)setValues:(id)arg1;
- (id)keys;
- (void)setKeys:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)description;

@end
