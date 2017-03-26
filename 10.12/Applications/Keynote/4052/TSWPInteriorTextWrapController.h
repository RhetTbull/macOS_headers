//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSWPTextWrap-Protocol.h"

@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>
{
}

+ (id)sharedInteriorTextWrapController;
- (_Bool)checkForUnobstructedSpan:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(out struct CGRect [128])arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 canvasCausedWrap:(out char *)arg5 skipHint:(out double *)arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(char *)arg3;

@end

