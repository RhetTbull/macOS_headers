//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, NSURL;

@protocol QLDataGenerationHandler
- (void)startAttachment:(NSURL *)arg1 withMimeType:(NSString *)arg2 encoding:(NSString *)arg3;
- (void)receivedDataFromServer:(NSData *)arg1 attachmentURL:(NSURL *)arg2 hasMoreData:(BOOL)arg3;
@end

