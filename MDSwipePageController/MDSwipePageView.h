//
//  MDSwipePageView.h
//  MDSPCExample
//
//  Created by 秦昱博 on 15/6/12.
//  Copyright (c) 2015年 TWT Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MDSwipePageViewDelegate <NSObject>

- (void)pageChangedToIndex:(NSUInteger)index;
- (void)pageWillChangeToIndex:(NSUInteger)index;

@end

@interface MDSwipePageView : UIView<UIScrollViewAccessibilityDelegate, UIGestureRecognizerDelegate>

@property (strong, nonatomic) NSArray *titlesForSubPageViews;
@property (strong, nonatomic) NSArray *subPageViews;
@property (strong, nonatomic) UIColor *mainColor;

@property (assign, nonatomic) id<MDSwipePageViewDelegate> delegate;

@end
