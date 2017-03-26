//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PVFileReference;

@interface PVLegacyBookmark : NSObject
{
    NSString *_UUID;
    NSString *_parentUUID;
    PVFileReference *_file;
    NSDate *_fileModDate;
    NSString *_label;
    int _pageIndex;
}

- (void).cxx_destruct;
- (unsigned long long)pageNumber;
- (id)displayPath;
- (BOOL)targetIsOnNetworkVolume;
- (id)targetExists;
- (unsigned long long)pageIndex;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)fileModificationDate;
- (id)filePath;
- (id)UUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilePath:(id)arg1 label:(id)arg2 pageIndex:(unsigned long long)arg3;

@end

