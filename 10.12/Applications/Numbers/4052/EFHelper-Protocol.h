//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EDTable, NSString;

@protocol EFHelper <NSObject>
- (int)columnNumber;
- (int)rowNumber;
- (int)resolveFunctionName:(NSString *)arg1;
- (BOOL)isCurrentSheet:(NSString *)arg1;
- (unsigned long long)resolveTableColumn:(EDTable *)arg1 columnName:(NSString *)arg2;
- (unsigned long long)resolveTableToSheetId:(NSString *)arg1;
- (EDTable *)resolveTable:(NSString *)arg1;
- (unsigned long long)resolveFile:(NSString *)arg1;
- (unsigned long long)resolveFirstSheet:(NSString *)arg1 lastSheet:(NSString *)arg2;
- (unsigned long long)resolveSheet:(NSString *)arg1;
- (unsigned long long)resolveName:(NSString *)arg1;
@end

