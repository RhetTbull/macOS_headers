//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GQDDrawable, GQSDocument;

@protocol GQDrawablesGenerator <NSObject>
+ (int)endDrawables:(GQSDocument *)arg1;
+ (Class)beginTable:(GQSDocument *)arg1;
+ (int)handleDrawable:(GQDDrawable *)arg1 state:(GQSDocument *)arg2;
+ (int)beginDrawables:(GQSDocument *)arg1;
@end

