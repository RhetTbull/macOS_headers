//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TSWPEndNoteConnection : NSObject
{
    NSArray *_defaultFormats;
    unsigned int _failedPluginLoadingAttempts;
    BOOL _checkedEndNoteAvailability;
    CDStruct_2c3aca9f _availability;
    NSString *_format;
}

+ (void)applyEndNoteXml:(id)arg1 toCitationRecord:(id)arg2;
+ (id)currentPluginDownloadURL;
+ (id)sharedEndNoteConnection;
@property(retain) NSString *format; // @synthesize format=_format;
- (id)p_getProxyObject;
- (id)p_fixEndNoteAttributedString:(id)arg1;
- (BOOL)getBibliographyString:(id *)arg1 andCitationStrings:(id *)arg2 forCitationInfos:(id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getBibliographyString:(id *)arg1 andCitationStrings:(id *)arg2 forCitationRecords:(id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getFormattedTextForCitation:(id)arg1 usingPosition:(unsigned int)arg2 outCitation:(id *)arg3 outBiblioEntry:(id *)arg4;
- (id)infosForAdjacentCitations:(id)arg1 isFootnote:(BOOL)arg2;
- (id)infoForCitation:(id)arg1 isFootnote:(BOOL)arg2;
- (id)infoForCitation:(id)arg1;
- (id)p_infoForCitation:(id)arg1 isAdjacent:(BOOL)arg2 isFootnote:(BOOL)arg3;
- (BOOL)anyOpenNonEmptyLibraries;
- (BOOL)anyOpenLibraries;
- (id)defaultStyle;
- (id)favoriteStyles;
- (id)outputStyles;
- (id)recordsForSearchString:(id)arg1 forContext:(id)arg2;
- (BOOL)launchEndNote:(BOOL)arg1;
- (BOOL)isEndNoteAvailableInContext:(id)arg1;
- (CDStruct_2c3aca9f)availability;
- (id)bibliographyFormatMenu;
- (id)availableFormats;
- (id)formatForTag:(long long)arg1;
- (long long)tagForFormat:(id)arg1;
- (void)dealloc;
- (id)init;

@end

