//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TSCHStyleOwning;

@interface TSCHStyleOwnerParagraphStylePropertyPair : NSObject
{
    id <TSCHStyleOwning> mStyleOwner;
    int mProperty;
    int mPushProperty;
}

+ (id)pairWithStyleOwner:(id)arg1 property:(int)arg2 pushProperty:(int)arg3;
+ (id)pairWithStyleOwner:(id)arg1 property:(int)arg2;
@property(readonly, nonatomic) int pushProperty; // @synthesize pushProperty=mPushProperty;
@property(readonly, nonatomic) int property; // @synthesize property=mProperty;
@property(readonly, nonatomic) id <TSCHStyleOwning> styleOwner; // @synthesize styleOwner=mStyleOwner;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithStyleOwner:(id)arg1 property:(int)arg2 pushProperty:(int)arg3;

@end

