//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BSTDragPointApp : NSManagedObject
{
    NSString *importID;
}

@property(retain, nonatomic) NSString *importID; // @synthesize importID;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(retain, nonatomic) NSString *custom1; // @dynamic custom1;
@property(retain, nonatomic) NSString *custom2; // @dynamic custom2;
@property(retain, nonatomic) NSString *custom3; // @dynamic custom3;
@property(retain, nonatomic) NSSet *dragPoints; // @dynamic dragPoints;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

