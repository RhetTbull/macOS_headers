//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICExportable-Protocol.h"

@class GQDWPChangeAuthor, NSDate, NSString;

@interface GQDWPChangeSession : NSObject <ICExportable>
{
    unsigned int mSessionUID;
    GQDWPChangeAuthor *mAuthor;
    NSDate *mDate;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=mDate;
@property(readonly, nonatomic) GQDWPChangeAuthor *author; // @synthesize author=mAuthor;
@property(readonly, nonatomic) unsigned int sessionUID; // @synthesize sessionUID=mSessionUID;
- (int)p_readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (void)dealloc;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

