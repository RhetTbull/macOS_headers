//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBFontEntity : NSObject
{
    NSString *mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}

- (int)family;
- (int)type;
- (int)charSet;
- (id)faceName;
- (void)dealloc;
- (id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;

@end

