//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDTCell.h"

#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDTSpanCell : GQDTCell <ICExportable>
{
    unsigned short mHorizontalOffset;
    unsigned short mVerticalOffset;
}

+ (unsigned char)defaultFlags;
@property(nonatomic) unsigned short verticalOffset; // @synthesize verticalOffset=mVerticalOffset;
@property(nonatomic) unsigned short horizontalOffset; // @synthesize horizontalOffset=mHorizontalOffset;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

