//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSOperation.h>

@class NSArray, NSObject, NSString;
@protocol IPHPublishServiceProtocol;

@interface PublishServiceAnnotationUpdateOperation : NSOperation
{
    NSString *photoUid;
    NSString *photoPublicationUid;
    BOOL isMovie;
    NSObject<IPHPublishServiceProtocol> *publishPlugin;
    NSString *serviceKey;
    NSString *serviceUsername;
    NSArray *annotations;
    NSString *publishDestination;
}

@property(retain) NSString *publishDestination; // @synthesize publishDestination;
@property BOOL isMovie; // @synthesize isMovie;
@property(retain) NSString *photoPublicationUid; // @synthesize photoPublicationUid;
@property(retain) NSString *photoUid; // @synthesize photoUid;
@property(retain) NSString *serviceUsername; // @synthesize serviceUsername;
@property(retain) NSString *serviceKey; // @synthesize serviceKey;
@property(retain) NSArray *annotations; // @synthesize annotations;
@property(retain) NSObject<IPHPublishServiceProtocol> *publishPlugin; // @synthesize publishPlugin;
- (void)main;
- (void)dealloc;

@end

