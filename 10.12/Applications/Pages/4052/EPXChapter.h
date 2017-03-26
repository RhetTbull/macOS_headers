//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EPXXmlDocument.h"

@class EPXSChapter, EPXText, NSMutableSet;

@interface EPXChapter : EPXXmlDocument
{
    EPXSChapter *mState;
    EPXText *mTextContainer;
    NSMutableSet *mAddedBookmarkIDs;
}

+ (BOOL)createChapterInStream:(id)arg1 outChapter:(id *)arg2 state:(id)arg3;
- (BOOL)tearDown;
- (void)cancel;
- (BOOL)setup;
- (id)textContainer;
- (void)addBookmarkWithName:(id)arg1;
- (void)addSubHeadingWithID:(id)arg1 href:(id)arg2 title:(id)arg3 headingElementName:(id)arg4;
- (id)state;
- (void)dealloc;
- (id)initWithPath:(id)arg1 state:(id)arg2;
- (id)initWithTextWriter:(struct _xmlTextWriter *)arg1 state:(id)arg2;
- (BOOL)writeAdditionalNamespaces;
- (BOOL)writeChapterHeader;

@end

