//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface TMACollectionViewLayoutAttributes : NSObject
{
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _frame;
    BOOL _hidden;
    NSIndexPath *_indexPath;
    double _alpha;
    long long _zIndex;
    struct CATransform3D _transform3D;
}

+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)description;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint center;
- (void)dealloc;
- (id)initWithIndexPath:(id)arg1;

@end

