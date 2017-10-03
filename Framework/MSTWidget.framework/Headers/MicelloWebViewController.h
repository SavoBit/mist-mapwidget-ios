//
//  WebViewController.h
//  Mist
//  Copyright © 2016 Mist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "MSTMapBaseViewController.h"

@protocol WebViewControllerDelegate;

@interface MicelloWebViewController : MSTMapBaseViewController <UIWebViewDelegate,UISearchBarDelegate,MFMailComposeViewControllerDelegate> {
    __weak IBOutlet UIView *hoverView;
    __weak IBOutlet UISearchBar *searchBar;
    __weak IBOutlet NSLayoutConstraint *webviewTopConstraint;
    __weak IBOutlet UIView *levelView;
    __weak IBOutlet UIButton *flrBtn1;
    __weak IBOutlet UIButton *flrBtn3;
    __weak IBOutlet UIButton *flrBrn5;
    __weak IBOutlet UIView *levelBorderView;
}

@property (nonatomic,strong) NSString *urlString;
@property (nonatomic,assign) BOOL  isMicellorMap;
@property (nonatomic,assign) BOOL  isMicellorLeafletMap;
@property (nonatomic,strong) NSArray *micelloCalculationArray;
@property (nonatomic,strong) NSDictionary *latLongWayFindingJson;
@property (nonatomic,strong) NSMutableDictionary *micelloInfoDict;
@property (nonatomic,strong) NSDictionary *vbDictionary;
@property (nonatomic,weak)  id <WebViewControllerDelegate> delegate;
@property (nonatomic, copy) NSMutableDictionary *virtualBeacons;
@property (nonatomic, assign) MSTDotConfiguration dotConfiguration;
@property (nonatomic, weak) id <MSTWidgetDelegate> widgetDelegate;

- (IBAction)nearVbleAction:(id)sender;

+ (MicelloWebViewController *)getNewInstance;

@end
