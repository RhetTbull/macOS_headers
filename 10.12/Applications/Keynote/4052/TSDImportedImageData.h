//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SFUDataRepresentation;

@interface TSDImportedImageData : NSObject
{
    SFUDataRepresentation *mDataRep;
    NSString *mDisplayName;
}

@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=mDisplayName;
@property(readonly, nonatomic) SFUDataRepresentation *dataRep; // @synthesize dataRep=mDataRep;
- (id)initWithDataRep:(id)arg1 displayName:(id)arg2;
- (void)dealloc;

@end

