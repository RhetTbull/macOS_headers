//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBTableCell : NSObject
{
}

+ (void)setParagraphProperties:(id)arg1 paragraphProperties:(struct WrdParagraphProperties *)arg2 for:(id)arg3;
+ (void)writeCharacterProperties:(id)arg1 to:(id)arg2;
+ (void)writeParagraphProperties:(id)arg1 to:(id)arg2;
+ (void)writeText:(id)arg1 to:(id)arg2;
+ (void)readFrom:(id)arg1 textRun:(struct WrdTextRun *)arg2 with:(struct WrdTableProperties *)arg3 tracked:(struct WrdTableProperties *)arg4 row:(id)arg5 index:(unsigned long long)arg6 cell:(id)arg7;

@end

