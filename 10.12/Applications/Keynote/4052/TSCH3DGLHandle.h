//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DResourceHandle.h"

@interface TSCH3DGLHandle : TSCH3DResourceHandle
{
    unsigned int mValue;
}

+ (id)handleWithGLHandle:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int value; // @synthesize value=mValue;
- (void)setValue:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithGLHandle:(unsigned int)arg1;

@end

