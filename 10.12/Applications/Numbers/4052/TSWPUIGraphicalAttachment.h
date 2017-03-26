//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPAttachment.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSWPUIGraphicalAttachment : TSWPAttachment <GSSPAutoEncodable>
{
}

- (BOOL)wantsSelectionAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, nonatomic) struct CGSize size;
- (void)invalidate;
- (id)rendererForAttachment;
- (int)elementKind;
- (void)saveToArchive:(struct UIGraphicalAttachment *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct UIGraphicalAttachment *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)populateGSSPUIGraphicalAttachment:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

