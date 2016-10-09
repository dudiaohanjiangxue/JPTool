//
//  NSData+JPAdd.h
//  JPResgtureLock
//
//  Created by KC on 16/9/7.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSData (JPAdd)

#pragma mark - -------------压缩相关---------------
#pragma mark - 压缩图片到指定文件大小
+ (NSData *)compressOriginalImage:(UIImage *)image toMaxDataSizeKBytes:(CGFloat)size;
@end
