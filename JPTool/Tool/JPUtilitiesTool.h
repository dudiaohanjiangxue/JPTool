//
//  JPUtilitiesTool.h
//  JPResgtureLock
//
//  Created by KC on 16/9/5.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPUtilitiesTool : NSObject

/***获取文件大小 返回的时字节*/
+ (long long)fileSizeAtPath:(NSString *)filePath;

/***获取文件夹的大小 返回的时字节*/
+ (long long)folderSizeAtPath:(NSString *)folderPath;

/***如果子文件夹不存在，则直接创建；如果已经存在，则直接返回 返回文件夹路径*/
-(NSString *)createSubFolder:(NSString *)subFolder;

/**
 *  计算上次日期距离现在多久
 *
 *  @param lastTime    上次日期(需要和格式对应)
 *  @param format1     上次日期格式
 *  @param currentTime 最近日期(需要和格式对应)
 *  @param format2     最近日期格式
 *
 *  @return xx分钟前、xx小时前、xx天前
 */
+ (NSString *)timeIntervalFromLastTime:(NSString *)lastTime
                        lastTimeFormat:(NSString *)format1
                         ToCurrentTime:(NSString *)currentTime
                     currentTimeFormat:(NSString *)format2;

/**
 *  获取当前时间
 *
 *  @param format eg:@"yyyy-MM-dd HH:mm:ss"、@"yyyy年MM月dd日 HH时mm分ss秒"
 *
 *  @return 事件字符串
 */
+ (NSString *)currentDateWithFormat:(NSString *)format;

/***获取字符串(或汉字)首字母*/
+ (NSString *)firstCharacterWithString:(NSString *)string;

/***将字符串数组按照元素首字母顺序进行排序分组  (只按第一个字母, 第二个字母之后就不排序了)*/
+ (NSDictionary *)dictionaryOrderByCharacterWithOriginalArray:(NSArray *)array;
@end
