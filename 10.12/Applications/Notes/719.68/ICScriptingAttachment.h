//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICScriptingObject.h"

@class ICAttachment, NFAttachment;

@interface ICScriptingAttachment : ICScriptingObject
{
    ICAttachment *_attachment;
    NFAttachment *_legacyAttachment;
}

@property(retain) NFAttachment *legacyAttachment; // @synthesize legacyAttachment=_legacyAttachment;
@property(retain) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (id)representedObject;
- (id)initWithLegacyAttachment:(id)arg1;
- (id)initWithAttachment:(id)arg1;

@end

