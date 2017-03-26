//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICExportable-Protocol.h"

@class NSString, TSUColor;

@interface GQDWPChangeColorSet : NSObject <ICExportable>
{
    unsigned int mColorSetID;
}

+ (id)primaryColorForColorSet:(unsigned int)arg1;
- (int)p_readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
@property(readonly, nonatomic) TSUColor *primaryColor;
- (void)setColorSetIDFromColor:(id)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (BOOL)omit_sfaID;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

