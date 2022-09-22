//  AWHBBControl.h
//  LimitFreeDemo
//
//  Created by LongHuanHuan on 15/4/12.
//  Copyright (c) 2015年 ___LongHuanHuan___. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AWHBoneRuntime/AWHBRExpandButton.h>
#import <AWHBoneRuntime/AWHBRExpand40Button.h>

@interface AWHBBControl : NSObject
//使用+方法进行创建 是工厂模式中的一种
//工厂模式：传入参数，出来控件
#pragma mark 创建View
+(UIView*)createViewWithFrame:(CGRect)frame;
#pragma mark 创建label
+(UILabel*)createLabelWithFrame:(CGRect)frame Font:(float)font Text:(NSString*)text Color:(NSString *)color;
#pragma mark 创建button
+(UIButton*)createButtonWithFrame:(CGRect)frame target:(id)target SEL:(SEL)method title:(NSString*)title image:(UIImage *)image Color:(NSString *)color Font:(double)font
;
+(AWHBRExpandButton*)createExpandButtonWithFrame:(CGRect)frame target:(id)target SEL:(SEL)method title:(NSString*)title image:(UIImage *)image Color:(NSString *)color Font:(double)font;
+(AWHBRExpand40Button*)createExpand40ButtonWithFrame:(CGRect)frame target:(id)target SEL:(SEL)method title:(NSString*)title image:(UIImage *)image Color:(NSString *)color Font:(double)font;
#pragma mark 创建imageView
+(UIImageView*)createImageViewFrame:(CGRect)frame imageName:(NSString*)imageName;
#pragma mark 创建textField
+(UITextField*)createTextFieldFrame:(CGRect)frame Font:(float)font textColor:(UIColor*)color leftImageName:(NSString*)leftImageName rightImageName:(NSString*)rightImageName bgImageName:(NSString*)bgImageName placeHolder:(NSString*)placeHolder sucureTextEntry:(BOOL)isOpen;
//没有数据
+(UIView*)createNoDataView:(UIView*)View andText:(NSString *)text;
//没有权限功能提升页
+(UIView*)createNoPermissionView:(UIView*)View andText:(NSString *)text;
@end
