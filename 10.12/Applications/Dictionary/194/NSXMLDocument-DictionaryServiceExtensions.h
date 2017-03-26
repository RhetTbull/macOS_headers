//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSXMLDocument.h>

@interface NSXMLDocument (DictionaryServiceExtensions)
+ (id)documentWithMalformedXMLString:(id)arg1;
- (id)_cachedURL:(unsigned int)arg1 forDictionary:(id)arg2;
- (id)_fixupMalformedXMLString:(id)arg1;
- (id)stringsForElement:(id)arg1;
- (void)adjustForDictionary:(id)arg1 newDictionary:(BOOL)arg2 relativePathTargets:(id)arg3;
- (void)embedDictionaryLinkForRecords:(id)arg1 targetFile:(id)arg2;
- (BOOL)embedDictionaryContents:(id)arg1;
- (void)specifyCSS:(int)arg1 forDictionary:(id)arg2;
- (void)appendGlobalDictionaryIDs;
- (void)specifyDefaultScript;
- (id)objectByApplyingDefaultXSLTWithArguments:(id)arg1;
- (id)objectByApplyingXSLTForDictionary:(id)arg1 arguments:(id)arg2 fallback:(BOOL)arg3;
- (id)objectByApplyingXSLTForDictionary:(id)arg1;
- (id)objectByApplyingXSLTForMainPage:(id)arg1;
- (id)initWithMalformedXMLString:(id)arg1;
@end

