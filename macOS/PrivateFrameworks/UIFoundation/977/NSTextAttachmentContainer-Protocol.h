//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSTextContainer;

@protocol NSTextAttachmentContainer <NSObject>
- (struct CGRect)attachmentBoundsForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (NSImage *)imageForBounds:(struct CGRect)arg1 textContainer:(NSTextContainer *)arg2 characterIndex:(unsigned long long)arg3;
@end

