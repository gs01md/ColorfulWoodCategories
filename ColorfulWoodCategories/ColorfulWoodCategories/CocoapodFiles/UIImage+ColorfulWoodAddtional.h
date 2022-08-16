//
//  UIImage+ColorfulWoodAddtional.h
//  ColorfulWoodCategories
//
//  Created by 大新 on 2017/2/17.
//  Copyright © 2017年 ColorfulWood. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ColorfulWoodAddtional)
- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

+ (UIColor *) colorWithHexString: (NSString *)color;
+ (UIColor *) colorWithHexString: (NSString *)color alpha:(CGFloat)alpha;
+ (UIImage *)imageWithHexString:(NSString *)color alpha:(CGFloat)alpha  size:(CGSize)size;
+ (UIImage *)imageWithHexString:(NSString *)color size:(CGSize)size;
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
/**
 生成一张渐变色的图片
 @param colors 颜色数组
 @param size 图片大小
 @return 返回渐变图片
 */
+ (UIImage *)imageWithGradientColors:(NSArray *)colors size:(CGSize)size;
+ (UIColor *)similarColor:(UIColor*)color add:(CGFloat)add;
@end
