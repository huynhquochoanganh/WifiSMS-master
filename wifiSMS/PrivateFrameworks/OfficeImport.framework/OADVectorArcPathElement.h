/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OADVectorArcPathElement : OADPathElement 
{
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mLeft;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mTop;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mRight;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mBottom;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } y; 
    } mStartVector;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } y; 
    } mEndVector;
    BOOL mClockwise;
    BOOL mConnectedToPrevious;
}


- (id)initWithLeft:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg1 top:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg2 right:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg3 bottom:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg4 startVector:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })arg5 endVector:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })left;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })top;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })right;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })bottom;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })startVector;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })endVector;
- (BOOL)clockwise;
- (BOOL)connectedToPrevious;

@end
