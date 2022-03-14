//
//  DecodeXTKey.h
//  XTMediaKit
//
//  Created by klc_sl on 2021/6/21.
//  Copyright © 2021 萌鑫达. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DecodeXTKey : NSObject


+ (NSString *)decodeXTBeautyKey:(NSString *)key;

+ (NSString *)decodeXTCDNKey:(NSString *)key;


@end

NS_ASSUME_NONNULL_END
