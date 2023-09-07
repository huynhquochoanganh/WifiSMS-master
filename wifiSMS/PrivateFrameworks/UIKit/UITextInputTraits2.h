/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import "NSObject.h"
#import <Foundation/NSObject.h>
#import <UIKit/UITextInputTraits.h>
#import "UITextInputTraits_Private.h"
#import <Availability2.h>

@class UIColor;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
	int autocapitalizationType;
	int autocorrectionType;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	unsigned keyboardType : 8;
	unsigned keyboardAppearance : 8;
#else
	int keyboardType;
	int keyboardAppearance;
#endif
	int returnKeyType;
	BOOL enablesReturnKeyAutomatically;
	BOOL secureTextEntry;
	CFCharacterSetRef textTrimmingSet;
	UIColor* insertionPointColor;
	unsigned insertionPointWidth;
	int textLoupeVisibility;
	int textSelectionBehavior;
	id textSuggestionDelegate;
	BOOL contentsIsSingleValue;
	BOOL acceptsEmoji;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	int emptyContentReturnKeyType;
#endif
}
// in a protocol: @property(assign, nonatomic) UITextAutocapitalizationType autocapitalizationType;
// in a protocol: @property(assign, nonatomic) UITextAutocorrectionType autocorrectionType;
// in a protocol: @property(assign, nonatomic) UIKeyboardType keyboardType;
// in a protocol: @property(assign, nonatomic) UIKeyboardAppearance keyboardAppearance;
// in a protocol: @property(assign, nonatomic) UIReturnKeyType returnKeyType;
// in a protocol: @property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
// in a protocol: @property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
// in a protocol: @property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;
// in a protocol: @property(retain, nonatomic) UIColor* insertionPointColor;
// in a protocol: @property(assign, nonatomic) unsigned insertionPointWidth;
// in a protocol: @property(assign, nonatomic) int textLoupeVisibility;
// in a protocol: @property(assign, nonatomic) int textSelectionBehavior;
// in a protocol: @property(assign, nonatomic) id textSuggestionDelegate;
// in a protocol: @property(assign, nonatomic) BOOL contentsIsSingleValue;
// in a protocol: @property(assign, nonatomic) BOOL acceptsEmoji;
// in a protocol: @property(assign, nonatomic) int emptyContentReturnKeyType;
+(UITextInputTraits*)defaultTextInputTraits;
+(id)traitsByAdoptingTraits:(id)traits __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
+(BOOL)keyboardTypeRequiresASCIICapable:(int)capable;
-(void)setToSecureValues;
-(NSDictionary*)dictionaryRepresentation;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)setToDefaultValues;
// in a protocol: -(void)takeTraitsFrom:(id)from;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
// in a protocol: -(id)description;
// in a protocol: -(BOOL)isEqual:(id)equal;
@end
