/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODDPoint, NSString, OADOrientedBounds, CMDrawingContext;



@interface CMDiagramPointMapper : CMMapper 
{
    ODDPoint *mPoint;
    CMDrawingContext *mDrawingContext;
    OADOrientedBounds *mOrientedBounds;
    NSString *mPresentationName;
}


- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapStyledRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 at:(id)arg2 withState:(id)arg3;
- (id)presentationName;
- (void)setPresentationName:(id)arg1;
- (void)mapChlidrenAt:(id)arg1 withState:(id)arg2;
- (id)presentationWithName:(id)arg1;
- (id)shapeStyle;
- (id)styleMatrix;
- (void)applyDiagramStyleToShapeProperties;
- (id)fill;
- (id)stroke;
- (void)renderShapeAsBackgroundInBounds:(id)arg1;
- (void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(BOOL)arg3 includeChildren:(BOOL)arg4 withState:(id)arg5;
- (void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(NSInteger)arg3 withState:(id)arg4;
- (void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(NSInteger)arg3 withState:(id)arg4;
- (id)transformForPresentationWithName:(id)arg1;
- (id)transformPresentationName;
- (id)plainText;
- (id)baseTextListStyleWithBounds:(id)arg1 isCentered:(BOOL)arg2;
- (id)diagram;
- (float)defaultFontSize;
- (void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(NSInteger)arg3 withState:(id)arg4;

@end
