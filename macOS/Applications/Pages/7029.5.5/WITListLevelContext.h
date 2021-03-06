//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WDListLevel, WITListContext;

@interface WITListLevelContext : NSObject
{
    unsigned char _levelIndex;
    WITListContext *_listContext;
    WDListLevel *_listLevel;
    NSMutableDictionary *_levelMap;
    NSArray *_labelCharacterInheritanceList;
    NSArray *_levelParagraphInheritanceList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *levelParagraphInheritanceList; // @synthesize levelParagraphInheritanceList=_levelParagraphInheritanceList;
@property(readonly, nonatomic) NSArray *labelCharacterInheritanceList; // @synthesize labelCharacterInheritanceList=_labelCharacterInheritanceList;
@property(readonly, nonatomic) NSMutableDictionary *levelMap; // @synthesize levelMap=_levelMap;
@property(readonly, nonatomic) WDListLevel *listLevel; // @synthesize listLevel=_listLevel;
@property(readonly, nonatomic) unsigned char levelIndex; // @synthesize levelIndex=_levelIndex;
@property(readonly, nonatomic) WITListContext *listContext; // @synthesize listContext=_listContext;
- (id)initWithListContext:(id)arg1 levelIndex:(unsigned char)arg2 listlevel:(id)arg3 levelParagraphInheritanceList:(id)arg4 labelCharacterInheritanceList:(id)arg5 levelMap:(id)arg6;

@end

