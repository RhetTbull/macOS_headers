//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBUndoableOperation.h"

@interface FBAddFacesOperation : FBUndoableOperation
{
}

+ (id)removeFaces:(id)arg1 fromGroup:(id)arg2;
+ (id)addFaces:(id)arg1 toGroup:(id)arg2;
+ (id)removeFaces:(id)arg1 fromCollection:(id)arg2;
+ (id)addFaces:(id)arg1 toCollection:(id)arg2;
+ (id)removeFamilies:(id)arg1 fromCollection:(id)arg2;
+ (id)addFamilies:(id)arg1 toCollection:(id)arg2;
- (void)redoInternal;
- (void)undoInternal;
- (void)performInternal;
- (id)dst;
- (id)families;
- (id)faces;
- (id)op;

@end

