//
//  MSTWidgetUtil.h
//  MSTWidget
//
//  Created by Cuong Ta on 10/3/17.
//  Copyright © 2017 Mist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MSTWidgetUtil : NSObject

+(void)updateSettings:(NSDictionary *)settings withCompletion:(void (^)(void))callback;

+(NSMutableDictionary *)currentSettings;

@end
