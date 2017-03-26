//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXMondrianViewMediaSection.h"

@class NSAttributedString, NSString;

@interface IPXMondrianViewRKVersionMediaSection : IPXMondrianViewMediaSection
{
    BOOL _inEditMode;
    NSAttributedString *_attributedTitle;
    NSString *_disclosureTitle;
}

@property(copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void).cxx_destruct;
- (void)exitEditMode;
- (void)enterEditMode;
- (BOOL)inEditMode;
- (BOOL)item:(id)arg1 isEquivalentToItem:(id)arg2;
- (id)itemForMediaItem:(id)arg1;
- (void)updateMediaItem:(id)arg1 withItem:(id)arg2;
- (id)newMediaItemForItem:(id)arg1;
- (id)uuidForItem:(id)arg1;

@end

