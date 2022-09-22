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
@property(nonatomic,copy)NSString *drvPhone;
@property(nonatomic,copy)NSString *addr;
//车辆名称
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
@property(nonatomic,copy)NSString *state;
@property(nonatomic,copy)NSString *drctCn;
@property(nonatomic,copy)NSString *drct;
//图标链接
@property(nonatomic,copy)NSString *iconLink;
//视频通道
@property(nonatomic,copy)NSString *videos;
@property(nonatomic,copy)NSString *expTime;
@property(nonatomic,copy)NSString *acc;
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

@end

NS_ASSUME_NONNULL_END
