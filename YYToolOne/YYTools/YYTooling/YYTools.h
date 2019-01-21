//
//  YYTools.h
//  YYTools
//
//  Created by admin on 2019/1/5.
//  Copyright © 2019年 ArrQ. All rights reserved.
//

#ifndef YYTools_h
#define YYTools_h

// 库
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//bg_BaseVC


//bg_macro


// 屏幕高度适应设置****************

// 获取屏幕的宽

#define bg_SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width

// 获取屏幕的高
#define bg_SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

// 状态栏高度
#define bg_navi_One_Height [[UIApplication sharedApplication] statusBarFrame].size.height
//导航栏+状态高度
#define bg_navi_Two_Height (bg_navi_One_Height == 44 ? 88.f:64.f)
//底部约束高度
#define bg_navi_Three_Height (bg_navi_One_Height == 44? 34.f:0.f)

//存储设置****************
#define bg_UserDefaults [NSUserDefaults standardUserDefaults]
//颜色设置****************
#define bg_Color_hexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define bg_Color_RGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#define bg_Color_RGBA(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]

//字体设置****************
#define bg_Font(_font_) [UIFont systemFontOfSize:_font_]

#define bg_Font_B(kSize) [UIFont fontWithName:@"Helvetica-Bold" size:(kSize)];



//baseVC tool
#import "YYBaseVCHeader.h"

//category tool
#import "YYCategoryHeader.h"


//view tool
#import "YYNoticeViewTool.h"
#import "YYIconImgManagerHeader.h"


#import "YYUrlManagerHeader.h"

#endif /* YYTools_h */
