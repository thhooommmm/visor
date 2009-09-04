/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol NSAnimationDelegate <NSObject>

@optional
- (BOOL)animationShouldStart:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
@end

