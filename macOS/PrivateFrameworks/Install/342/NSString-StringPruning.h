//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (StringPruning)
+ (id)stringWithFourCharCode:(unsigned int)arg1;
- (id)stringByRemovingString:(id)arg1;
- (unsigned int)fourCharCode;
- (id)versionStringByPaddingToCount:(int)arg1;
- (long long)compareVersionString:(id)arg1;
- (int)tupleCount;
- (id)_tuplesOfVersionString;
- (BOOL)containsString:(id)arg1;
- (id)substringBeforeString:(id)arg1;
- (id)componentsMatchingByPattern:(id)arg1 count:(int)arg2;
- (long long)languageKeyCompare:(id)arg1;
- (BOOL)pathIsInSameDomainAsPath:(id)arg1;
- (BOOL)pathIsASystemVolume;
- (id)domainPath;
- (id)stringByAppendingTupleVersion:(id)arg1;
@end

