//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCustomTouchBarItem.h>

#import "TSDMacTouchBarCollectionTubeClient-Protocol.h"
#import "TSDMacTouchBarCollectionTubeDelegate-Protocol.h"

@class NSString, TSDMacTouchBarCollectionTube;

@interface TSDMacTouchBarItem : NSCustomTouchBarItem <TSDMacTouchBarCollectionTubeClient, TSDMacTouchBarCollectionTubeDelegate>
{
    TSDMacTouchBarCollectionTube *_collectionTube;
    NSString *_viewEnabledBindingKeyPath;
}

@property(retain, nonatomic) NSString *viewEnabledBindingKeyPath; // @synthesize viewEnabledBindingKeyPath=_viewEnabledBindingKeyPath;
@property(retain, nonatomic) TSDMacTouchBarCollectionTube *collectionTube; // @synthesize collectionTube=_collectionTube;
- (void).cxx_destruct;
- (void)didEngageBindings;
- (void)willDisengageBindings;
- (id)initWithIdentifier:(id)arg1;

@end

