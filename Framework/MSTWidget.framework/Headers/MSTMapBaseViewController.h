//
//  MSTMapBaseViewController.h
//  MSTWidget
//
//  Created by Cuong Ta on 9/22/17.
//  Copyright © 2017 Mist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MistSDK/MistSDK.h>
#import <MessageUI/MessageUI.h>
#import "MSTWidgetDelegate.h"

typedef NS_OPTIONS(NSUInteger, MSTDotConfiguration) {
    MSTDotConfigurationBluedot = 0,
    MSTDotConfigurationSTPdot = 1 << 0
};

@interface MSTMapBaseViewController : UIViewController

-(void)startEnv;

-(void)didConnect:(BOOL)isConnected;

-(void)didUpdateMap:(MSTMap *)map at:(NSDate *)dateUpdated;

-(void)didUpdateRelativeLocation:(MSTPoint *)cloudPoint inMaps:(NSArray *)maps at:(NSDate *)dateUpdated;

-(void)didUpdateHeading:(CLHeading *)headingInfo;

-(void)didReceivedVirtualBeacons:(NSArray *)virtualBeacons;

@end


@protocol WebViewControllerDelegate <NSObject>

- (void) didClickCloseBtn;

@end
