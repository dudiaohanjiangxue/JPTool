//
//  UIViewController+HUD.m
//  community_ lightkey_ios
//
//  Created by KC on 16/7/26.
//  Copyright © 2016年 KC. All rights reserved.
//


#import "UIViewController+HUD.h"
#import "MBProgressHUD.h"
#import <objc/runtime.h>
//#import "UIColor+Hex.h"
#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )
static const void *HttpRequestHUDKey = &HttpRequestHUDKey;

@implementation UIViewController (HUD)

- (MBProgressHUD *)HUD{
    return objc_getAssociatedObject(self, HttpRequestHUDKey);
}

- (void)setHUD:(MBProgressHUD *)HUD{
    objc_setAssociatedObject(self, HttpRequestHUDKey, HUD, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (void)showHudInView:(UIView *)view hint:(NSString *)hint{
    MBProgressHUD *HUD = [[MBProgressHUD alloc] initWithView:view];
    HUD.label.text = hint;
    [view addSubview:HUD];
    [HUD showAnimated:YES];
    [self setHUD:HUD];
}

-(void)showCustomHudInView:(UIView *)view hint:(NSString *)hint{
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:view animated:YES];
    hud.mode = MBProgressHUDModeCustomView;
    hud.square = YES;
    hud.label.text = hint;
//    hud.label.textColor = [UIColor whiteColor];
    hud.contentColor = [UIColor whiteColor];
    hud.margin = 10.f;
    hud.customView = [self addCustomView:hint];
//    hud.backgroundView.color = [UIColor colorWithHexString:@"#010101" alpha:0.4];
    hud.bezelView.style = MBProgressHUDBackgroundStyleSolidColor;
//    hud.bezelView.color = [UIColor colorWithHexString:@"#000000" alpha:0.33];
    [self setHUD:hud];
}


- (void)showHint:(NSString *)hint
{
    //显示提示信息
    UIView *view = [[UIApplication sharedApplication].delegate window];
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:view animated:YES];
    hud.userInteractionEnabled = NO;
    // Configure for text only and offset down
    hud.mode = MBProgressHUDModeText;
    hud.label.text = hint;
    hud.margin = 10.f;
    [hud setOffset:CGPointMake(0, IS_IPHONE_5?200.f:150.f)];
    hud.removeFromSuperViewOnHide = YES;
    [hud hideAnimated:YES afterDelay:3.0];
    
    
}

- (void)showHint:(NSString *)hint yOffset:(float)yOffset {
    //显示提示信息
    UIView *view = [[UIApplication sharedApplication].delegate window];
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:view animated:YES];
    hud.userInteractionEnabled = NO;
    // Configure for text only and offset down
    hud.mode = MBProgressHUDModeText;
    hud.label.text = hint;
    hud.margin = 10.f;
    CGFloat offsetY = IS_IPHONE_5?200.f:150.f;
    [hud setOffset:CGPointMake(0, yOffset + offsetY)];
    hud.removeFromSuperViewOnHide = YES;
    [hud hideAnimated:YES afterDelay:3.0];
}

- (void)hideHud{
    [[self HUD] hideAnimated:YES];
}


-(UIView *)addCustomView:(NSString *)hint{
//    UIView *contectView = [[UIView alloc] init];
    UIImageView *iconView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"refresh_icon"]];
//    iconView.backgroundColor = CJPRandomColor;
//    [iconView sizeToFit];
//    iconView.center = CGPointMake(contectView.height * 0.5, contectView.width * 0.5);
//    [contectView addSubview:iconView];
//
//    UILabel *tipsLabel = [[UILabel alloc] init];
//    tipsLabel.text = hint;
//    [tipsLabel sizeToFit];
//    tipsLabel.center = CGPointMake(contectView.height * 0.5, contectView.width * 0.5);
//    tipsLabel.backgroundColor = [UIColor clearColor];
//    [contectView addSubview:tipsLabel];
    
    CABasicAnimation *basicA = [CABasicAnimation animationWithKeyPath:@"transform.rotation.z"];
    basicA.duration = 1.0;
    basicA.repeatCount = MAXFLOAT;
    basicA.fromValue = [NSNumber numberWithFloat:0.0];
    basicA.toValue = [NSNumber numberWithFloat:2 * M_PI];
    basicA.removedOnCompletion = NO;
    [iconView.layer addAnimation:basicA forKey:@"rotate-layer"];
    
    return iconView;
}

@end
