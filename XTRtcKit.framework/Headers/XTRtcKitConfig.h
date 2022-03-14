//
//  XTRtcKitConfig.h
//  XTRtcKit
//
//  Created by shirley on 2019/4/17.
//  Copyright © 2019 XTY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LiveBeautyProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@protocol XTRtcKitConfig <NSObject>

///基础地址
+ (NSString *)baseUrl;

///用户token
+ (NSString *)userToken;

///用户ID
+ (int64_t)getUserId;

///直播的key
+ (NSString *)getLiveKey;


@optional


///获得美颜等级
+ (int)getImageQualityNum;

///美颜开关
+ (int)getBeautySwitch;

///美颜key
+ (NSString *)getBeautyKey;

///获得cdn的key
+ (NSString *)getCDNLiveKey;

///获取美颜文件
+ (Class<LiveBeautyProtocol>)getBeautyObj;


@end

NS_ASSUME_NONNULL_END
