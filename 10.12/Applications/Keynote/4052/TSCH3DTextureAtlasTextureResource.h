//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DResource.h"

#import "TSCHUnretainedParent-Protocol.h"

@class TSCH3DTextureAtlasTexture;

@interface TSCH3DTextureAtlasTextureResource : TSCH3DResource <TSCHUnretainedParent>
{
    TSCH3DTextureAtlasTexture *mParent;
}

- (id)get;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

