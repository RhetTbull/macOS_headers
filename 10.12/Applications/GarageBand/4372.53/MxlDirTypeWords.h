//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlDirType.h"

@class MxlTextFormatting, NSString;

@interface MxlDirTypeWords : MxlDirType
{
    NSString *wordsString;
    MxlTextFormatting *textFormatting1;
}

@property(readonly) MxlTextFormatting *textFormatting1; // @synthesize textFormatting1;
- (id)description;
- (void)xmlDebugDirectionTypeElem:(id)arg1;
- (void)xmlCreateDirectionTypeData:(id)arg1;
- (id)dirTypeName;
- (void)dealloc;
- (id)initWithWords:(id)arg1 textFormatting:(id)arg2;

@end

