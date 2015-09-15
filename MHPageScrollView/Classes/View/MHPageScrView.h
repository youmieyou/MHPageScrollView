//
//  HomeScrollView.h
//  HealthManager
//
//  Created by hua on 15/7/6.
//  Copyright (c) 2015年 com.hua. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MHPageScrView : UIView
@property (strong, nonatomic) UIPageControl *pageControl;
@property (strong, nonatomic) UIColor *currentPageIndicatorTintColor;
@property (strong, nonatomic) UIColor *pageIndicatorTintColor;
@property (assign, nonatomic) CGRect pageControlFrame;

/**
 *  添加轮播视图-本地加载图片
 */
- (instancetype)initWithFrame:(CGRect)frame localImages:(NSArray*)images;

/**
 *  添加轮播视图-网络下载图片
 */
- (instancetype)initWithFrame:(CGRect)frame imageUrls:(NSArray*)imageUrls placeImage:(UIImage *)placeImage;

/**
 *  添加pageControl
 */
- (void)setupPageControlFrame:(CGRect)frame currentPageIndicatorTintColor:(UIColor *)currentPageIndicatorTintColor pageIndicatorTintColor:(UIColor *)pageIndicatorTintColor;

@end
