//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSKCommandHistory;
@protocol TSKFieldEditingCommandSelectionPathValidator;

@interface TSKLocalCommandDispatcherFieldEditingState : NSObject
{
    TSKCommandHistory *_history;
    id <TSKFieldEditingCommandSelectionPathValidator> _selectionPathValidator;
}

@property(readonly, retain, nonatomic) id <TSKFieldEditingCommandSelectionPathValidator> selectionPathValidator; // @synthesize selectionPathValidator=_selectionPathValidator;
@property(readonly, retain, nonatomic) TSKCommandHistory *history; // @synthesize history=_history;
- (void)dealloc;
- (id)initWithHistory:(id)arg1 selectionPathValidator:(id)arg2;
- (id)init;

@end

