//
//  AWHBBBSgnListModel.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2024/9/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBSgnListModel : NSObject

/**
 * 创建时间
 */
@property(nonatomic, strong) NSString *atime;
/**
 * 创建用户
 */
@property(nonatomic, strong) NSString *auser;
/**
 * 公司ID
 */
@property(nonatomic, strong) NSString *cmdId;
/**
 * 数值类型
 */
@property(nonatomic, strong) NSString *dataType;
/**
 * 系数
 */
@property(nonatomic, strong) NSString *factor;
/**
 * 信号ID
 */
@property(nonatomic, strong) NSString *id;
/**
 * 结果显示
 */
@property(nonatomic, strong) NSString *kvs;
/**
 * 结果显示
 */
@property(nonatomic, strong) NSDictionary *kvsDict;
/**
 * BIT长度
 */
@property(nonatomic, strong) NSString *length;
/**
 * 最大值
 */
@property(nonatomic, strong) NSString *maximum;
/**
 * 最小值
 */
@property(nonatomic, strong) NSString *minumum;
/**
 * 信号名称
 */
@property(nonatomic, strong) NSString *name;
/**
 * 偏移
 */
@property(nonatomic, strong) NSString *offset;
/**
 *
 */
@property(nonatomic, strong) NSString *seq;
/**
 * 信号类型（0:单信号 1:单信号组 2:多信号组 3:组合信号）
 */
@property(nonatomic, strong) NSString *sgnType;
/**
 * BIT开始
 */
@property(nonatomic, strong) NSString *start;
/**
 * 类型（默认gps）
 */
@property(nonatomic, strong) NSString *type;
/**
 * 单位
 */
@property(nonatomic, strong) NSString *unit;
/**
 * 异常值
 */
@property(nonatomic, strong) NSString *verror;
/**
 * 无效值
 */
@property(nonatomic, strong) NSString *vinvalid;
/**
 * 是否选中
 */
@property(nonatomic, assign) BOOL isOpen;

@end

NS_ASSUME_NONNULL_END
