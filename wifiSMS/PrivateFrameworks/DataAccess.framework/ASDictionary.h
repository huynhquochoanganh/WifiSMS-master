/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSDictionary;



@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves>
{
    NSMutableDictionary *_items;
    NSDictionary *_subclassRuleSet;
    NSMutableDictionary *_placeHolder;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (id)initWithSubclassRuleSet:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)asParseRules;
- (void)_setItems:(id)arg1;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)arg1 forCCPT:(NSInteger)arg2;
- (id)commonValue;

@end
