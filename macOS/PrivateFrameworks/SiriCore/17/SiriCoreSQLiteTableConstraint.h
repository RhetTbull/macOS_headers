//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying>
{
    NSString *_name;
    long long _type;
    NSArray *_columnNames;
}

+ (id)uniqueTableConstraintWithName:(id)arg1 columnNames:(id)arg2;
+ (id)primaryKeyTableConstraintWithName:(id)arg1 columnNames:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 columnNames:(id)arg3;

@end

