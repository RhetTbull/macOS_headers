//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SettingsImport : NSObject
{
    struct CDocumentLogic *_sourceDoc;
    BOOL _fCloseSong;
    NSString *_path;
    long long _alternativeIndex;
    struct CDocumentLogic *_doc;
}

- (void)dealloc;
- (id)initWithSongPath:(id)arg1 destinationDocument:(struct CDocumentLogic *)arg2 alternativeIndex:(long long)arg3;
- (void)simpleNibPanelWasClosedWithValues:(id)arg1;
- (void)importSettings;
- (void)trackImportLoadProjectSettings:(struct SETTINGSIMPORTINFO *)arg1;
- (struct CDocumentLogic *)sourceDocument;
- (void)setSourceDocument:(struct CDocumentLogic *)arg1;
- (struct CDocumentLogic *)destinationDocument;
- (void)setDestinationDocument:(struct CDocumentLogic *)arg1;
- (BOOL)songIsValid:(struct CDocumentLogic *)arg1;

@end

