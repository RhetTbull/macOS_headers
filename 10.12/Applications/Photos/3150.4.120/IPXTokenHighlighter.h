//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IPXTokenHighlighter : NSObject
{
    NSArray *_userTokens;
}

+ (id)tokenRecordsForString:(id)arg1;
@property(readonly) NSArray *userTokens; // @synthesize userTokens=_userTokens;
- (void).cxx_destruct;
- (id)highlightRangeValuesForString:(id)arg1;
- (id)initWithUserTokens:(id)arg1;
- (id)initWithUserString:(id)arg1;

@end

