/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMElement : DOMNode 
{
}

@property(copy,readonly) NSString *tagName;
@property(retain,readonly) DOMCSSStyleDeclaration *style;
@property(readonly) NSInteger offsetLeft;
@property(readonly) NSInteger offsetTop;
@property(readonly) NSInteger offsetWidth;
@property(readonly) NSInteger offsetHeight;
@property(retain,readonly) DOMElement *offsetParent;
@property(readonly) NSInteger clientWidth;
@property(readonly) NSInteger clientHeight;
@property NSInteger scrollLeft;
@property NSInteger scrollTop;
@property(readonly) NSInteger scrollWidth;
@property(readonly) NSInteger scrollHeight;

+ (BOOL)isRichTextStyle:(id)arg1;

- (id)tagName;
- (id)style;
- (NSInteger)offsetLeft;
- (NSInteger)offsetTop;
- (NSInteger)offsetWidth;
- (NSInteger)offsetHeight;
- (id)offsetParent;
- (NSInteger)clientLeft;
- (NSInteger)clientTop;
- (NSInteger)clientWidth;
- (NSInteger)clientHeight;
- (NSInteger)scrollLeft;
- (void)setScrollLeft:(NSInteger)arg1;
- (NSInteger)scrollTop;
- (void)setScrollTop:(NSInteger)arg1;
- (NSInteger)scrollWidth;
- (NSInteger)scrollHeight;
- (id)firstElementChild;
- (id)lastElementChild;
- (id)previousElementSibling;
- (id)nextElementSibling;
- (NSUInteger)childElementCount;
- (id)innerText;
- (id)getAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (void)setAttribute:(id)arg1 :(id)arg2;
- (void)removeAttribute:(id)arg1;
- (id)getAttributeNode:(id)arg1;
- (id)setAttributeNode:(id)arg1;
- (id)removeAttributeNode:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNS:(id)arg1 :(id)arg2;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (void)removeAttributeNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 :(id)arg2;
- (id)setAttributeNodeNS:(id)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (BOOL)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (BOOL)hasAttributeNS:(id)arg1 :(id)arg2;
- (void)focus;
- (void)blur;
- (void)scrollIntoView:(BOOL)arg1;
- (BOOL)contains:(id)arg1;
- (void)scrollIntoViewIfNeeded:(BOOL)arg1;
- (void)scrollByLines:(NSInteger)arg1;
- (void)scrollByPages:(NSInteger)arg1;
- (id)getElementsByClassName:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (struct __GSFont { }*)_font;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_windowClipRect;
- (id)_getURLAttribute:(id)arg1;
- (void*)_NPObject;
- (BOOL)isFocused;
- (id)tapHighlightColor;
- (BOOL)touchCalloutEnabled;
- (BOOL)inDocument;
- (BOOL)isHidden;
- (BOOL)exceedsStructuralComplexity:(NSInteger)arg1;
- (BOOL)selectable;
- (BOOL)hasCustomLineHeight;
- (BOOL)isRichTextElementType;
- (BOOL)isRichTextElement;
- (NSInteger)quoteLevelDelta;
- (void)recursivelyRemoveMailAttributes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;

@end
