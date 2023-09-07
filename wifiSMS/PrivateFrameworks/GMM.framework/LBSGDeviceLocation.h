/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLocation, LBSGCell;



@interface LBSGDeviceLocation : PBCodable 
{
    LBSGLocation *_location;
    LBSGCell *_cell;
}

@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasCell;
@property(retain) LBSGCell *cell; /* unknown property attribute: V_cell */
@property(retain) LBSGLocation *location; /* unknown property attribute: V_location */


- (id)init;
- (void)dealloc;
- (BOOL)hasLocation;
- (BOOL)hasCell;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)cell;
- (void)setCell:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;

@end
