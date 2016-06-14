/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKInkThumbnailRenderer : NSObject

+ (bool)_drawDebugPatternInGLContext:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)_drawPath:(id)arg1 atScale:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inkColor:(id)arg4 backgroundColor:(id)arg5 inContext:(struct CGContext { }*)arg6;
+ (void)_interpolateDrawing:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 ignoreWidth:(bool)arg4 ellipseHandler:(id /* block */)arg5;
+ (struct CGPath { }*)_newStrokedInterpolatedPathWithDrawing:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 ignoreWidth:(bool)arg4;
+ (id)imageForDrawing:(id)arg1 fittingInSize:(struct CGSize { double x1; double x2; })arg2 ignoreWidth:(bool)arg3 color:(id)arg4 highFidelity:(bool)arg5;
+ (id)imageForDrawingUsingCG:(id)arg1 fittingInSize:(struct CGSize { double x1; double x2; })arg2 ignoreWidth:(bool)arg3 color:(id)arg4;
+ (id)imageForDrawingUsingGL:(id)arg1 fittingInSize:(struct CGSize { double x1; double x2; })arg2 ignoreWidth:(bool)arg3 color:(id)arg4;
+ (double)scaleToFitDrawing:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGSize { double x1; double x2; })sizeForDrawing:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2 ignoreWidth:(bool)arg3;

@end