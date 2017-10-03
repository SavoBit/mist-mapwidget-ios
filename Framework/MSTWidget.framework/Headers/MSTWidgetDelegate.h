//
//  MSTWidgetDelegate.h
//  MicelloWidgetDemo
//
//  Created by Cuong Ta on 9/21/17.
//  Copyright © 2017 Mist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@protocol MSTWidgetDelegate <NSObject>

@optional

-(void)viewController:(UIViewController *)vc didUpdateHeading:(CLHeading *)headingInformation;
-(void)viewController:(UIViewController *)vc didUpdateMap:(MSTMap *)map at:(NSDate *)dateUpdated;
-(void)viewController:(UIViewController *)vc didConnect:(BOOL)isConnected;

@end
