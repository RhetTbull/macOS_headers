//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURL_TSACollaborationAdditions)
+ (id)tsa_collaborationDocumentFilename;
+ (id)tsa_pathComponentForCacheURLType:(unsigned long long)arg1;
+ (id)tsa_collaborationDocumentDirectoryURL;
- (id)tsa_urlOfType:(unsigned long long)arg1 fromType:(unsigned long long)arg2;
- (id)tsa_collaborationDocumentCacheURLFromCacheFolderURL;
- (id)tsa_collaborationSupportBundleURLFromDocumentCacheURL;
- (BOOL)tsa_isInCollaborationCache;
@end

