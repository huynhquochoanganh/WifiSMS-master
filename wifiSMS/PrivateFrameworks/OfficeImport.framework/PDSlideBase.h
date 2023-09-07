/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString, OADBackground, PDAnimation, PDTransition;



@interface PDSlideBase : NSObject 
{
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    BOOL mIsHidden;
}

+ (NSInteger)inheritedPlaceholderType:(NSInteger)arg1;

- (id)init;
- (void)dealloc;
- (id)name;
- (void)setName:(id)arg1;
- (id)drawables;
- (void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2;
- (id)background;
- (void)setBackground:(id)arg1;
- (id)animation;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)defaultTheme;
- (id)placeholderWithType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)placeholderWithType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 useBaseTypeMatch:(BOOL)arg3;
- (id)allPlaceholdersOfBaseType:(NSInteger)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextStyleForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)masterGraphicForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentSlideBase;
- (id)colorScheme;
- (id)colorMap;
- (id)styleMatrix;
- (BOOL)isHidden;
- (void)setIsHidden:(BOOL)arg1;

@end
