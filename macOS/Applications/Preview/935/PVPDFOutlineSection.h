//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDFDestination;

@interface PVPDFOutlineSection : NSObject
{
    NSString *_sectionPath;
    PDFDestination *_startDest;
    PDFDestination *_endDest;
}

@property(retain) PDFDestination *endDest; // @synthesize endDest=_endDest;
@property(retain) PDFDestination *startDest; // @synthesize startDest=_startDest;
@property(copy) NSString *sectionPath; // @synthesize sectionPath=_sectionPath;
- (void).cxx_destruct;
- (void)dealloc;

@end

