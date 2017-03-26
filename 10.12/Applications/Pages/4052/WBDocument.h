//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBDocument : NSObject
{
}

+ (void)write:(id)arg1 to:(id)arg2;
+ (id)readFrom:(id)arg1;
+ (void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3;
+ (void)writeProperties:(id)arg1 to:(id)arg2;
+ (void)readProperties:(id)arg1 document:(id)arg2;
+ (void)readTextBoxesFrom:(id)arg1;
+ (void)writeParagraphPropertiesForIterator:(id)arg1 to:(id)arg2;
+ (void)writeCharacterPropertiesForIterator:(id)arg1 to:(id)arg2;
+ (void)writeParagraphPropertiesForHeaderText:(id)arg1 to:(id)arg2;
+ (void)writeParagraphProperties:(id)arg1 to:(id)arg2;
+ (void)writeCharacterPropertiesForHeaderText:(id)arg1 to:(id)arg2;
+ (void)writeCharacterProperties:(id)arg1 to:(id)arg2;
+ (void)addLastStoryTo:(struct WrdStoryTable *)arg1;
+ (void)writeStoryTablesTo:(id)arg1;
+ (void)writePropertiesOfPicturesInTextOfType:(int)arg1 to:(id)arg2;
+ (void)writeTextboxText:(id)arg1 to:(id)arg2;
+ (void)writeTextOfStories:(id)arg1 textType:(int)arg2 to:(id)arg3;
+ (void)writeHeaderText:(id)arg1 to:(id)arg2 index:(int)arg3 lastSection:(BOOL)arg4 headerType:(int)arg5;
+ (void)writeHeaderText:(id)arg1 to:(id)arg2;
+ (void)writeAnnotationText:(id)arg1 to:(id)arg2;
+ (void)writeNoteText:(id)arg1 to:(id)arg2 footnote:(BOOL)arg3;
+ (void)writeMainText:(id)arg1 to:(id)arg2;
+ (void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3;
+ (void)readSectionsFrom:(id)arg1 document:(id)arg2;
+ (void)setTimeStamp:(struct WrdDocumentProperties *)arg1;
- (id)applicationName;
- (id)init;

@end

