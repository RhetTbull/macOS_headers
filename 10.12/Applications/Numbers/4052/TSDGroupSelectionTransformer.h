//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDrawableSelectionTransformer.h"

@interface TSDGroupSelectionTransformer : TSDDrawableSelectionTransformer
{
}

- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct GroupSelectionTransformerArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct GroupSelectionTransformerArchive *)arg1 unarchiver:(id)arg2;
- (id)nextSelectionTransformerForSelection:(id)arg1;

@end

