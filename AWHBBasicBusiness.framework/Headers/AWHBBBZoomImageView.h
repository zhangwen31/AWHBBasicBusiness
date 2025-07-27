//
//  AWHBBBZoomImageView.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2023/5/9.
//

#import <UIKit/UIKit.h>

@class AWHBBBZoomImageView;

@protocol AWHBBBZoomImageViewDelegate <NSObject>

@optional

//图片将要放大
- (void)imageWillZoomIn:(AWHBBBZoomImageView *)imageView;

//图片已经放大
- (void)imageDidZoomIn:(AWHBBBZoomImageView *)imageView;

//图片将要隐藏
- (void)imageWillZoomOut:(AWHBBBZoomImageView *)imageView;

//图片已经隐藏
- (void)imageDidZoomOut:(AWHBBBZoomImageView *)imageView;

@end

@interface AWHBBBZoomImageView : UIImageView

@property (nonatomic,strong) UIImageView *fullImageView;

@property (nonatomic, weak)id<AWHBBBZoomImageViewDelegate> delegate;

//绑定数据用于浏览
@property (nonatomic,strong)NSMutableArray<UIImage *> *imageArray;
//绑定数据用于浏览url 优先使用
@property (nonatomic,strong)NSMutableArray<NSString *> *imageUrlArray;
//描述
@property (nonatomic,strong)NSMutableArray<NSString *> *desArray;
//当前图片
@property (nonatomic,strong)UIImage *nowImage;
//当前图片 url
@property (nonatomic,strong)NSString *nowImageUrl;

@property(nonatomic,assign)UIViewContentMode contentModeNew;


- (instancetype)initWithFrame:(CGRect)frame withImage:(UIImage *)image withImageUrl:(NSString *)imageUrl;

- (void)setupImage:(UIImage *)image withImageUrl:(NSString *)imageUrl;

@end


