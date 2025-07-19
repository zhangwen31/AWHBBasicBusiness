//
//  AWHBBCarModel.h
//  CarMonitoring
//
//  Created by GeDaTing on 2022/2/26.
//  Copyright © 2022 潘振. All rights reserved.
//

#import <AWHBBasicBusiness/AWHBBasicBusiness.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBCarModel : AWHBBBaseModel
@property(nonatomic,copy)NSString *glng;//google经度
@property(nonatomic,copy)NSString *glat;//google纬度
@property(nonatomic,copy)NSString *lat;
@property(nonatomic,copy)NSString *lng;
@property(nonatomic,copy)NSString *drvPhone;
@property(nonatomic,copy)NSString *addr;
//驾驶员（登签）
@property(nonatomic,copy)NSString *drvSign;
//车对名称
@property(nonatomic,copy)NSString *teamName;
//车辆名称
@property(nonatomic,copy)NSString *carName;
@property(nonatomic,copy)NSString *simCard;
//SIM
@property(nonatomic,copy)NSString *sim;
//车队ID
@property(nonatomic,copy)NSString *teamId;
@property(nonatomic,copy)NSString *tmnNo;
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *drvName;
@property(nonatomic,copy)NSString *driverSign;
@property(nonatomic,copy)NSString *alarms;
@property(nonatomic,copy)NSString *sgn;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *preMile;
//车牌号码
@property(nonatomic,copy)NSString *carPlate;
//车牌颜色
@property(nonatomic,copy)NSString *plateColor;
//车牌颜色代码
@property(nonatomic,copy)NSString *plateColorCode;
@property(nonatomic,copy)NSString *carType;
@property(nonatomic,copy)NSString *bigIcon;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *stateCn;
@property(nonatomic,copy)NSString *runStopTime;
@property(nonatomic,copy)NSString *runStopTimeSecond;
@property(nonatomic,copy)NSString *accTime;
@property(nonatomic,copy)NSString *satl;
@property(nonatomic,copy)NSString *icon;
//state 车辆离线:0,1,2,3,4   欠费:2,6  报警:4,8,11,12  无定位:13 行驶:7,8  停车:9,10,11,12 从未上报：5
@property(nonatomic,copy)NSString *state;
@property(nonatomic,copy)NSString *drctCn;
@property(nonatomic,copy)NSString *drct;
//图标链接
@property(nonatomic,copy)NSString *iconLink;
//视频通道
@property(nonatomic,copy)NSString *videos;
@property(nonatomic,copy)NSString *expTime;
@property(nonatomic,copy)NSString *acc;
@property(nonatomic,assign)BOOL accOn;
@property(nonatomic,assign)NSInteger curAcc;
@property(nonatomic,copy)NSString *bigIconLink;
@property(nonatomic,copy)NSString *moni1;
@property(nonatomic,copy)NSString *moni2;
//油量  返回集合，每个记录包含name和value属性
@property(nonatomic,strong)NSArray *st1;
//载重  返回集合，每个记录包含name和value属性
@property(nonatomic,strong)NSArray *st2;
//温度  返回集合，每个记录包含name和value属性
@property(nonatomic,strong)NSArray *st3;
//湿度  返回集合，每个记录包含name和value属性
@property(nonatomic,strong)NSArray *st4;
//水位  返回集合，每个记录包含name和value属性
@property(nonatomic,strong)NSArray *st5;
@property(nonatomic,copy)NSString *tmnType;
@property(nonatomic,copy)NSString *tmnExpirTime;
@property(nonatomic,copy)NSString *tmnKey;
@property(nonatomic,copy)NSString *videoWayStr;
@property(nonatomic,strong)NSArray *sgnStts;
@property(nonatomic,strong)NSArray *reminds;
@property(nonatomic,strong)NSArray *videoAlarmTypes;
@property(nonatomic,assign)BOOL uploadFlag;
@property (nonatomic,assign) BOOL isSelected;
//是否展示大头针 车辆设备需要
@property (nonatomic,assign) BOOL isShowPin;
@property(nonatomic,strong)NSString *wxShareUrl;
//车主名称
@property(nonatomic,strong)NSString *owner;
//车主电话
@property(nonatomic,strong)NSString *ownerPhone;
//终端厂商
@property(nonatomic,strong)NSString *tmnMakerModel;
//卡套餐
@property(nonatomic,strong)NSString *tmnSimMeal;
//卡类型
@property(nonatomic,strong)NSString *tmnSimType;
//车辆说明
@property(nonatomic,strong)NSString *des;
//门状态 int[5],数组元素分别按顺序代表门1~门5，0表示关，1表示开
@property(nonatomic,strong)NSArray<NSString *> *doorState;
//前门的状态
@property(nonatomic,strong)NSString *appDoor1;
//中门的状态
@property(nonatomic,strong)NSString *appDoor2;
//后门的状态
@property(nonatomic,strong)NSString *appDoor3;
//驾驶席门的状态
@property(nonatomic,strong)NSString *appDoor4;
//门5的状态
@property(nonatomic,strong)NSString *appDoor5;
/**
 * 扩展信息
 * c3 电量 %
 * bd 正反转状态 00正转，01反转，02停止
 * be 正反转转速 转速：单位是转/分钟
 * moni1 模拟量一
 * moni2 模拟量二
 * tcp 协议类型
 * bb 需要人工确认的报警事件的ID
 * vender 设备厂家
 * b0 油量
 * b1 速度传感器速度
 * cvd 定制设备厂家标识
 * c4 电压
 * _moni_6 模拟量六
 * sd0 beacon工作状态
 * srvTime 接收时间
 * （轮胎监测数据 key=c8：有N组数据，数据格式:[{轮胎位置,胎压,胎温,电量},...,{轮胎位置,胎压,胎温,电量}]）
 * c4 电压 如果有小数点，保留一位小数点，小数点第二位四舍五入
 * mileLng 今日经纬里程
 * coiledDriving 连续驾驶
 */
@property(nonatomic,strong)NSString *exts;

@property(nonatomic,strong)NSDictionary *extsDict;

@property(nonatomic,assign) NSInteger todayRun;
//离线时长
@property(nonatomic,strong)NSString *offlineDuration;
//离线时长
@property(nonatomic,strong)NSString *tmnMile;

@property(nonatomic,strong)NSString *protocols;

@property(nonatomic,strong)NSDictionary *protocolsDict;

///时间 2024-09-07 15:49:29
@property(nonatomic,copy)NSString *atime;
/// admin
@property(nonatomic,copy)NSString *auser;
/// "{\"xwb\":\"1\",\"YHJYZ\":\"---\"}"
@property(nonatomic,copy)NSString *bxts;

@property(nonatomic,copy)NSString *driverId;

@property(nonatomic,copy)NSString *healthCode;

@property(nonatomic,copy)NSString *onlineTime;
/// "111||alreadySetDft|默认/1.gif|{\"a\":\"v0\",\"s\":\"1\",\"v\":\"1\",\"i\":\"0\"}|*zfz0"
@property(nonatomic,copy)NSString *stts;

@property(nonatomic,copy)NSString *tmnId;

@property(nonatomic,copy)NSString *utime;
/// 公司ID
@property(nonatomic,copy)NSString *cmpId;
/// 连续驾驶
@property(nonatomic,copy)NSString *coiledDriving;

- (NSArray *)getTirePressureArr;

@end

NS_ASSUME_NONNULL_END
