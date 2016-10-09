//
//  UIImage+Image.h
//  
//
//  Created by yz on 15/7/6.
//  Copyright (c) 2015年 yz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Image)

#pragma mark - 根据颜色生的相同颜色图片
// 根据颜色生成一张尺寸为1*1的相同颜色图片
+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
+ (UIImage *)miniImageWithColor:(UIColor *)color;

#pragma mark - ----------------图片形状大小相关--------------
#pragma mark - 返回一张可以拉伸的图片
// 返回一张可以拉伸的图片
+ (instancetype)resizableImage:(NSString *)name;

#pragma mark - 返回圆形图片
/** 返回圆形图片 */
+(instancetype)circleImageWithName:(NSString *)imageName;
-(instancetype)circleImage;

#pragma mark - 压缩图片到指定尺寸大小
+(UIImage *)compressOriginalImage:(UIImage *)image toSize:(CGSize)size;


#pragma mark - ----------------渲染相关--------------
#pragma mark - 返回一张没有经过渲染的图片
/** 返回一张没有经过渲染的图片 */
+(UIImage *)originalImageWithimageNamed:(NSString *)name;

#pragma mark - 对图片进行滤镜处理
/**
 *  对图片进行滤镜处理
 * 怀旧 --> CIPhotoEffectInstant                         单色 --> CIPhotoEffectMono
   黑白 --> CIPhotoEffectNoir                            褪色 --> CIPhotoEffectFade
   色调 --> CIPhotoEffectTonal                           冲印 --> CIPhotoEffectProcess
   岁月 --> CIPhotoEffectTransfer                        铬黄 --> CIPhotoEffectChrome
   CILinearToSRGBToneCurve, CISRGBToneCurveToLinear, CIGaussianBlur, CIBoxBlur, CIDiscBlur, CISepiaTone, CIDepthOfField
 *  @param image 要处理的图片
 *  @param name  滤镜的名字
 *
 *  @return 处理好的图片
 */
+ (UIImage *)filterWithOriginalImage:(UIImage *)image filterName:(NSString *)name;


#pragma mark - 对图片进行模糊处理
/**
 *  CIGaussianBlur ---> 高斯模糊
    CIBoxBlur      ---> 均值模糊(Available in iOS 9.0 and later)
    CIDiscBlur     ---> 环形卷积模糊(Available in iOS 9.0 and later)
    CIMedianFilter ---> 中值模糊, 用于消除图像噪点, 无需设置radius(Available in iOS 9.0 and later)
    CIMotionBlur   ---> 运动模糊, 用于模拟相机移动拍摄时的扫尾效果(Available in iOS 9.0 and later)
 *
 *  @param image  原始图片
 *  @param name   模糊的类型
 *  @param radius 模糊半径??//模糊度???
 *
 *  @return 处理好的图片
 */
+ (UIImage *)blurWithOriginalImage:(UIImage *)image blurName:(NSString *)name radius:(NSInteger)radius;

#pragma mark -  调整图片饱和度, 亮度, 对比度
/**
 *   调整图片饱和度, 亮度, 对比度
 *
 *  @param image      目标图片
 *  @param saturation 饱和度
 *  @param brightness 亮度: -1.0 ~ 1.0
 *  @param contrast   对比度
 *
 */
+ (UIImage *)colorControlsWithOriginalImage:(UIImage *)image
                                 saturation:(CGFloat)saturation
                                 brightness:(CGFloat)brightness
                                   contrast:(CGFloat)contrast;

#pragma mark - ----------------截图相关--------------

#pragma mark - 全屏截图
+ (UIImage *)shotScreen;

#pragma mark - 根据一个View截屏
+(UIImage *)shotImageWithView:(UIView *)view;

#pragma mark - 截取view中某个区域生成一张图片
+(UIImage *)shotImageWithView:(UIView *)view withScope:(CGRect)scope;


@end
