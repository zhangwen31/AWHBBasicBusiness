//
//  AWHBBBSettingConfig.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>
#import <AWHBBasicBusiness/AWHBBBAppGpsColumnModel.h>
#import <AWHBBasicBusiness/AWHBBBMapMarkerModel.h>

#define AWHBBBSettingMapRefreshTimeNotification     @"AWHBBBSettingMapRefreshTimeNotification"

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
 * satl：定位信号  默认展示，不列表展示
 * sgn：通讯信号  默认展示，不列表展示
 * appDoor1 前门
 * appDoor2 中门
 * appDoor3 后门
 * appDoor4 驾驶席门
 * appDoor5 门5
 * elect: 电量
 * fwdRevState: 正反转状态
 * fwdRevSpeed: 正反转速度
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
 * 车辆固定地图中心
 */
@property(nonatomic, assign) BOOL fixCenter;
/**
 * 【系统设置--欠费通知开关】页面，增加权限控制
 */
@property(nonatomic, assign) BOOL arrearsAuth;
/**
 * 地图刷新时间
 */
@property(nonatomic, strong) NSString *mapRefreshTime;
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
/**
 * 登录模式 APP监控模式："0":常规模式、"1":单车简易模式、"2":多车简易模式、"3":纯定位模式
 * 单车简易模式：删除底部的报表，左侧功能列表增加“消息公告”
 * 多车简易模式：左侧功能列表增加“消息公告”
 * 纯定位模式：极简功能删除跳转单车监控，左侧功能列表增加“消息公告”
 */
@property(nonatomic, strong) NSString *mode;

/**
 * 车辆固定地图中心
 */
- (BOOL)getCarFixedMapCenter;

- (void)setCarFixedMapCenter:(BOOL)mapCenter;

@end

NS_ASSUME_NONNULL_END
