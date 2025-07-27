//
//  AWHBBAWHBBRequestModel.h
//  CarMonitoring
//
//  Created by 潘振 on 2019/9/5.
//  Copyright © 2019 潘振. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBRequestModel : NSObject
//登录
+(void)requestLandURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic))callBack;
//请求消息
+(void)requestMsgURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic,NSMutableArray *dataArray))callBack;
//修改密码
+(void)requestPwdURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSString *rspCode))callBack;
//使用帮助
+(void)requestUserHelpURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic,NSMutableArray *dataArray,NSMutableArray *dataArray2,NSMutableArray *dataArray3,NSMutableArray *dataArray4))callBack;
//登录历史
+(void)requestLoginHistoryURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic,NSMutableArray *dataArray))callBack;
//请求实时视频
+(void)requestRealTimeURL:(NSString *)URL hudView:(UIView *)hudView  callback:(void (^)(NSString *string))callBack;
//平台视频
+(void)requestPlatformVideoURL:(NSString *)URL hudView:(UIView *)hudView  callback:(void (^)(NSMutableArray *dataArray,NSString *str))callBack;
//终端视频
+(void)requestTerminalVideoURL:(NSString *)URL hudView:(UIView *)hudView  callback:(void (^)(NSMutableArray *dataArray,NSString *str))callBack;
//保存本地配置
+(void)requestSettingConfigSaveWithKey:(NSString *)key data:(NSString *)data;
//保存本地配置 单车登录
+(void)requestSettingConfigSaveWithKey:(NSString *)key carIds:(NSString *)carIds data:(NSString *)data;
//单车登录保存定位信息设置
+(void)requestSaveGpsColumnByCarWithCarIds:(NSString *)carIds data:(NSString *)data;
//更新本地配置
+ (void)updateLocationSettingConfig;
//个推ClientId同步服务端
+ (void)appGeTuiPushClientId;
/**
 *  SDWebImage  删除特定url图片的缓存
 */
+ (void)clearCacheWithUrl:(NSString *)url;
//延迟心跳接口  自动处理 在报警开关打开并且已经登录时候才能调用该接口
+ (void)requestAppDelay;
//延迟心跳接口  自动处理 在报警开关打开并且已经登录时候才能调用该接口 需要5分钟发一次
//什么也没做，只是维持session有效（app端需要每隔5分钟调用一次维持session的有效性）
+ (void)requestAppMessage;
//停止调用延迟心跳接口 一般切换后台或者退出登录时候调用
+ (void)stopAppMessage;
//FTP文件上传接口
+(void)requestVideoFTPURL:(NSString *)URL hudView:(UIView *)hudView  callback:(void (^)(NSString *state,NSString *str,NSString *errorStr))callBack;

@end

NS_ASSUME_NONNULL_END
