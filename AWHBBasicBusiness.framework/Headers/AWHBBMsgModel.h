//
//  AWHBBMsgModel.h
//  AWHBBasicBusiness
//
//  Created by GeDaTing on 2022/2/19.
//

#import <AWHBBasicBusiness/AWHBBBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBMsgModel : AWHBBBaseModel<NSCoding>
@property(nonatomic,copy)NSString *id;
@property(nonatomic,copy)NSString *date;
@property(nonatomic,copy)NSString *title;
@property(nonatomic,copy)NSString *msg;
@property(nonatomic,copy)NSString *auser;
@property(nonatomic,copy)NSString *fileUrl;
@property(nonatomic,copy)NSString *files;
- (BOOL)isEqualModel:(AWHBBMsgModel*)object;
@end

NS_ASSUME_NONNULL_END
