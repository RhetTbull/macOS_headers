//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSImage, NSString;

@protocol SPInfoRecommendation <NSObject>
@property(readonly, copy) NSString *helpBook;
@property(readonly, copy) NSString *helpAnchor;
@property(readonly) long long recoverableByteCount;
@property(readonly, copy) NSString *actionButtonTitle;
@property(readonly, copy) NSString *message;
@property(readonly, copy) NSString *secondaryTitle;
@property(readonly, copy) NSString *title;
@property(readonly, retain) NSImage *icon;
@property(readonly, retain) NSString *identifier;
@property long long state;
@end

