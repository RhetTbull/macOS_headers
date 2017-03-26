//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPPlaceholderSmartField.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString;

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField <GSSPAutoEncodable>
{
    NSString *_href;
}

- (int)smartFieldKind;
- (BOOL)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (const struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;
@property(copy, nonatomic) NSString *href;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPUnsupportedHyperlinkField:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

