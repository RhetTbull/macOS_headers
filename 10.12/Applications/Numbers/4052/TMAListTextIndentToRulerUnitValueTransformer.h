//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface TMAListTextIndentToRulerUnitValueTransformer : NSValueTransformer
{
    CDUnknownBlockType _convertValueToPtsBlock;
    CDUnknownBlockType _convertValueToModelUnitsBlock;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(copy) CDUnknownBlockType convertValueToModelUnitsBlock; // @synthesize convertValueToModelUnitsBlock=_convertValueToModelUnitsBlock;
@property(copy) CDUnknownBlockType convertValueToPtsBlock; // @synthesize convertValueToPtsBlock=_convertValueToPtsBlock;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)dealloc;

@end

