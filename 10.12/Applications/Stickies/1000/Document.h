//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSDate;

@interface Document : NSObject <NSCoding>
{
    int mWindowColor;
    int mWindowFlags;
    struct CGRect mWindowFrame;
    NSData *mRTFDData;
    NSDate *mCreationDate;
    NSDate *mModificationDate;
}

- (void)scale:(double)arg1;
- (void)setWindowFrame:(struct CGRect)arg1;
- (struct CGRect)windowFrame;
- (void)setWindowFlags:(int)arg1;
- (int)windowFlags;
- (void)setWindowColor:(int)arg1;
- (int)windowColor;
- (void)setRTFDData:(id)arg1;
- (id)RTFDData;
- (void)setModificationDate:(id)arg1;
- (id)modificationDate;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

