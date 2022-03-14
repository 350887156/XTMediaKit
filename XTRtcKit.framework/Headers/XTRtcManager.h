//
//  XTRtcManager.h
//  XTRtcKit
//
//  Created by shirley on 2019/5/16.
//  Copyright © 2019 XTY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XTRtcKitConfig.h"
#import "O2OVideoProtocol.h"
#import "O2OAudioProtocol.h"
#import "LiveMusicProtocol.h"
#import "MPVideoProtocol.h"
#import "LivePubProtocol.h"
#import "MPAudioProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface XTRtcManager : NSObject


#pragma mark - 公用方法

///必传否则无法使用
+ (void)setConfig:(Class<XTRtcKitConfig>)config;


///断开链接
+ (void)disconnect;

#pragma mark - 每个独立的功能

///音乐管理
+ (id<LiveMusicProtocol>)music;

///公共方法管理
+ (id<LivePubProtocol>)pubMethod;

///多人直播
+ (id<MPVideoProtocol>)mpVideo;

///一对一视频
+ (id<O2OVideoProtocol>)otoVideo;

///一对一语音
+ (id<O2OAudioProtocol>)otoAudio;

///多人语音
+ (id<MPAudioProtocol>)mpAudio;



@end

NS_ASSUME_NONNULL_END
