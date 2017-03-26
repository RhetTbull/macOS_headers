//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSNumber, NSString;

@protocol IPXSelectionProviderContentItem <NSObject>
- (id)selectedContentItemValueForKey:(NSString *)arg1 type:(unsigned short)arg2;
- (NSString *)selectedContentItemBurstUUID;
- (BOOL)selectedContentItemIsFavorite;
- (BOOL)selectedContentItemSupportsImageProperties;
- (BOOL)selectedContentItemIsStackPick;
- (struct PFIntSize_st)selectedContentItemResolution;
- (NSDate *)selectedContentItemCreationDate;
- (NSNumber *)selectedContentItemFilesize;
- (unsigned long long)selectedContentItemFileType;
- (NSString *)selectedContentItemFilename;
- (NSString *)selectedContentItemTitle;
- (unsigned long long)itemType;
@end

