//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoableModelAction.h>

@class IPXMetadataPropertyDescriptor, NSString;

@interface IPXChangeVersionPropertyAction : RDUndoableModelAction
{
    IPXMetadataPropertyDescriptor *_propertyDescriptor;
    id _newValue;
    NSString *_actionNameLocalizationKey;
}

@property(retain, nonatomic) NSString *actionNameLocalizationKey; // @synthesize actionNameLocalizationKey=_actionNameLocalizationKey;
- (void).cxx_destruct;
- (id)defaultActionNameLocalizationKey;
- (int)performActionWithModelObject:(id)arg1;
- (id)initWithVersions:(id)arg1 property:(id)arg2 newValue:(id)arg3;

@end

