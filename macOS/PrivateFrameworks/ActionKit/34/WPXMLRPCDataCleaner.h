//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface WPXMLRPCDataCleaner : NSObject
{
    NSData *xmlData;
}

- (void).cxx_destruct;
- (id)cleanData;
- (id)initWithData:(id)arg1;
- (id)appendClosingTags:(id)arg1 toResponseString:(id)arg2;
- (id)repairTruncatedClosingTags:(id)arg1 inResponseString:(id)arg2;
- (struct _NSRange)rangeOfLastValidClosingTagInString:(id)arg1;
- (id)cloingTagsForString:(id)arg1;
- (id)cleanClosingTagIfNeeded:(id)arg1 lengthOfCharactersPrecedingPreamble:(long long)arg2;
- (id)cleanWithTidyIfPresent:(id)arg1;
- (id)cleanInvalidXMLCharacters:(id)arg1;
- (id)cleanCharactersBeforePreamble:(id)arg1;
- (id)cleanInvalidUTF8:(id)arg1;

@end

