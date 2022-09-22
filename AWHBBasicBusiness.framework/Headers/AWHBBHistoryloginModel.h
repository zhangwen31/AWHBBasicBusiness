//
//  AWHBBHistoryloginModel.h
//  CarMonitoring
//
//  Created by 潘振 on 2019/4/27.
//  Copyright © 2019 潘振. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBHistoryloginModel : NSObject
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *ip;
+ (instancetype)mj_objectWithKeyValues:(id)keyValues;
@end

NS_ASSUME_NONNULL_END
