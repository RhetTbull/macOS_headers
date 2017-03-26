//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCECellValue.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSCEStringCellValue : TSCECellValue <GSSPAutoEncodable>
{
    struct TSCEStringValue *mStringValue;
}

- (void)encodeToArchive:(struct StringCellValueArchive *)arg1;
- (id)initWithArchive:(const struct StringCellValueArchive *)arg1 locale:(id)arg2;
- (BOOL)isEqualToCellValue:(id)arg1;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_28403e59)formatStruct;
- (struct TSCEStringValue *)stringValue;
- (void)dealloc;
- (id)initWithStringValue:(struct TSCEStringValue *)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (void)populateGSSPCEStringCellValue:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

