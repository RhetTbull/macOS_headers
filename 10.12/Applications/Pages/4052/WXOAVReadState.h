//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OAVReadState.h"

@class NSMutableDictionary, WDParagraph, WXReadState;

@interface WXOAVReadState : OAVReadState
{
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}

- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)currentParagraph;
- (id)wxReadState;
- (void)dealloc;
- (id)initWithWXReadState:(id)arg1;

@end

