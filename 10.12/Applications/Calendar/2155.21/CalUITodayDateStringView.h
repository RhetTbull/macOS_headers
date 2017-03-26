//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/CalUILayerBackedView.h>

@class CalUIAXTextField, NSLayoutConstraint;

@interface CalUITodayDateStringView : CalUILayerBackedView
{
    CalUIAXTextField *_beforeDayNumberField;
    CalUILayerBackedView *_dayNumberCircleView;
    CalUIAXTextField *_afterDayNumberField;
    NSLayoutConstraint *_dayNumberCircleViewSizeConstraint;
}

@property(retain) NSLayoutConstraint *dayNumberCircleViewSizeConstraint; // @synthesize dayNumberCircleViewSizeConstraint=_dayNumberCircleViewSizeConstraint;
@property(retain) CalUIAXTextField *afterDayNumberField; // @synthesize afterDayNumberField=_afterDayNumberField;
@property(retain) CalUILayerBackedView *dayNumberCircleView; // @synthesize dayNumberCircleView=_dayNumberCircleView;
@property(retain) CalUIAXTextField *beforeDayNumberField; // @synthesize beforeDayNumberField=_beforeDayNumberField;
- (void).cxx_destruct;
- (id)uncircledDateText;
- (void)updateWithAttributedDateString:(id)arg1 rangeOfDay:(struct _NSRange)arg2 backgroundColor:(id)arg3;
- (id)init;

@end

