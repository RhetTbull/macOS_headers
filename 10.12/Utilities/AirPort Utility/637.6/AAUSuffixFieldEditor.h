//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSString;

@interface AAUSuffixFieldEditor : NSTextView
{
    NSString *_suffixString;
}

- (void)deleteForward:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (void)setSuffixString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

