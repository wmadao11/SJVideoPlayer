//
//  SJLightweightCenterControlView.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2018/3/21.
//  Copyright © 2018年 SanJiang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SJVideoPlayerCenterViewTag) {
    SJVideoPlayerCenterViewTag_Failed,
    SJVideoPlayerCenterViewTag_Replay,
};

@protocol SJLightweightCenterControlViewDelegate;

@interface SJLightweightCenterControlView : UIView

@property (nonatomic, weak, readwrite, nullable) id<SJLightweightCenterControlViewDelegate> delegate;

- (void)failedState;

- (void)replayState;

@end

@protocol SJLightweightCenterControlViewDelegate <NSObject>

@optional
- (void)centerControlView:(SJLightweightCenterControlView *)view clickedBtnTag:(SJVideoPlayerCenterViewTag)tag;

@end

NS_ASSUME_NONNULL_END
