//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlSystemLayout.h"

@interface MxlPageLayout : MxlSystemLayout
{
    BOOL isFirstPage;
    long long pageNumber;
}

@property long long pageNumber; // @synthesize pageNumber;
@property BOOL isFirstPage; // @synthesize isFirstPage;
- (id)description;
- (void)xmlDebugPrintElem:(id)arg1;
- (void)xmlCreatePageLayoutData:(id)arg1;
- (BOOL)hasData;
- (BOOL)isFirstElemOfPage;
- (BOOL)isFirstElemOfScore;
- (void)dealloc;
- (id)init;

@end

