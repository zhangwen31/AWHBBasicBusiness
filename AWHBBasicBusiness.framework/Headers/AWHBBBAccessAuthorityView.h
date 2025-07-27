//
//  AWHBBBAccessAuthorityView.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2024/6/29.
// 访问权限

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AWHBBBAccessAuthorityType) {
    /// 保存视频到相册
    AWHBBBAccessAuthorityTypeSavePhotoAlbum     = 0,
    /// 相机
    AWHBBBAccessAuthorityTypeCamera             = 1,
    /// 位置
    AWHBBBAccessAuthorityTypePosition           = 2,
    ///照片和视频
    AWHBBBAccessAuthorityTypePhotos             = 3,
    ///麦克风
    AWHBBBAccessAuthorityTypeMicrophone         = 4,
    ///通知
    AWHBBBAccessAuthorityTypeNotification       = 5,
//    ///通讯录
//    AWHBBBAccessAuthorityTypeAddressBook        = 6,
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBAccessAuthorityView : UIView

@property (nonatomic, copy) void (^clickClose)(void);
/// 继续
@property (nonatomic, copy) void (^clickResume)(void);
/// 校验权限是否申请
+ (BOOL)checkAccessAuthorityWithType:(AWHBBBAccessAuthorityType)type;

/// 弹框提示权限是否需要进行授权申请
+ (instancetype)setupAccessAuthorityWithType:(AWHBBBAccessAuthorityType)type;

@end

NS_ASSUME_NONNULL_END
