//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (Logic)
+ (id)stringWithTxID:(int)arg1;
+ (id)stringWithPascalString:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encodingOfSong:(const struct CSong *)arg2;
+ (id)stringWithCStringEncodedTrimmedSpaces:(const char *)arg1;
+ (id)stringWithCStringEncoded:(const char *)arg1;
+ (id)stringWithCStringEncoded:(const char *)arg1 length:(unsigned int)arg2;
- (id)stringWithIncrementedTail;
- (void)getCStringEncoded:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)initWithCStringEncodedTrimmedSpaces:(const char *)arg1;
- (id)initWithCStringEncoded:(const char *)arg1 length:(unsigned int)arg2;
@end

