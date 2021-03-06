//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSKit/TSKCommand.h>

#import "GSSPAutoEncodable-Protocol.h"

@class NSString;

@interface TNCommandSetDocumentPaperSize : TSKCommand <GSSPAutoEncodable>
{
    NSString *_paperID;
    struct CGSize _pageSize;
    NSString *_oldPaperID;
    struct CGSize _oldPageSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize oldPageSize; // @synthesize oldPageSize=_oldPageSize;
@property(copy, nonatomic) NSString *oldPaperID; // @synthesize oldPaperID=_oldPaperID;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *paperID; // @synthesize paperID=_paperID;
- (BOOL)losesSignificantUserEffortWhenShadowed;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)rollback;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)isValidForCommit;
- (BOOL)process;
- (id)actionString;
- (id)tnDocumentRoot;
-     // Error parsing type: v32@0:8r^{CommandSetDocumentPaperSize=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Size}^{CommandArchive}}16@24, name: loadFromArchive:unarchiver:
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithPaperID:(id)arg1 pageSize:(struct CGSize)arg2 context:(id)arg3;
- (id)initWithPageSize:(struct CGSize)arg1 context:(id)arg2;
- (void)populateGSSPCmdSetDocumentPaperSize:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

