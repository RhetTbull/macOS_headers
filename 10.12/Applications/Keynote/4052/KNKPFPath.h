//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface KNKPFPath : NSObject
{
    NSArray *_elements;
}

+ (id)p_arrayFromCGPath:(struct CGPath *)arg1;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (struct CGPath *)newCGPath;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (BOOL)readFromKPFArray:(id)arg1 error:(out id *)arg2;
- (id)initWithCGPath:(struct CGPath *)arg1;
- (void)dealloc;

@end

