//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDAlignmentInfo, EDProtection, EDString;

@interface EDTextBox : NSObject
{
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;
- (id)description;
- (void)setProtection:(id)arg1;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (id)alignmentInfo;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;

@end

