//
//  PaintViaOpenGLESTexture.h
//  OpenGLDemo
//
//  Created by zj－db0465 on 15/8/17.
//  Copyright (c) 2015年 zj-db0352. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PaintViaOpenGLESTextureDelegate <NSObject>

- (void)drawCGPointViaOpenGLESTexture:(CGPoint)point inFrame:(CGRect)rect;

- (void)drawCGPointsViaOpenGLESTexture:(NSArray *)points inFrame:(CGRect)rect;

- (void)addImageViaOpenGLESTexture:(UIImage *)image inFrame:(CGRect)rect;

@end

@interface PaintViaOpenGLESTexture : UIView

@property (nonatomic, weak) id<PaintViaOpenGLESTextureDelegate> delegate;

@end
