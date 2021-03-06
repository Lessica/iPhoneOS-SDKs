//
//  SKTransition.h
//  SpriteKitMac
//
//  Copyright (c) 2012 Apple Inc. All rights reserved.
//

#import <SpriteKit/SpriteKitBase.h>

@class CIFilter;

typedef NS_ENUM(NSInteger, SKTransitionDirection) {
    SKTransitionDirectionUp,
    SKTransitionDirectionDown,
    SKTransitionDirectionRight,
    SKTransitionDirectionLeft
} NS_ENUM_AVAILABLE(10_9, 7_0);

/**
 A transition style from one scene to another.
 */
SK_EXPORT @interface SKTransition : NSObject

+ (SKTransition *)crossFadeWithDuration:(NSTimeInterval)sec;

+ (SKTransition *)fadeWithDuration:(NSTimeInterval)sec;

+ (SKTransition *)fadeWithColor:(SKColor *)color duration:(NSTimeInterval)sec;

+ (SKTransition *)flipHorizontalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)flipVerticalWithDuration:(NSTimeInterval)sec;

+ (SKTransition *)revealWithDirection:(SKTransitionDirection)direction duration:(NSTimeInterval)sec;
+ (SKTransition *)moveInWithDirection:(SKTransitionDirection)direction duration:(NSTimeInterval)sec;
+ (SKTransition *)pushWithDirection:(SKTransitionDirection)direction duration:(NSTimeInterval)sec;

+ (SKTransition *)doorsOpenHorizontalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)doorsOpenVerticalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)doorsCloseHorizontalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)doorsCloseVerticalWithDuration:(NSTimeInterval)sec;

+ (SKTransition *)doorwayWithDuration:(NSTimeInterval)sec;

/* Create a transition with a CIFilter. The filter must be a transition filter which requires only two images (inputImage, inputTargetImage) and generates a single image (outputImage). SpriteKit sets the inputImage, inputTargetImage, and inputTime properties when rendering, all others must be setup beforehand. */

+ (SKTransition *)transitionWithCIFilter:(CIFilter*)filter duration:(NSTimeInterval)sec;

/**
 Pause the incoming Scene during the transition, defaults to YES.
 */
@property (nonatomic) BOOL pausesIncomingScene;

/**
 Pause the outgoing Scene during the transition, defaults to YES.
 */
@property (nonatomic) BOOL pausesOutgoingScene;


@end
