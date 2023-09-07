/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIKBKeyboard, UIKBKey;

@interface UIKBKeyView : UIView {
	UIKBKeyboard* m_keyboard;
	UIKBKey* m_key;
	int m_state;
	CGPoint m_drawOrigin;
}
@property(readonly, assign, nonatomic) UIKBKeyboard* keyboard;
@property(readonly, assign, nonatomic) UIKBKey* key;
@property(readonly, assign, nonatomic) int state;
@property(assign, nonatomic) CGPoint drawOrigin;
-(id)initWithFrame:(CGRect)frame keyboard:(UIKBKeyboard*)keyboard key:(UIKBKey*)key state:(int)state;
//-(void)dealloc;
//-(void)drawRect:(CGRect)rect;
@end

