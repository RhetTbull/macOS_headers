//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class ACUIAccountTypesViewController;

@interface ACUIAccountTypesCellView : NSTableCellView
{
    BOOL _isLastRow;
    BOOL _isHovered;
    ACUIAccountTypesViewController *_accountTypesVC;
}

- (void).cxx_destruct;
@property __weak ACUIAccountTypesViewController *accountTypesVC; // @synthesize accountTypesVC=_accountTypesVC;
@property BOOL isHovered; // @synthesize isHovered=_isHovered;
@property BOOL isLastRow; // @synthesize isLastRow=_isLastRow;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)click:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

