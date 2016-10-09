//
//  UIView+JPAdd.h
//  JPResgtureLock
//
//  Created by KC on 16/9/6.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface UIView (JPAdd)

#pragma mark - 基本属性
@property (nonatomic) CGFloat left;        ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat top;         ///< Shortcut for frame.origin.y
@property (nonatomic) CGFloat right;       ///< Shortcut for frame.origin.x + frame.size.width
@property (nonatomic) CGFloat bottom;      ///< Shortcut for frame.origin.y + frame.size.height
@property (nonatomic) CGFloat width;       ///< Shortcut for frame.size.width.
@property (nonatomic) CGFloat height;      ///< Shortcut for frame.size.height.
@property (nonatomic) CGFloat centerX;     ///< Shortcut for center.x
@property (nonatomic) CGFloat centerY;     ///< Shortcut for center.y
@property (nonatomic) CGPoint origin;      ///< Shortcut for frame.origin.
@property (nonatomic) CGSize  size;        ///< Shortcut for frame.size.

//视图的控制器
@property (nullable, nonatomic, readonly) UIViewController *viewController;
//视图的不透明度, 会根据父视图的不透明度获取
@property (nonatomic, readonly) CGFloat visibleAlpha;
#pragma mark -  创建一张实时模糊效果 View (毛玻璃效果)

+ (UIView *)effectViewWithFrame:(CGRect)frame;

#pragma mark -  绘制虚线
/*
 ** lineFrame:     虚线的 frame
 ** length:        虚线中短线的宽度
 ** spacing:       虚线中短线之间的间距
 ** color:         虚线中短线的颜色
 */
+ (UIView *)createDashedLineWithFrame:(CGRect)lineFrame
                           lineLength:(int)length
                          lineSpacing:(int)spacing
                            lineColor:(UIColor *)color;
#pragma mark -  设置阴影
/**
 *  给视图添加阴影效果
 *
 *  @param color  阴影颜色
 *  @param offset 阴影偏移量
 *  @param radius 阴影圆角半径
 */
- (void)setLayerShadow:(UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;
#pragma mark -  移除所有子视图
/**
 *  移除所有的子视图
 */
- (void)removeAllSubviews;

#pragma mark -  坐标转移
/**
 *  把这个点从本视图转移到另外一个视图(即当有两个重叠的View时,响应事件可以通过这个方法去转移到指定的View上)
 *
 *  @param point 源视图的View上面的点(坐标)
 *  @param view  要转移的目标视图
 *
 *  @return 目标视图这个点(坐标)
 */
- (CGPoint)convertPoint:(CGPoint)point toViewOrWindow:(nullable UIView *)view;

- (CGPoint)convertPoint:(CGPoint)point fromViewOrWindow:(nullable UIView *)view;

/**
 *  把这个区域从本视图转移到另外一个视图
 *
 *  @param point 源视图的View上面的区域(坐标)
 *  @param view  要转移的目标视图
 *
 *  @return 目标视图这个区域(坐标)
 */
- (CGRect)convertRect:(CGRect)rect toViewOrWindow:(nullable UIView *)view;

- (CGRect)convertRect:(CGRect)rect fromViewOrWindow:(nullable UIView *)view;
@end
NS_ASSUME_NONNULL_END