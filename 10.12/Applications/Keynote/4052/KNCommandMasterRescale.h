//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class KNMasterSlide;

@interface KNCommandMasterRescale : TSKCommand
{
    KNMasterSlide *mMaster;
    struct CGAffineTransform mTransform;
}

@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=mTransform;
@property(readonly, nonatomic) KNMasterSlide *master; // @synthesize master=mMaster;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (void)dealloc;
- (id)initWithMaster:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end

