//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IPXImportSource, IPXSharedStream, RDAlbum, RDFolder, RDModel;

@protocol IPXSidebarModelChange

@optional
- (void)metadataDidChangeForImportSource:(IPXImportSource *)arg1;
- (void)metadataDidChangeForProject:(RDAlbum *)arg1;
- (void)metadataDidChangeForSharedStream:(IPXSharedStream *)arg1;
- (void)metadataDidChangeForAlbumOrFolder:(RDModel *)arg1;
- (void)contentsDidChangeForDevicesSection;
- (void)contentsDidChangeForProjectsSection;
- (void)contentsDidChangeForSharedStreams;
- (void)contentsDidChangeForSharedActivity;
- (void)contentsDidChangeForSharedSection;
- (void)contentsDidChangeForArrangedSectionIdentifiers;
- (void)contentsDidChangeForMagicAlbums;
- (void)contentsDidChangeForFolder:(RDFolder *)arg1;
@end

