//
//  UIBarButtonItem+Item.m
//  EMob
//
//  Created by KC on 16/6/27.
//  Copyright © 2016年 KC. All rights reserved.
//

#import "UIBarButtonItem+Item.h"

@implementation UIBarButtonItem (Item)

+(UIBarButtonItem *)itemWithImage:(UIImage *)image HLImage:(UIImage *)HLImage target:(id)target action:(SEL)action{
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setImage:image forState:UIControlStateNormal];
    [btn setImage:HLImage forState:UIControlStateHighlighted];
    [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    [btn sizeToFit];
    UIView *contextView = [[UIView alloc] initWithFrame:btn.bounds];
    [contextView addSubview:btn];
    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithCustomView:contextView];
    return item;
    
}

+(UIBarButtonItem *)itemWithImage:(UIImage *)image SelImage:(UIImage *)SelImage target:(id)target action:(SEL)action{
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setImage:image forState:UIControlStateNormal];
    [btn setImage:SelImage forState:UIControlStateSelected];
    [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    [btn sizeToFit];
    UIView *contextView = [[UIView alloc] initWithFrame:btn.bounds];
    [contextView addSubview:btn];
    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithCustomView:contextView];
    return item;
    
}

+(UIBarButtonItem *)itemWithImage:(UIImage *)image HLImage:(UIImage *)HLImage target:(id)target action:(SEL)action title:(NSString *)title{
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setImage:HLImage forState:UIControlStateNormal];
    [btn setImage:image forState:UIControlStateHighlighted];
    [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    [btn setTitle:title forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateHighlighted];
     [btn setImageEdgeInsets:UIEdgeInsetsMake(0, -50, 0, 0)];
    btn.frame = CGRectMake(0, 0, 50, 64);
    UIView *contextView = [[UIView alloc] initWithFrame:btn.bounds];
    [contextView addSubview:btn];
    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithCustomView:contextView];
    return item;
    
}
@end
