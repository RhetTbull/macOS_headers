//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString, iTermProgressIndicator;

@interface TransferrableFileMenuItemView : NSView
{
    BOOL _lastDrawnHighlighted;
    BOOL _drawPending;
    NSString *_filename;
    NSString *_subheading;
    long long _size;
    long long _bytesTransferred;
    NSString *_statusMessage;
    iTermProgressIndicator *_progressIndicator;
}

@property(nonatomic) BOOL drawPending; // @synthesize drawPending=_drawPending;
@property(nonatomic) BOOL lastDrawnHighlighted; // @synthesize lastDrawnHighlighted=_lastDrawnHighlighted;
@property(retain, nonatomic) iTermProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(nonatomic) long long bytesTransferred; // @synthesize bytesTransferred=_bytesTransferred;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *subheading; // @synthesize subheading=_subheading;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void)drawRect:(struct CGRect)arg1;
- (void)sanityCheckSiblings;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

