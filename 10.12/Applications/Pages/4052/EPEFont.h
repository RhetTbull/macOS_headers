//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPESDocument, EPXFont, TSSStyle;

@interface EPEFont : NSObject
{
    EPESDocument *mDocumentState;
    TSSStyle *mSourceStyle;
    EPXFont *mFont;
}

+ (BOOL)canEmbedFont:(id)arg1 embeddedFontName:(id)arg2;
+ (id)mapFont:(id)arg1 documentState:(id)arg2;
- (void)pObfuscateFont:(id)arg1;
- (void)pSetFontSize:(float)arg1;
- (void)pSetFontFamily:(id)arg1;
- (void)mapFont;
- (void)setCaps:(int)arg1;
- (void)embedFont:(id)arg1 embeddedFontName:(id)arg2 embeddedFont:(id)arg3;
- (void)dealloc;
- (id)initWithSourceStyle:(id)arg1 documentState:(id)arg2;

@end

