/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;



@interface GQDSStyle : NSObject <GQDNameMappableWithDefault>
{
    GQDSStyle *mParent;
    struct GQDSMap { } *mPropertyMap;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (struct GQDSMap { }*)defaultMapForStyleType:(NSInteger)arg1;
+ (id)createReplacementForMissingStyleOfType:(NSInteger)arg1;
+ (id)createReplacementForMissingObject:(struct _xmlTextReader { }*)arg1;
+ (NSInteger)styleTypeForNodeName:(const char *)arg1;

- (void)dealloc;
- (void)setPropertyMap:(struct GQDSMap { }*)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (BOOL)valueForBoolProperty:(NSInteger)arg1;
- (BOOL)hasValueForBoolProperty:(NSInteger)arg1 value:(BOOL*)arg2;
- (BOOL)hasValueForBoolProperty:(NSInteger)arg1 value:(BOOL*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)overridesBoolProperty:(NSInteger)arg1 value:(BOOL*)arg2;
- (NSInteger)valueForIntProperty:(NSInteger)arg1;
- (BOOL)hasValueForIntProperty:(NSInteger)arg1 value:(NSInteger*)arg2;
- (BOOL)hasValueForIntProperty:(NSInteger)arg1 value:(NSInteger*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)overridesIntProperty:(NSInteger)arg1 value:(NSInteger*)arg2;
- (float)valueForFloatProperty:(NSInteger)arg1;
- (BOOL)hasValueForFloatProperty:(NSInteger)arg1 value:(float*)arg2;
- (BOOL)hasValueForFloatProperty:(NSInteger)arg1 value:(float*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)overridesFloatProperty:(NSInteger)arg1 value:(float*)arg2;
- (double)valueForDoubleProperty:(NSInteger)arg1;
- (BOOL)hasValueForDoubleProperty:(NSInteger)arg1 value:(double*)arg2;
- (BOOL)hasValueForDoubleProperty:(NSInteger)arg1 value:(double*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)overridesDoubleProperty:(NSInteger)arg1 value:(double*)arg2;
- (id)valueForObjectProperty:(NSInteger)arg1;
- (BOOL)hasValueForObjectProperty:(NSInteger)arg1 value:(id*)arg2;
- (BOOL)hasValueForObjectProperty:(NSInteger)arg1 value:(id*)arg2 wasOverriddenWithNull:(BOOL*)arg3;
- (BOOL)overridesObjectProperty:(NSInteger)arg1 value:(id*)arg2;

@end
