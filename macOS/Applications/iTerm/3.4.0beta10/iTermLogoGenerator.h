//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor;

@interface iTermLogoGenerator : NSObject
{
    NSColor *_textColor;
    NSColor *_cursorColor;
    NSColor *_backgroundColor;
    NSColor *_tabColor;
}

@property(retain, nonatomic) NSColor *tabColor; // @synthesize tabColor=_tabColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
- (id)generatedImage;
- (id)cacheKey;
- (id)keyForColor:(id)arg1;
- (void)dealloc;

@end

