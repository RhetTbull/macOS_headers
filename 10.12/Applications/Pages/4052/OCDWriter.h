//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OCDWriter : NSObject
{
    NSString *mFileName;
}

+ (void)writeDocument:(id)arg1 toData:(id)arg2 cancel:(id)arg3;
+ (void)writeDocument:(id)arg1 toFileName:(id)arg2 cancel:(id)arg3;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=mFileName;
- (void)dealloc;
- (_Bool)isBinaryWriter;

@end

