//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject
{
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2;
- (id)extendedAttributeForName:(id)arg1;
- (id)allAttributes;
- (BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 error:(id *)arg4;
- (id)initWithPath:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

