//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class MIDIDeviceLayer, MIDIEndpointWidget;

@interface MIDIPortLayer : CAShapeLayer
{
    BOOL selected;
    BOOL connected;
    BOOL midiReceived;
    BOOL output;
    BOOL deviceIsExternal;
    MIDIEndpointWidget *_widget;
    MIDIDeviceLayer *_owner;
}

@property MIDIDeviceLayer *owner; // @synthesize owner=_owner;
@property MIDIEndpointWidget *widget; // @synthesize widget=_widget;
- (id)connectionLayers;
- (struct CGPoint)toolTipCenterLocation;
- (id)toolTipString;
- (id)connectedDeviceLayers;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct CGPoint)location;
@property(readonly) BOOL deviceIsExternal; // @dynamic deviceIsExternal;
@property(readonly) int UID; // @dynamic UID;
@property(getter=isMidiReceived) BOOL midiReceived; // @dynamic midiReceived;
@property(getter=isConnected) BOOL connected; // @dynamic connected;
@property(getter=isSelected) BOOL selected; // @dynamic selected;
- (struct CGPath *)createOutputPath;
- (struct CGPath *)createInputPath;
- (id)initWithEndpoint:(id)arg1 name:(id)arg2;

@end

