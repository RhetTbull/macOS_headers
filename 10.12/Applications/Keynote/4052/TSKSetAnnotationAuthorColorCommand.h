//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSKChangeAuthorColorsCommand-Protocol.h"

@class NSArray, NSString, TSKAnnotationAuthor, TSUColor;

@interface TSKSetAnnotationAuthorColorCommand : TSKCommand <GSSPAutoEncodable, TSKChangeAuthorColorsCommand>
{
    TSKAnnotationAuthor *_author;
    TSUColor *_color;
    TSUColor *_oldColor;
}

@property(retain, nonatomic) TSUColor *oldColor; // @synthesize oldColor=_oldColor;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) NSArray *changedAuthorList;
- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)setAuthorColor:(id)arg1;
- (id)authorInStorage;
- (BOOL)process;
- (id)actionString;
- (void)dealloc;
- (id)initWithContext:(id)arg1 annotationAuthor:(id)arg2 color:(id)arg3;
- (void)deallocSOS;
- (void)populateGSSPCmdSetAnnotationAuthorColor:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

