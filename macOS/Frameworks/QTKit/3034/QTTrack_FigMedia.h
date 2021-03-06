//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTTrackHelper.h>

@class QTMovie;

__attribute__((visibility("hidden")))
@interface QTTrack_FigMedia : QTTrackHelper
{
    int _trackID;
    QTMovie *_qtMovie;
    struct OpaqueFigTrackReader *_trackReader;
}

- (BOOL)setMetadata:(id)arg1 forFormat:(id)arg2;
- (BOOL)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id *)arg3;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (CDStruct_900afa40)keyframeStartTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)frameEndTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)frameStartTime:(CDStruct_900afa40)arg1;
- (void)setCanDRMInteractWithUser:(BOOL)arg1;
- (BOOL)canDRMInteractWithUser;
- (BOOL)isDRMAuthorized;
- (BOOL)isDRMProtected;
- (float)streamingBufferDuration;
- (float)streamingPercentLost;
- (long long)streamingBitsPerSecond;
- (void)setApertureModeDimensions:(struct CGSize)arg1 forMode:(id)arg2;
- (BOOL)hasApertureModeDimensions;
- (struct CGSize)apertureModeDimensionsForMode:(id)arg1;
- (void)setTreble:(float)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setGain:(float)arg1;
- (void)setBass:(float)arg1;
- (void)setBalance:(float)arg1;
- (float)treble;
- (BOOL)muted;
- (float)gain;
- (float)bass;
- (float)balance;
- (id)_stringForProperty:(struct __CFString *)arg1;
- (long long)_longLongForProperty:(struct __CFString *)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString *)arg1;
- (int)_SInt32ForProperty:(struct __CFString *)arg1;
- (CDStruct_900afa40)_QTTimeForProperty:(struct __CFString *)arg1;
- (float)_floatForProperty:(struct __CFString *)arg1;
- (id)trackPropertyFromAlternateTrackGroup:(id)arg1;
- (id)stringValueFromFigFormatDescriptionExtension:(struct __CFString *)arg1;
- (int)numericValueFromFigFormatDescriptionExtension:(struct __CFString *)arg1;
- (id)depthString;
- (BOOL)hasMPEGCharacteristics;
- (void)setTrackID:(int)arg1;
- (int)trackID;
- (id)extendedLanguageTagString;
- (id)dataFormat;
- (struct SoundDescriptionV2 **)getSoundDescriptionV2Handle:(long long)arg1;
- (struct SoundDescriptionV2 **)getSoundDescriptionV2Handle;
- (struct SampleDescription **)getSampleDescriptionHandle:(long long)arg1;
- (struct SampleDescription **)getSampleDescriptionHandle;
- (int)index;
- (BOOL)isAudioVariableRate;
- (BOOL)isTimeCodeDropFrame;
- (BOOL)isTimeCode;
- (id)timeCodeTrack;
- (id)timeCodeStringForTime:(CDStruct_900afa40)arg1;
- (id)metaDataDisplayName;
- (BOOL)isExcludedFromAutoSelection;
- (id)isoLanguageCodeAsString;
- (long long)isoLanguageCode;
- (id)subtitlesLanguageString;
- (id)userDataAnnotations;
- (id)sampleRateString;
- (id)sampleSizeString;
- (id)channels;
- (id)format;
- (id)audioFormatString;
- (id)videoFormatString;
- (id)formatSummary;
- (id)referenceByType:(unsigned int)arg1 index:(long long)arg2;
- (id)alternate;
- (id)chapterlist;
- (BOOL)singleFieldVideo;
- (BOOL)deinterlaceVideo;
- (BOOL)highQualityVideo;
- (id)annotations;
- (struct CGAffineTransform)affineTransform;
- (struct MatrixRecord)matrix;
- (long long)language;
- (int)dataRate;
- (unsigned long long)dataSize;
- (struct CGSize)naturalSize;
- (struct CGSize)currentSize;
- (id)href;
- (BOOL)hasAudio;
- (BOOL)isVisual;
- (long long)timeScale;
- (CDStruct_977f9211)range;
- (id)modificationTime;
- (id)mediaSubType;
- (id)mediaTypeInMedia;
- (id)mediaType;
- (unsigned int)figMediaSubType;
- (unsigned int)figMediaType;
- (int)audioSampleSize;
- (float)audioSampleRate;
- (int)audioChannelCount;
- (struct AudioStreamBasicDescription *)audioStreamBasicDescription;
- (struct AudioChannelLayout *)audioChannelLayout;
- (id)mediaName;
- (int)depth;
- (id)codecName;
- (id)displayNameShort;
- (id)displayName;
- (id)fullName;
- (float)floatFrameRate;
- (long long)frameRate;
- (struct CGSize)dimensions;
- (id)creationTime;
- (struct CGRect)scaledBounds;
- (struct CGRect)bounds;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (struct opaqueCMFormatDescription *)figFormatDescription;
- (BOOL)usesQuickTime;
- (BOOL)usesFigMedia;
- (id)mediaRetained;
- (id)media;
- (id)movie;
- (void)setQTMovie:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithTrackID:(int)arg1 error:(id *)arg2 forParent:(id)arg3 andMovie:(id)arg4;

@end

