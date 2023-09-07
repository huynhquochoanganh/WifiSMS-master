/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;



@interface GMMTile : PBCodable 
{
    NSInteger _tileXIndex;
    NSInteger _tileYIndex;
    NSData *_tileData;
}

@property(retain) NSData *tileData; /* unknown property attribute: V_tileData */
@property NSInteger tileYIndex; /* unknown property attribute: V_tileYIndex */
@property NSInteger tileXIndex; /* unknown property attribute: V_tileXIndex */

+ (void*)createImageRefFromTileData:(id)arg1;

- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)tileData;
- (void)setTileData:(id)arg1;
- (NSInteger)tileYIndex;
- (void)setTileYIndex:(NSInteger)arg1;
- (NSInteger)tileXIndex;
- (void)setTileXIndex:(NSInteger)arg1;

@end
