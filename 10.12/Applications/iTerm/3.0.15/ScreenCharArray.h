//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ScreenCharArray : NSObject
{
    struct screen_char_t *_line;
    int _length;
    int _eol;
}

@property(nonatomic) int eol; // @synthesize eol=_eol;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) struct screen_char_t *line; // @synthesize line=_line;

@end

