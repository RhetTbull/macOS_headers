//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface KNKPFPath : NSObject
{
    NSArray *_elements;
}

+ (id)p_arrayFromCGPath:(const struct CGPath *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (const struct CGPath *)newCGPath;
@property(readonly, nonatomic) NSArray *arrayRepresentation;
- (BOOL)readFromKPFArray:(id)arg1 error:(out id *)arg2;
- (id)initWithCGPath:(const struct CGPath *)arg1;

@end

