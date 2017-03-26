//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDPathSource.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSDRealignablePathSource-Protocol.h"

@class NSArray, TSDBezierNode;

@interface TSDEditableBezierPathSource : TSDPathSource <GSSPAutoEncodable, TSDRealignablePathSource, TSDMixing>
{
    NSArray *mSubpaths;
    unsigned long long mActiveSubpath;
    BOOL mHasLockedFlipTransform;
    struct CGAffineTransform mLockedFlipTransform;
}

+ (id)editableBezierPathSourceWithBezierPath:(id)arg1;
+ (id)editableBezierPathSourceWithPathSource:(id)arg1;
+ (id)editableBezierPathSource;
@property(copy, nonatomic) NSArray *subpaths; // @synthesize subpaths=mSubpaths;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)closePath;
- (void)smoothCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) NSArray *nodeTypes;
@property(readonly, nonatomic) struct CGPath *subpathForSelection;
- (void)cutAtSelectedNodes;
- (BOOL)canCutAtSelectedNodes;
- (void)splitSelectedNodes;
- (void)splitSelectedEdges;
- (id)splitEdge:(long long)arg1 at:(double)arg2 fromSubpath:(long long)arg3;
- (void)deleteSelectedEdges;
- (void)closeSelectedNodes;
- (BOOL)canCloseSelectedNodes;
- (void)connectSelectedNodes;
- (BOOL)canConnectSelectedNodes;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(char *)arg1 andSecondPathFirstNode:(char *)arg2;
- (void)selectSubpathForNode:(id)arg1 toggle:(BOOL)arg2;
@property(nonatomic, getter=isClosed) BOOL closed;
@property(readonly, nonatomic) BOOL isOpen;
- (void)smoothAllNodes;
- (void)smoothNode:(id)arg1;
- (void)sharpenAllNodes;
- (void)toggleSelectedNodesToType:(int)arg1;
- (void)toggleNode:(id)arg1 toType:(int)arg2 prevNode:(id)arg3 nextNode:(id)arg4;
@property(readonly, nonatomic) struct CGRect nodeBounds;
- (double)distanceToPoint:(struct CGPoint)arg1 subpathIndex:(unsigned long long *)arg2 elementIndex:(unsigned long long *)arg3 tValue:(double *)arg4 threshold:(double)arg5;
- (id)bezierNodeUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)deleteSelectedNodes;
- (void)deleteSelectedNodesForced:(BOOL)arg1;
@property(readonly, nonatomic) BOOL deletingSelectedNodesWillDeleteShape;
@property(readonly, nonatomic) BOOL canDeleteSelectedNodes;
@property(readonly, nonatomic) BOOL isCompound;
- (void)removeNode:(id)arg1;
@property(readonly, nonatomic) BOOL allNodesSelected;
@property(readonly, nonatomic) BOOL hasSelectedNode;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSDBezierNode *lastNode;
@property(readonly, nonatomic) TSDBezierNode *firstNode;
- (id)nodeAfterNode:(id)arg1;
- (id)nodePriorToNode:(id)arg1;
- (void)removeLastNode;
- (void)addNode:(id)arg1;
- (void)adjustGeometryForAlignToOrigin:(id)arg1;
- (void)alignToOrigin;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (Class)preferredRepClass;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)pathFlipTransform;
- (void)setLockedFlipTransform:(BOOL)arg1;
- (void)reverseDirection;
@property(copy, nonatomic) NSArray *nodes;
- (void)setBezierPath:(id)arg1;
- (void)convertToHobby;
- (struct CGPath *)pathWithoutFlips;
- (id)bezierPathWithoutFlips;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (void)dealloc;
@property(readonly, nonatomic) BOOL closeIfEndpointsAreEqual;
- (BOOL)isEqualWithStrictComparison:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)addTemporarySmoothNodes;
- (void)updateSmoothNodes;
- (void)morphWithMorphInfo:(id)arg1;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPEditableBezierPathSource:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;

@end

