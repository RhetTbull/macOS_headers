//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HomeDataProviding-Protocol.h"
#import "ShortcutManagerObserver-Protocol.h"

@class GEOObserverHashTable, MapsSuggestionsMeCard, NSString, ShortcutManager;

__attribute__((visibility("hidden")))
@interface MeCardDataProvider : NSObject <ShortcutManagerObserver, HomeDataProviding>
{
    GEOObserverHashTable *_observers;
    ShortcutManager *_shortcutManager;
    BOOL _active;
    BOOL _hasInitialData;
    MapsSuggestionsMeCard *_meCard;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MapsSuggestionsMeCard *meCard; // @synthesize meCard=_meCard;
@property(readonly, nonatomic) BOOL hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) BOOL active; // @synthesize active=_active;
- (void)shortcutManagerMeCardDidChange:(id)arg1;
- (void)_updateMeCardAndNotifyObservers:(BOOL)arg1;
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

