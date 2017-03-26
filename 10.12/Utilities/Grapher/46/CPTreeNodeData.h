//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPObject.h"

#import "CPIndependentCoding-Protocol.h"
#import "NSCoding-Protocol.h"

@class CPTreeNode;

@interface CPTreeNodeData : CPObject <NSCoding, CPIndependentCoding>
{
    BOOL mIsLeaf;
    BOOL mIsExpandable;
    CPTreeNode *mNode;
}

+ (id)dataWithIsLeaf:(BOOL)arg1;
- (void)setNode:(id)arg1;
- (id)node;
- (BOOL)isExpandable;
- (void)setIsExpandable:(BOOL)arg1;
- (BOOL)isGroup;
- (BOOL)isLeaf;
- (void)setIsLeaf:(BOOL)arg1;
- (long long)compare:(id)arg1;
- (id)initWithIsLeaf:(BOOL)arg1;
- (BOOL)canBeEncodedIndependently;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

