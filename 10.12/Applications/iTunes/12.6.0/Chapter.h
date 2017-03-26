//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface Chapter : NSObject
{
    int _time;
    unsigned int _index;
    NSString *_title;
    NSImage *_image;
}

+ (id)copyChaptersWithChapterData:(struct ChapterData *)arg1;
+ (id)chaptersWithChapterData:(struct ChapterData *)arg1;
+ (id)copyChaptersFromCurrentHandler;
+ (id)chaptersFromCurrentHandler;
+ (BOOL)chaptersHaveNamesFromCurrentHandler;
+ (id)chapterWithTime:(int)arg1 index:(unsigned int)arg2 title:(id)arg3 image:(id)arg4;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) int time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)dealloc;
- (id)initWithTime:(int)arg1 index:(unsigned int)arg2 title:(id)arg3 image:(id)arg4;

@end

