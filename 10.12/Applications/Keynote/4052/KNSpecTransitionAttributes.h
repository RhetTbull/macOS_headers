//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSSSpec.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface KNSpecTransitionAttributes : TSSSpec <GSSPAutoEncodable>
{
}

+ (id)newFromArchive:(const struct SpecTransitionAttributesArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecTransitionAttributesArchive *)arg2 archiver:(id)arg3;
- (id)getUnsetSpec;
- (void)populateGSSPSpecTransitionAttributes:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

