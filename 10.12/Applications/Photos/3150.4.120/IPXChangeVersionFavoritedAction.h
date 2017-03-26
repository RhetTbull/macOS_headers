//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoableModelAction.h>

@interface IPXChangeVersionFavoritedAction : RDUndoableModelAction
{
    unsigned long long _targetState;
    unsigned long long _currentState;
}

+ (id)commandLineUsageMessage;
@property unsigned long long currentState; // @synthesize currentState=_currentState;
@property(readonly) unsigned long long targetState; // @synthesize targetState=_targetState;
- (int)performActionWithModelObject:(id)arg1;
- (id)defaultActionName;
- (id)initWithVersion:(id)arg1 targetFavoritedState:(unsigned long long)arg2;
- (id)initWithVersions:(id)arg1 targetFavoritedState:(unsigned long long)arg2;
- (id)initWithDatabase:(id)arg1 commandLineArgs:(id)arg2;

@end

