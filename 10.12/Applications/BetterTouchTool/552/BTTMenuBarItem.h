//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BTTMenuBarItem : NSObject
{
    BOOL _isSeperator;
    BOOL _hasMark;
    BOOL _isEnabled;
    BOOL _isParent;
    NSString *_title;
    struct __AXUIElement *_elementRef;
    long long _tag;
    NSString *_key;
    NSString *_modifier;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL isParent; // @synthesize isParent=_isParent;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) BOOL hasMark; // @synthesize hasMark=_hasMark;
@property(copy, nonatomic) NSString *modifier; // @synthesize modifier=_modifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) BOOL isSeperator; // @synthesize isSeperator=_isSeperator;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) struct __AXUIElement *elementRef; // @synthesize elementRef=_elementRef;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)init;

@end

