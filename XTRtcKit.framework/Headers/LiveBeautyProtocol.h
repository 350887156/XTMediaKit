//
//  VideoBeautyInterface.h
//  XTRtcKit
//
//  Created by shirley on 2019/3/16.
//  Copyright © 2019 XTY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LiveBeautyProtocol <NSObject>

///显示到某一个视图上
+ (void)showBeautyInView:(UIView *)superV complete:(void (^)(void))complete;

///绘制
+ (CVPixelBufferRef)renderOutputSampleBuffer:(CVPixelBufferRef)pixelBuffer Rotation:(int)rotation isFront:(BOOL)Front;

///文件销毁
+ (void)deatoryBeautyObj;

@optional
+ (void)initWithTiKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
