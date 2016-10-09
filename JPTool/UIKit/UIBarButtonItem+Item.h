//
//  UIBarButtonItem+Item.h
//  EMob
//
//  Created by KC on 16/6/27.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Item)
+(UIBarButtonItem *)itemWithImage:(UIImage *)image HLImage:(UIImage *)HLImage target:(id)target action:(SEL)action;
+(UIBarButtonItem *)itemWithImage:(UIImage *)image SelImage:(UIImage *)SelImage target:(id)target action:(SEL)action;
+(UIBarButtonItem *)itemWithImage:(UIImage *)image HLImage:(UIImage *)HLImage target:(id)target action:(SEL)action title:(NSString *)title;
@end
