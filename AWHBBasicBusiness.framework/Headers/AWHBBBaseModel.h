//
//  AWHBBBaseModel.h
//  AWHBBasicBusiness
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBaseModel : NSObject
+ (id)modelWithDictionary:(NSDictionary *)dic; /** 这是公用的过滤接口数据的方法 */
@end

NS_ASSUME_NONNULL_END
