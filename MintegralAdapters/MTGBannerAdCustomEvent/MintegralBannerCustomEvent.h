//
//  MintegralBannerCustomEvent.h
//  MoPubSampleApp
//
//  Created by Lucas on 2019/4/25.
//  Copyright © 2019 MoPub. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
#import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
#import <MoPubSDKFramework/MoPub.h>
#else
#import "MoPub.h"
#import "MPLogging.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface MintegralBannerCustomEvent : MPBannerCustomEvent

@end

NS_ASSUME_NONNULL_END