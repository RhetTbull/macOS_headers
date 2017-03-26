//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDGLVoronoiTriangleDataCell : NSObject
{
    unsigned long long _triangleCount;
    unsigned long long _vertexCount;
    CDStruct_6e3f967a *_vertexData;
    CDStruct_6e3f967a _centerPoint;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) CDStruct_6e3f967a centerPoint; // @synthesize centerPoint=_centerPoint;
@property(readonly, nonatomic) CDStruct_6e3f967a *vertexData; // @synthesize vertexData=_vertexData;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) unsigned long long triangleCount; // @synthesize triangleCount=_triangleCount;
- (void)dealloc;
- (id)initWithTrianglePoints:(CDStruct_6e3f967a *)arg1;
- (id)initWithEdges:(vector_5a9f1b73)arg1;
- (id)cellsBySplittingCellIntoTriangles;
- (void)p_setupTriangleDataWithEdges:(vector_5a9f1b73)arg1;

@end

