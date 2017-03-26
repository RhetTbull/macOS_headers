//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"

@class NSString, NSTextField, NSView;

@interface IPXMetadataEditorDateViewController : IPXViewController <IPXMetadataEditorViewController>
{
    NSTextField *_dateTextField;
}

@property(nonatomic) __weak NSTextField *dateTextField; // @synthesize dateTextField=_dateTextField;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (id)_infoDateLabelTimeFormatter;
- (id)_infoDateLabelDateFormatter;
- (id)_timeStringForDate:(id)arg1;
- (id)_dateStringForDate:(id)arg1;
- (BOOL)metadataViewIsVisible;
- (void)selectedVersions:(id)arg1;
- (void)propertiesHaveChanged:(id)arg1 forSelectedVersions:(id)arg2;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (id)editorIdentifier;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end

