//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MANPDTemplateBrowserItem, NSString;

@protocol MANPDTemplateBrowserItemDataSource <NSObject>
- (NSString *)imageUIDOfBrowserItem:(MANPDTemplateBrowserItem *)arg1;
- (id)imageRepresentationOfBrowserItem:(MANPDTemplateBrowserItem *)arg1;
- (NSString *)representationTypeOfBrowserItem:(MANPDTemplateBrowserItem *)arg1;
- (NSString *)subTitleOfBrowserItem:(MANPDTemplateBrowserItem *)arg1;
- (NSString *)titleOfBrowserItem:(MANPDTemplateBrowserItem *)arg1;
- (BOOL)isSelectableBrowserItem:(MANPDTemplateBrowserItem *)arg1;
@end

