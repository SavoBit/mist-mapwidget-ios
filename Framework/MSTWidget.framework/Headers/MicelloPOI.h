//
//  EntPOI.h
//  Copyright © 2016 Entappia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MicelloPOI : NSObject

@property(nonatomic,strong) NSArray  *coordinates;
@property(nonatomic,strong) NSString *display_name;
@property(nonatomic,strong) NSString *int_address;
@property(nonatomic,strong) NSString *levelId;
@property(nonatomic,strong) NSString *facility;
@property(nonatomic,strong) NSString *service;
@property(nonatomic,assign) BOOL isBeacon;
@property(nonatomic,assign) int entId;


- (id)initWithResponseObject:(NSDictionary*)articlDictionary;
@end
