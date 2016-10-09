//
//  UIColor+JPAdd.h
//  JPResgtureLock
//
//  Created by KC on 16/9/6.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (JPAdd)

/**
 *  根据颜色16进制的字符串生成颜色 默认alpha值为1
 *
 *  @param color 16进制字符串
 *  @param alpha 透明度
 *
 *  @return 返回颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)color;
/**
 *  根据颜色16进制的字符串生成颜色
 *
 *  @param color 16进制字符串
 *  @param alpha 透明度
 *
 *  @return 返回颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
@end
