//
//  AWHBBBusinessTool.h
//  AWHBBasicBusiness
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>
//#import <UMShare/UMShare.h>
#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBBSettingConfig.h>
#import <AWHBBasicBusiness/AWHBBBaseModel.h>
#import <AWHBBasicBusiness/AWHBBBSgnListModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AWHBBBusinessLoginModeType) {
    AWHBBBusinessLoginModeTypeDefult                        = 0,    // 常规模式
    AWHBBBusinessLoginModeTypeBicycleSimplicity             = 1,    // 单车简易模式
    AWHBBBusinessLoginModeTypeMultiVehicleSimplicity        = 2,    // 多车简易模式
    AWHBBBusinessLoginModeTypePurePositioning               = 3,    // 纯定位模式
    AWHBBBusinessLoginModeTypeCaring                        = 4,    // 关怀模式
};

extern NSString * const AWHBBBMonomerMonitoringRefreshDataNotification;//单车监控数据刷新通知
extern NSString *const AWHBBBVehicleCardFunctionJumpNotification; //车辆状态车辆卡片功能跳转

@interface AWHBBBusinessTool : NSObject

///** 分享三方应用  目前只支持微信
// * @param platformType 平台的类型
// * @param title 标题
// * @param desc 描述
// * @param image 缩略图（UIImage或者NSData类型，或者image_url）
// * @param url 分享链接
// * @param controller 需要分享界面  用于分享成功或者失败
// *
// */
//+ (void)shareSocialPlatformType:(UMSocialPlatformType)platformType title:(NSString *)title desc:(NSString *)desc image:(id)image url:(NSString *)url controller:(UIViewController *)controller;

//去除数组中model重复
+(NSArray *)removeModelDuplicatesFromArray:(NSMutableArray *)muArr;
//去除数组中model重复 后面的
+(NSArray *)removeModelDuplicatesLastFromArray:(NSMutableArray *)muArr;
//使用nsUserDefaults存储对象
+ (void)saveObject:(id)obj withKey:(NSString *)key;

//使用nsUserDefaults存储对象 平台管理存储 自动识别有没有ip与port相同，如果有，自动删除掉 返回最终保存的数据
+ (NSMutableArray *)saveAddServerModelArr:(NSMutableArray<AWHBBBaseModel *> *)obj withKey:(NSString *)key;
/**
 * 0: 高德地图
 * 1：谷歌地图
 */
+ (NSInteger)getCurrentShowMap;
//设置配置信息
+ (void)setSettingConfig:(AWHBBBSettingConfig *)settingConfig;
//获取配置信息
+ (AWHBBBSettingConfig *)getSettingConfig;
//设置808部标位置附加状态位字段
+ (void)setSgnList:(NSArray<AWHBBBSgnListModel *> *)list;
//检查808部标位置附加状态位字段 排序与选中状态 一般登录的时候调用接口使用
+ (void)checkSgnListSequenceOrSelect;
//获取808部标位置附加状态位字段
+ (NSArray<AWHBBBSgnListModel *> *)getSgnList;
//设置 选中的808部标位置附加状态位字段
+ (void)setSelectSgnList:(NSArray<AWHBBBSgnListModel *> *)list;
//获取 选中的808部标位置附加状态位字段
+ (NSArray<AWHBBBSgnListModel *> *)getSelectSgnList;
/// APP监控模式："0":常规模式、"1":单车简易模式、"2":多车简易模式、"3":纯定位模式
+ (AWHBBBusinessLoginModeType)getLoginModeType;
/**
 * 获取定位信息设置对应的名称
 */
+ (NSString *)getAppGpsColumnName:(NSString *)key;
//更新本地配置
+ (void)updateLocationSettingConfig;
//根据菜单ID获取菜单名称
+ (NSString *)getNameWithMenuId:(NSString *)menuId;
//存储视频服务器群
+ (void)saveVideoHosts:(NSArray *)videoHosts;
//存储视频服务器
+ (void)saveVideoHost:(NSString *)videoHost;
/// 获取对应视频服务器 视频服务器集群（多个视频地址时  video_urls=[地址1，地址2，……]，比如有N个，使用哪一个呢，根据车辆ID来，video_urls[车辆ID(数字)%N]）
/// @param carId 车辆ID
+ (NSString *)getVideoHost:(NSString *)carId;
// 检验存储视频服务器 是否能ping通
+ (void)checkVideoHost:(NSString *)videoHost;
// 检验存储视频服务器 是否能ping通 验证完成回调
+ (void)checkVideoHost:(NSString *)videoHost complete:(void (^)(BOOL isSuccess))success;
// 获取存储视频服务器 ping失败次数
+ (NSInteger)getPingVideoHostFail:(NSString *)videoHost;
/// 是否检验端口
+ (BOOL)isCheckVideoHost:(NSString *)videoHost;
/// 检查ping端口是否通记录
+ (BOOL)checkPingVideoHost:(NSString *)videoHost;
/// 清除检查端口记录
+ (void)clearCheckVideoHostsRecords;

+ (void)asynCheckIp:(NSString *)ip port:(NSString *)port complete:(nullable void (^)(BOOL isSuccess))success;

@end

NS_ASSUME_NONNULL_END
