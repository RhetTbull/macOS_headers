//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WDText;

@interface WDAnnotationData : NSObject
{
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (void)dealloc;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setDate:(id)arg1;
- (id)date;
- (id)text;
- (id)initWithText:(id)arg1;

@end

