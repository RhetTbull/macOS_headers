//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OADTextRun.h"

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun
{
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (void)removeUnnecessaryOverrides;
- (void)setText:(id)arg1;
- (id)text;
- (id)paragraphProperties;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)init;

@end

