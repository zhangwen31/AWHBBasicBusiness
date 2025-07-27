//
//  AWHBBBAppGpsColumnModel.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBAppGpsColumnModel : NSObject <NSMutableCopying,NSCopying>
@property(nonatomic, strong) NSString *key;
@property(nonatomic, assign) BOOL isOpen;

@end

NS_ASSUME_NONNULL_END
