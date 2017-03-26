//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLgView, NSArray, NSString, NSWindow;

@interface CLgAddTrackPanelCreator : NSObject
{
    NSWindow *mWindow;
    struct CDocumentLogic *mDoc;
    BOOL mNewSong;
    short mFolderID;
    BOOL mCreateCS;
    int mNumDevs;
    int mMaxInputs;
    int mMaxOutputs;
    int mFirstOutBusIndex;
    int mFirstInBusIndex;
    int mDevice;
    int mTrackType;
    int mCount;
    int mMaxCount;
    int mFormatType;
    int mInput;
    NSArray *mCurrentInputs;
    NSString *mCurrentInputName;
    struct TAuConfType mCurrentInputType;
    int mOutput;
    NSArray *mCurrentOutputs;
    NSString *mCurrentOutputName;
    struct TAuConfType mCurrentOutputType;
    BOOL mRecordEnable;
    BOOL mInputMonitoring;
    BOOL mAscendingInputs;
    BOOL mAscendingOutputs;
    BOOL mMultiTimbral;
    CLgView *mParentView;
}

+ (id)panelCreatorWithSongDocument:(struct CDocumentLogic *)arg1 forWindow:(id)arg2 forFolderID:(short)arg3 createCSinstead:(BOOL)arg4 newSong:(BOOL)arg5;
- (id).cxx_construct;
- (void)createTrack:(BOOL)arg1;
- (id)menuItemCall_dynamicPopup:(id)arg1 forCallID:(int)arg2 buildPanelAgain:(char *)arg3;
- (void)updateMenu_dynamicPopup:(id)arg1 forCallID:(int)arg2;
- (BOOL)panelActionCall:(id)arg1;
- (id)textStringChanged:(id)arg1 forCallID:(int)arg2;
- (id)createGenericPanelData;
- (id)createGenericPanelDataPossible;
- (id)createGenericPanelDataWithAllPossible:(BOOL)arg1;
- (id)getOutputNames;
- (void)generateOutputMenu:(id)arg1;
- (id)getInputNames;
- (void)generateInputMenu:(id)arg1;
- (id)getDevicesArray;
- (int)createTracks:(int)arg1 forDevice:(int)arg2 inFolder:(int)arg3 trackType:(struct TAuConfType)arg4 format:(int)arg5 fromInput:(int)arg6;
- (void)deleteTrack:(long long)arg1 inFolder:(int)arg2;
- (short)updateAudioEngineForAdditionalTracks:(long long)arg1;
- (void)createUndo;
- (void)dealloc;
- (id)initWithSongDocument:(struct CDocumentLogic *)arg1 forWindow:(id)arg2 forFolderID:(short)arg3 createCSinstead:(BOOL)arg4 newSong:(BOOL)arg5;
- (void)setTrackTypeIndex:(int)arg1;
- (void)updateMaxCount;
- (struct TAuConfType)getTrackType;
- (int)getFormatType;

@end

