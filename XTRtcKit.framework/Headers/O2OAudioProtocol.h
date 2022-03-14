//
//  O2OAudioProtocol.h
//  XTRtcKit
//
//  Created by shirley on 2019/5/9.
//  Copyright © 2019 XTY. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol O2OAudioProtocol <NSObject>


/**
 初始化主视图，设置基本配置
 */
- (void)initO2OAudioRole:(int)role;


/// 用户音量大小的改变
- (void)userVolume:(void(^)(NSUInteger num, int64_t uid))block;


/** 创建房间，进入房间，都走这个接口 */
- (void)joinRoom:(int64_t)roomId;


/** 关闭其中一个用户 */
- (void)closeOtherUser:(int64_t)userId;


/** 离开 */
- (void)leaveRoom;



@end

NS_ASSUME_NONNULL_END
