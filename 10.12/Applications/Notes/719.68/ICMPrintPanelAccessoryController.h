//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPrintPanelAccessorizing-Protocol.h"

@interface ICMPrintPanelAccessoryController : NSViewController <NSPrintPanelAccessorizing>
{
    BOOL _wrappingToFit;
    BOOL _showsWrappingToFit;
}

@property(nonatomic) BOOL showsWrappingToFit; // @synthesize showsWrappingToFit=_showsWrappingToFit;
@property(nonatomic) BOOL wrappingToFit; // @synthesize wrappingToFit=_wrappingToFit;
- (id)localizedSummaryItems;
- (id)keyPathsForValuesAffectingPreview;
@property(nonatomic) BOOL pageNumbering;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)setRepresentedObject:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

