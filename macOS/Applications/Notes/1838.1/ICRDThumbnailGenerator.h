//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRDThumbnailConfiguration, NSManagedObjectContext;

@interface ICRDThumbnailGenerator : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    ICRDThumbnailConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ICRDThumbnailConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)generateThumbnailWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithManagedObjectContext:(id)arg1;

@end

