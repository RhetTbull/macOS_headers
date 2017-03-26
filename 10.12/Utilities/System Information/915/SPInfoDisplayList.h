//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

@interface SPInfoDisplayList : NSObject
{
    NSBundle *_bundle;
    NSMutableArray *_displays;
    NSString *_mainGfxDisplayName;
    NSString *_altGfxDisplayName;
    NSMutableDictionary *_gfxDisplayNames;
}

@property(retain, nonatomic) NSMutableDictionary *gfxDisplayNames; // @synthesize gfxDisplayNames=_gfxDisplayNames;
@property(retain, nonatomic) NSString *altGfxDisplayName; // @synthesize altGfxDisplayName=_altGfxDisplayName;
@property(retain, nonatomic) NSString *mainGfxDisplayName; // @synthesize mainGfxDisplayName=_mainGfxDisplayName;
@property(retain, nonatomic) NSMutableArray *displays; // @synthesize displays=_displays;
- (id)localizedString:(id)arg1;
- (id)gfxDisplayNameForSerial:(unsigned long long)arg1;
- (void)dealloc;
- (void)updateDisplaysList;
- (id)init;
- (id)localizedGfxName:(id)arg1;

@end

