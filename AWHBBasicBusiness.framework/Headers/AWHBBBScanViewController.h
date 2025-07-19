//
//  AWHBBBScanViewController.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2023/5/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

/** */
@protocol AWHBBBReturnResultDelegate <NSObject>
-(void)returnResult:(NSString *)result;
@end

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBBBReturnResultBlock)(NSString *result);
@interface AWHBBBScanViewController : AWHBBBaseViewController

/** */
@property(nonatomic,copy)AWHBBBReturnResultBlock ReturnIpDomainBlock;
/** */
@property(nonatomic,copy)NSString *fromVC;
@property(nonatomic,weak)id<AWHBBBReturnResultDelegate>delegate;

@end

NS_ASSUME_NONNULL_END
