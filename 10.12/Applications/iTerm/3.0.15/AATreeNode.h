//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface AATreeNode : NSObject <NSCopying>
{
    BOOL _deleted;
    int level;
    AATreeNode *left;
    AATreeNode *right;
    id data;
    id key;
}

@property BOOL deleted; // @synthesize deleted=_deleted;
@property(retain) id key; // @synthesize key;
@property(retain) id data; // @synthesize data;
@property int level; // @synthesize level;
@property(retain) AATreeNode *right; // @synthesize right;
@property(retain) AATreeNode *left; // @synthesize left;
- (void)dealloc;
- (void)printWithIndent:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addKeyToArray:(id)arg1;
- (id)description;
- (id)spaces:(int)arg1;
- (id)initWithData:(id)arg1 boundToKey:(id)arg2;

@end

