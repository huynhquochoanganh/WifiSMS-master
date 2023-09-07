/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIView, NSMutableArray, UIBezierPath, SUCellConfiguration;



@interface SUTableCellContentView : UIView <SUCellConfigurationView>
{
    NSInteger _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    unsigned int _drawAsDisabled : 1;
    unsigned int _highlighted : 1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned int _useSubviewLayout : 1;
}

@property BOOL usesSubviews;
@property(getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property BOOL drawAsDisabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) SUCellConfiguration *configuration; /* unknown property attribute: V_configuration */
@property NSInteger clipCorners; /* unknown property attribute: V_clipCorners */


- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (BOOL)drawAsDisabled;
- (BOOL)isDeleteConfirmationVisible;
- (BOOL)isHighlighted;
- (void)setClipCorners:(NSInteger)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDeleteConfirmationVisisble:(BOOL)arg1;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setUsesSubviews:(BOOL)arg1;
- (void)setUsesSubviews:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)usesSubviews;
- (id)_clippedImageForImage:(id)arg1;
- (void)_reloadSubviewAlphasAnimated:(BOOL)arg1;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (id)_scriptingInfo;
- (id)configuration;
- (NSInteger)clipCorners;

@end
