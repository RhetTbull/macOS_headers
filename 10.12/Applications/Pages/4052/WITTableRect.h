//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDTableCell, WDTableCellProperties;

@interface WITTableRect : NSObject
{
    unsigned long long mRow;
    unsigned long long mRowSpan;
    unsigned long long mColumn;
    unsigned long long mColumnSpan;
    WDTableCell *mWdCell;
    WDTableCellProperties *mWdMergedCellProperties;
    struct CGRect mRect;
}

+ (id)rectWithRect:(struct CGRect)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;
@property(retain, nonatomic) WDTableCellProperties *wdMergedCellProperties; // @synthesize wdMergedCellProperties=mWdMergedCellProperties;
@property(retain, nonatomic) WDTableCell *wdCell; // @synthesize wdCell=mWdCell;
@property(nonatomic) unsigned long long columnSpan; // @synthesize columnSpan=mColumnSpan;
@property(nonatomic) unsigned long long column; // @synthesize column=mColumn;
@property(nonatomic) unsigned long long rowSpan; // @synthesize rowSpan=mRowSpan;
@property(nonatomic) unsigned long long row; // @synthesize row=mRow;
@property(nonatomic) struct CGRect rect; // @synthesize rect=mRect;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;

@end

