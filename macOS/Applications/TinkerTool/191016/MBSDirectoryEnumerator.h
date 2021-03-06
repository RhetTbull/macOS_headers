//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSString;

@interface MBSDirectoryEnumerator : NSEnumerator
{
    char _pathBuffer[1024];
    char *_relativePath;
    unsigned long long _relativePathLength;
    struct _MBSDirDescriptor _directoryStack[500];
    long long _topIndex;
    BOOL _shouldStayOnFileSystem;
    int _baseFileSystemID;
    NSString *_lastInaccessibleFolderPath;
}

+ (id)enumeratorAtPath:(id)arg1 stayOnFileSystem:(BOOL)arg2;
+ (id)enumeratorAtPath:(id)arg1;
@property(retain) NSString *lastInaccessibleFolderPath; // @synthesize lastInaccessibleFolderPath=_lastInaccessibleFolderPath;
- (void).cxx_destruct;
- (id)currentRelativePathForDirectoryEntry:(struct dirent *)arg1;
- (char *)copyCurrentAbsoluteFileSystemRepresentationForDirectoryEntry:(struct dirent *)arg1;
- (char *)copyCurrentAbsoluteFileSystemRepresentation;
- (CDStruct_84ed1706 *)popDirectory;
- (void)pushDirectoryEntry:(struct dirent *)arg1;
- (CDStruct_84ed1706 *)currentDirectoryStream;
- (BOOL)shouldStayOnFileSystem;
- (void)skipDescendents;
- (id)initForBasePath:(id)arg1 stayOnFileSystem:(BOOL)arg2;
- (id)nextObject;
- (id)allObjects;
- (void)dealloc;
- (id)init;

@end

