//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSKIdOperationArgsList : NSObject
{
    NSArray *_argsList;
}

@property(copy, nonatomic) NSArray *argsAsArray; // @synthesize argsAsArray=_argsList;
- (Class)inverseClass;
- (id)argsListTransformWithTransformer:(id)arg1 transformDataUsingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) TSKIdOperationArgsList *inverse;
@property(readonly, nonatomic) NSArray *operations;
- (void)dealloc;
- (id)initWithArgsList:(id)arg1;

@end

