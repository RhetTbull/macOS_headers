//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPComponentReader.h"

@class TSPDescriptionGenerator;

@interface TSPDescriptionComponentReader : TSPComponentReader
{
    TSPDescriptionGenerator *_descriptionGenerator;
}

- (void).cxx_destruct;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo *)arg2 message:(auto_ptr_4370f086 *)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(auto_ptr_945ad503)arg5 unknownContent:(id)arg6;
- (BOOL)shouldValidateComponentsOfInMemoryObjects;
- (BOOL)shouldProceedParsingOnFailure;
- (void)read;
- (id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4;
- (id)init;

@end

