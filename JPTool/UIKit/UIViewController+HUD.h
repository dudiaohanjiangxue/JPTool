//
//  UIViewController+HUD.h
//  community_ lightkey_ios
//
//  Created by KC on 16/7/26.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (HUD)
//显示提示, 需手动隐藏
- (void)showHudInView:(UIView *)view hint:(NSString *)hint;
//自定义提示,需手动隐藏
-(void)showCustomHudInView:(UIView *)view hint:(NSString *)hint;
//隐藏提示
- (void)hideHud;
//文字提示
- (void)showHint:(NSString *)hint;

// 从默认(showHint:)显示的位置再往上(下)yOffset
- (void)showHint:(NSString *)hint yOffset:(float)yOffset;

@end
