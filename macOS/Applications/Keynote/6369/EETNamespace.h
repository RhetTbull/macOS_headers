//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSMutableSet, NSString;

@interface EETNamespace : NSObject
{
    NSMutableSet *mNames;
    unsigned int mMaximumCharacterCount;
    NSCharacterSet *mInvalidCharacters;
    NSString *mInvalidCharacterReplacement;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)getValidNameInNamespace:(id)arg1;
- (void)addName:(id)arg1;
- (id)init;

@end

