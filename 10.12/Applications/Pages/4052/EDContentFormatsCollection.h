//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EDKeyedCollection.h"

@interface EDContentFormatsCollection : EDKeyedCollection
{
    unsigned long long mNextContentFormatId;
}

- (unsigned long long)addOrEquivalentObject:(id)arg1;
- (unsigned long long)addObject:(id)arg1;
- (id)init;
- (_Bool)isOverwritingKeyOK;
- (void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2;
- (void)setupDefaults;

@end

