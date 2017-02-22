//
//  UIView+MGBadgeView.h
//  purl
//
//  Created by Matteo Gobbi on 28/05/2014.
//  Copyright (c) 2014 Matteo Gobbi (Voxygen). All rights reserved.
//

// Edited by GJS on 21/02/2017
// Merge pull request #8 from swoolcock: Badge text support
// Merge pull request #9 from soscomp: update size and position in auto layout's layout pass
// Add badge style support

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, MGBadgePosition) {
    MGBadgePositionCenterLeft,
    MGBadgePositionCenterRight,
    MGBadgePositionTopLeft,
    MGBadgePositionTopRight,
    MGBadgePositionBottomLeft,
    MGBadgePositionBottomRight,
    MGBadgePositionBest
};

typedef NS_ENUM(NSUInteger, MGBadgeStyle) {
    MGBadgeStyleEllipse,
    MGBadgeStyleRoundRect
};


@interface MGBadgeView : UIView

@property (nonatomic) MGBadgePosition position;

@property (nonatomic) MGBadgeStyle bageStyle;

@property (nonatomic) NSInteger badgeValue;

@property (copy, nonatomic) NSString *badgeText;

@property(strong, nonatomic) UIFont *font;

@property(strong, nonatomic) UIColor *badgeColor;

@property(strong, nonatomic) UIColor *textColor;

@property(strong, nonatomic) UIColor *outlineColor;

@property (nonatomic) float outlineWidth;

@property (nonatomic) float minDiameter;

@property (nonatomic) BOOL displayIfZero;

@property (nonatomic) float horizontalOffset;

@property (nonatomic) float verticalOffset;

@end


@interface UIView (MGBadgeView)

@property(nonatomic, readonly) MGBadgeView *badgeView;

@end
