//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class NSString;

@interface TPDocumentSettings : TSPObject
{
    BOOL _hasBody;
    BOOL _hasHeaders;
    BOOL _hasFooters;
    BOOL _qlPreview;
    BOOL _copyMovies;
    BOOL _copyAssets;
    BOOL _placeholderAuthoring;
    BOOL _sectionAuthoring;
    BOOL _linksEnabled;
    BOOL _hyphenation;
    BOOL _ligatures;
    BOOL _tocLinksEnabled;
    BOOL _showCTMarkup;
    BOOL _showCTDeletions;
    int _ctBubblesVisibility;
    BOOL _changeBarsVisible;
    BOOL _formatChangesVisible;
    BOOL _annotationsVisible;
    BOOL _documentIsRTL;
    int _footnoteKind;
    int _footnoteFormat;
    int _footnoteNumbering;
    long long _footnoteGap;
    NSString *_decimalTab;
    NSString *_language;
    NSString *_hyphenationLanguage;
    NSString *_creationLocale;
    NSString *_originalTemplate;
    NSString *_creationDate;
    NSString *_bibliographyFormat;
}

@property(nonatomic) int ctBubblesVisibility; // @synthesize ctBubblesVisibility=_ctBubblesVisibility;
- (id)stringWithCurrentDate;
- (void)resetForNewDocumentFromTemplate:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)dealloc;
@property(nonatomic) BOOL hasBody;
@property(readonly, nonatomic) int basicFootnoteFormat;
@property(copy, nonatomic) NSString *bibliographyFormat;
@property(copy, nonatomic) NSString *creationDate;
@property(copy, nonatomic) NSString *originalTemplate;
@property(copy, nonatomic) NSString *creationLocale;
@property(copy, nonatomic) NSString *hyphenationLanguage;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *decimalTab;
@property(nonatomic) long long footnoteGap;
@property(nonatomic) int footnoteNumbering;
@property(nonatomic) int footnoteFormat;
@property(nonatomic) int footnoteKind;
@property(nonatomic) BOOL sectionAuthoring;
@property(nonatomic) BOOL documentIsRTL;
@property(nonatomic) BOOL annotationsVisible;
@property(nonatomic) BOOL formatChangesVisible;
@property(nonatomic) BOOL changeBarsVisible;
- (void)setCTBubblesVisibility:(int)arg1;
@property(nonatomic) BOOL showCTDeletions;
@property(nonatomic) BOOL showCTMarkup;
@property(nonatomic) BOOL tocLinksEnabled;
@property(nonatomic) BOOL useLigatures;
@property(nonatomic) BOOL autoHyphenation;
@property(nonatomic) BOOL hyperlinksEnabled;
@property(nonatomic) BOOL placeholderAuthoring;
@property(nonatomic) BOOL copyTemplateAssets;
@property(nonatomic) BOOL copyMovies;
@property(nonatomic) BOOL quickLookPreview;
@property(nonatomic) BOOL hasFooters;
@property(nonatomic) BOOL hasHeaders;

@end

