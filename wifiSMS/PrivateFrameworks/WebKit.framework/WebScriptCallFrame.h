/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebScriptCallFramePrivate;



@interface WebScriptCallFrame : NSObject 
{
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}


- (void)dealloc;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)caller;
- (id)scopeChain;
- (id)functionName;
- (id)exception;
- (id)evaluateWebScript:(id)arg1;
- (id)_initWithGlobalObject:(id)arg1 debugger:(struct WebScriptDebugger { int (**x1)(); struct HashSet<JSC::JSGlobalObject*,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { struct HashTable<JSC::JSGlobalObject*,JSC::JSGlobalObject*,WTF::IdentityExtractor<JSC::JSGlobalObject*>,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { struct JSGlobalObject {} **x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_2_1_1; } x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RetainPtr<WebScriptCallFrame> { id x_4_1_1; } x4; struct ProtectedPtr<JSC::JSGlobalObject> { struct JSGlobalObject {} *x_5_1_1; } x5; struct RetainPtr<WebScriptCallFrame> { id x_6_1_1; } x6; }*)arg2 caller:(id)arg3 debuggerCallFrame:(const struct DebuggerCallFrame { struct ExecState {} *x1; struct JSValuePtr { struct JSCell {} *x_2_1_1; } x2; }*)arg4;
     /* Encoded args for previous method: @24@0:4@8^{WebScriptDebugger=^^?{HashSet<JSC::JSGlobalObject*,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> >={HashTable<JSC::JSGlobalObject*,JSC::JSGlobalObject*,WTF::IdentityExtractor<JSC::JSGlobalObject*>,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> >=^^{JSGlobalObject}iiii}}B{RetainPtr<WebScriptCallFrame>=@}{ProtectedPtr<JSC::JSGlobalObject>=^{JSGlobalObject}}{RetainPtr<WebScriptCallFrame>=@}}12@16r^{DebuggerCallFrame=^{ExecState}{JSValuePtr=^{JSCell}}}20 */

- (void)_setDebuggerCallFrame:(const struct DebuggerCallFrame { struct ExecState {} *x1; struct JSValuePtr { struct JSCell {} *x_2_1_1; } x2; }*)arg1;
- (void)_clearDebuggerCallFrame;
- (id)_convertValueToObjcValue:(struct JSValuePtr { struct JSCell {} *x1; })arg1;

@end
