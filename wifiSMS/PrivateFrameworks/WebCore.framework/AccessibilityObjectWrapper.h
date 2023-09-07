/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AccessibilityObjectWrapper;



@interface AccessibilityObjectWrapper : NSObject 
{

  /* Error parsing encoded ivar type info: ^{AccessibilityObject=^^?iI{Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>="m_size"I"m_buffer"{VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>="m_buffer"^{RefPtr<WebCore::AccessibilityObject>}"m_capacity"I}}B{RetainPtr<AccessibilityObjectWrapper>="m_ptr"@"AccessibilityObjectWrapper"}} */
    struct AccessibilityObject { int (**x1)(); NSInteger x2; NSUInteger x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { 
                struct RefPtr<WebCore::AccessibilityObject> {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; struct RetainPtr<AccessibilityObjectWrapper> { 
            AccessibilityObjectWrapper *m_ptr; 
        } x6; } *m_object;

}


- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); NSInteger x2; NSUInteger x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; struct RetainPtr<AccessibilityObjectWrapper> { id x_6_1_1; } x6; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{AccessibilityObject=^^?iI{Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=^{RefPtr<WebCore::AccessibilityObject>}I}}B{RetainPtr<AccessibilityObjectWrapper>=@}}8 */

- (void)detach;
- (struct AccessibilityObject { int (**x1)(); NSInteger x2; NSUInteger x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; struct RetainPtr<AccessibilityObjectWrapper> { id x_6_1_1; } x6; }*)accessibilityObject;
     /* Encoded args for previous method: ^{AccessibilityObject=^^?iI{Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=^{RefPtr<WebCore::AccessibilityObject>}I}}B{RetainPtr<AccessibilityObjectWrapper>=@}}8@0:4 */

- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityContainer;
- (id)_accessibilityWebDocumentView;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1;
- (BOOL)isAttachment;
- (id)attachmentView;

@end
