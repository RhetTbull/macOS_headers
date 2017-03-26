//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface EPXEntry : NSObject
{
    NSMutableArray *_subHeadings;
    BOOL _isCoverImage;
    int _type;
    NSString *_entryID;
    NSString *_href;
    NSString *_title;
    NSString *_headingElementName;
}

@property(nonatomic) BOOL isCoverImage; // @synthesize isCoverImage=_isCoverImage;
@property(retain, nonatomic) NSString *headingElementName; // @synthesize headingElementName=_headingElementName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *href; // @synthesize href=_href;
@property(readonly, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
- (BOOL)isMedia;
- (BOOL)isImage;
- (id)addSubHeadingWithID:(id)arg1 href:(id)arg2 title:(id)arg3 headingElementName:(id)arg4;
- (id)subHeadings;
- (BOOL)canAddSubHeading;
- (void)dealloc;
- (id)initWithID:(id)arg1 href:(id)arg2 type:(int)arg3 title:(id)arg4 headingElementName:(id)arg5;
- (id)initWithID:(id)arg1 href:(id)arg2 type:(int)arg3 title:(id)arg4;
- (id)initWithID:(id)arg1 href:(id)arg2 type:(int)arg3;

@end

