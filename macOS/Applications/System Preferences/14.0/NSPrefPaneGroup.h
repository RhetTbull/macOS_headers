//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NSPrefPaneGroup : NSObject
{
    NSString *_identifier;
    NSString *_localizedName;
    NSMutableArray *_prefPanes;
}

- (void).cxx_destruct;
- (id)description;
- (id)prefPanes;
- (id)localizedName;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;

@end

