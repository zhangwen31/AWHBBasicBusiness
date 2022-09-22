//
//  AWHBBBSettingConfig.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>
#import <AWHBBasicBusiness/AWHBBBAppGpsColumnModel.h>
#import <AWHBBasicBusiness/AWHBBBMapMarkerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBSettingConfig : NSObject
/**
 * 地图信息框设置 功能控制开发
 * 保存的值JSON结构如下[{“drctCn”:”1”},{“accTime”:”0”}….],1表示勾选显示，0表示不勾选隐藏
 * drctCn： 行驶方向
 * accTime：ACC状态
 * teamName：所属车队
 * driverStatic：驾驶员(静态)
 * driverSign：驾驶员(登签)
 * alarms：当前告警
 * addr：地理位置
 * st1：油量信息
 * st2：载重信息
 * st3：温度信息
 * st4：湿度信息
 * st5：水位信息
 * carName：车辆名称
 * satl：定位信号
 * sgn：通讯信号
 */
@property(nonatomic, strong) NSArray<AWHBBBAppGpsColumnModel *> *appGpsColumn;
/**
 * 过滤无报警类型开关
 */
@property(nonatomic, assign) BOOL alarmFilter;
/**
 * 报警通知开关
 */
@property(nonatomic, assign) BOOL alarms;
/**
 * 欠费通知开关
 */
@property(nonatomic, assign) BOOL arrears;
/**
 *
 */
@property(nonatomic, strong) NSString *backCarColor;
/**
 *
 */
@property(nonatomic, strong) NSString *backSpeedColor;
/**
 *
 */
@property(nonatomic, strong) NSString *firstPage;
/**
 * 设置的key，例如：homeset（快捷首页） ——————-快捷首页菜单设置（权限内图7中获取）
 */
@property(nonatomic, strong) NSString *homeSet;
/**
 * [key1,key2,key3…] ——————-0-8个快捷收藏菜单项（权限内图7中获取）
 */
@property(nonatomic, strong) NSArray *quickSet;
/**
 *  ——————-地图图标设置（样式、字体、图标、色彩）状态
 */
@property(nonatomic, strong) AWHBBBMapMarkerModel *mapMarker;

@end

NS_ASSUME_NONNULL_END
