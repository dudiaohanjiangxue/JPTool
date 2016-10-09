//
//  NSString+JPAdd.h
//  JPResgtureLock
//
//  Created by KC on 16/9/5.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (JPAdd)

#pragma mark - 根据中文返回拼音
/**
 *  根据中文返回拼音(例如:陈锦彭 -> chenjinpeng)
 *
 *  @param string 输入的中文
 *
 *  @return 返回的拼音
 */
+ (NSString *)pinyinFromChineseString:(NSString *)string;

#pragma mark - 文本计算方法
/**
 *  快速计算出文本的真实尺寸
 *
 *  @param font    文字的字体
 *  @param maxSize 文本的最大尺寸
 *
 *  @return 快速计算出文本的真实尺寸
 */
- (CGSize)sizeWithFont:(UIFont *)font andMaxSize:(CGSize)maxSize;

/**
 *  快速计算出文本的真实尺寸
 *
 *  @param text    需要计算尺寸的文本
 *  @param font    文字的字体
 *  @param maxSize 文本的最大尺寸
 *
 *  @return 快速计算出文本的真实尺寸
 */
+ (CGSize)sizeWithText:(NSString *)text andFont:(UIFont *)font andMaxSize:(CGSize)maxSize;


#pragma mark - -----------------进制转换-------------
//十进制转二进制
+ (NSString *)toBinarySystemWithDecimalSystem:(NSInteger)decimal;
//  二进制转十进制
+ (NSString *)toDecimalSystemWithBinarySystem:(NSString *)binary;
@end
