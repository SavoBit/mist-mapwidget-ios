//
//  Default.h
//  Mist
//
//  Created by Cuong Ta on 7/8/15.
//  Copyright (c) 2015 Mist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import <Crashlytics/Crashlytics.h>
#import "Logger.h"

#define kDeviceID                     @"device-id"

#define kRange                        @"range"
#define kMonitor                      @"monitor"
#define kLocation                     @"location"

#define kShowGoogleBlueDot            @"show-google-blue-dot"
#define kEnableSmoothing              @"enable-smoothing"
#define kBreadcrumbCount              @"breadcrumb-count"
#define kEnvironmentName              @"environment-name"

#define kEnableOutdoor                @"enable-outdoor"
#define kEnableNotification           @"enable-notification"

#define kIAm                          @"who-am-i"

#define kShowWayfindingVertex         @"show-wayfinding-vertex"
#define kShowWayfindingLabel          @"show-wayfinding-label"
#define kShowWayfindingSkeleton       @"show-wayfinding-skeleton"
#define kShowWayfindingEnable         @"show-wayfinding-enable"
#define kShowWayfindingSnapToPath     @"show-wayfinding-snap-to-path"
#define kWayfindingFloorplanName      @"show-wayfinding-floorplan-name"
#define kWayfindingOrientMapOnHeading @"wayfinding-orient-map-on-heading"

#define kDebugMode                    @"bob"

#define kShowVBWebMessage             @"show-vb-web-message"
#define kShowDebuggerConsole          @"show-debugger-console"
#define kEnableUDP                    @"enable-udp"
#define kEnableDR                     @"enable-dr"
#define kEnableRemoteLogging          @"enable-remote-logging"
#define kEnableVoiceover              @"enable-voice-over"
#define kEnableVirtualAP              @"Enable Virtual AP"

#define kIsMicello                    @"isMicello"
#define kMicelloAccountKey            @"account_key"
#define kMicelloMapId                 @"map_id"
#define kMicelloDefaultLevelId        @"default_level_id"
#define kShowMicelloSnapToPath        @"show-micello-snaptopath"
#define kShowNotificationMessages     @"show-noti-messages"
#define kShowNavPan                   @"show-nav-pan"



#define RGBCOLOR(r,g,b) [UIColor colorWithRed: (r)/255.0 green: (g)/255.0 blue: (b)/255.0 alpha : 1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed: (r)/255.0 green: (g)/255.0 blue: (b)/255.0 \
alpha: (a)]

#define HSVCOLOR(h,s,v) [UIColor colorWithHue: (h) saturation: (s) value: (v) alpha : 1]
#define HSVACOLOR(h,s,v,a) [UIColor colorWithHue: (h) saturation: (s) value: (v) alpha: (a)]

#define RGBA(r,g,b,a) (r)/255.0, (g)/255.0, (b)/255.0, (a)

#define MistBlueColor [UIColor colorWithRed:29.0 / 255.0 green:135.0 / 255.0 blue:202.0 / 255.0 alpha:1.0]

static NSString *kDefaultIam = @"Unknown";

static NSString *kSectionNameAbout = @"About";
static NSString *kSectionNameBreadcrumb = @"Breadcrumb";
static NSString *kSectionNameEnvironment = @"Environment";
static NSString *kSectionNameUI = @"UI";
static NSString *kSectionNameFeature = @"Feature";
static NSString *kSectionNameWayfinder = @"Wayfinder";
static NSString *kSectionNameDebugger = @"Debugger";
static NSString *kSectionNameMicellodebugging = @"UI";

static NSString *kVersion = @"Version";
static NSString *kUUID = @"UUID";
static NSString *kModel = @"Model";
static NSString *kClientIdentity = @"Client Name";
static NSString *kCalibrate = @"Calibrate Device Compass";
static NSString *kSectionNameMotionSetting = @"Motion";

static NSString *kShowXY = @"Show X, Y";
static NSString *kShowBlueDot = @"Show Blue Dot";
static NSString *kMoveOnMotion = @"Move On Motion";
static NSString *kEnableLockscreenNotification = @"Lock screen notification";
static NSString *kMotionSetting = @"motion_settings";

static NSString *kEnableWayfinding = @"Enable Wayfinding";
static NSString *kSnapToPath = @"Snap To Path";
static NSString *kShowPath = @"Show Paths";
static NSString *kSmartOrientation = @"Smart Orientation";
static NSString *kRestrictDistance = @"Restrict Distance";

static NSString *kEnableConsole = @"Enable Console";
static NSString *kSmoothing = @"Smoothing";
static NSString *kShowHistoricBeams = @"Show Historic Beams";
static NSString *kShowPLF = @"Show PLF/Int/SPS";
static NSString *kShowPacketInInterval = @"Show Packet-In Interval";
static NSString *kReportLocation = @"Report Location";
static NSString *kEnableTransmitTestBeacon = @"Transmit Test Beacon";
static NSString *kEnableTransmitAppModifiedBluedot = @"Transmit App-modified Dot";
static NSString *kSetPFParams = @"Set PF Params";
static NSString *kShowPurpleDot = @"Show Purple Dot";

static NSString *kEnableNotificationDebugging = @"XY Debugging";
static NSString *kEnableNavigationPan = @"Navigation Pan";
static NSString *kUsedMemory = @"Used Memory";
static NSString *kFreeMemory = @"Free Memory";
static NSString *kCpuMemory = @"Cpu Usage";

static NSMutableDictionary *localSettings;

// tag 10
typedef NS_ENUM (NSInteger, kMotionTag){
    kMotionTagBasic = 10,
    kMotionTagDevice = 11,
    kMotionTagSticky = 12,
    kMotionTagDeviceSimple = 13,
    kMotionTagSendMotionFlagToLE = 14,
};

@interface Default : NSObject

+(void)updateSettings:(NSDictionary *)settings withCompletion:(void (^)(void))callback;

// FIX ME: This actually returns an immutable NSUserDefault, not a NSMutableDictionary
+(NSMutableDictionary *)currentSettings;
+(void)appDefault;
+(NSString *)defaultFontName;
+(NSString *)newDefaultFontName;
+(UIColor *)defaultColor;
+(UIColor*)defaultSystemTintColor;

+(CGFloat)degreesToRadians:(CGFloat)degrees;
+(CGFloat)radiansToDegrees:(CGFloat)radians;

// Returns the OS version in float. e.g 9.0.1 = 9.0
+(float)OSVersion;

// Use this if you want to update the UI on the mainthread
+(void)performBlockOnMainThread:(void (^)(void))callback;

#pragma mark - new UI Specs

+(UIColor *)newBackgroundColor;
+(UIColor *)cellTextColor;
+(CAGradientLayer*) showFloorBackground;
+(UIColor *)newBlueBackgroundColor;
+(NSString *)newFont;

+(NSString*)getStringFromBeacons:(NSString*)beaconString;

+(NSString *)getUUIDString;
+(bool)useCustomTheme;
+(bool)isEmptyString:(NSString *)str;
+ (BOOL)isValidObject:(id)object;
+ (UIImage *)maskWithColor:(UIColor *)color wihtImage:(UIImage*)image;
+(BOOL)runningInForeground;

@end
