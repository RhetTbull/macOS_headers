//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Quartz/PDFAnnotationLine.h>

#import "PVPDFAKAnnotationAdaptor-Protocol.h"

@class AKAnnotation, NSString;

@interface PVPDFAnnotationLine : PDFAnnotationLine <PVPDFAKAnnotationAdaptor>
{
    BOOL _isWritingAppearanceStream;
    AKAnnotation *_akAnnotation;
}

+ (id)newAKAnnotationWithPDFAnnotation:(id)arg1 fromSourceDictionary:(struct CGPDFDictionary *)arg2;
@property BOOL isWritingAppearanceStream; // @synthesize isWritingAppearanceStream=_isWritingAppearanceStream;
@property(retain) AKAnnotation *akAnnotation; // @synthesize akAnnotation=_akAnnotation;
- (void).cxx_destruct;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)drawWithBox:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAKAnnotation:(id)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

