//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol MLMediaLibraryProtocol <NSObject>
- (void)updateMediaSources:(NSDictionary *)arg1;
- (void)setAttributesData:(NSData *)arg1 forMediaObject:(NSString *)arg2 inMediaSource:(NSString *)arg3;
- (void)setAttributesData:(NSData *)arg1 forMediaGroup:(NSString *)arg2 inMediaSource:(NSString *)arg3;
- (void)rootGroupData:(NSData *)arg1 forMediaSource:(NSString *)arg2;
@end

