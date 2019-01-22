//
//  YYUrlManager.h
//  YYTools
//
//  Created by admin on 2019/1/21.
//  Copyright © 2019年 ArrQ. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AFNetworking.h"

NS_ASSUME_NONNULL_BEGIN

/**请求方式枚举*/
typedef NS_ENUM(NSUInteger,bg_HttpRquestType){
    /**GET请求*/
    bg_HTTP_REQUEST_GET = 0,
    /**POST请求*/
    bg_HTTP_REQUEST_POST,
};

/**请求数据格式枚举*/
typedef NS_ENUM(NSUInteger,bg_HttpRequestSerializer) {
    /**请求数据（默认）为json格式*/
    bg_HttpRequestSerializerJSON,
    /**请求数据为二进制数据*/
    bg_HttpRequestSerializerData,
};
/**响应数据类型枚举*/
typedef NS_ENUM(NSUInteger,bg_HttpResponseType) {
    /**响应数据（默认）为json格式*/
    bg_HttpResponseJSON = 0,
    /**响应数据为二进制数据*/
    bg_HttpResponseData,
};
/**请求成功回调block*/
typedef void(^bg_HttpRequetSuccess)(id responseObject);

/**请求失败回调block*/
typedef void(^bg_HttpRequesError)(NSError *error);
/**返回响应头信息*/
typedef void(^bg_HTTPURLResponse)(NSHTTPURLResponse *response);

@interface YYUrlManager : NSObject


/**
 *  GET请求
 *
 *  @param url           请求地址
 *  @param responseType  返回数据格式
 *  @param params        请求参数
 *  @param success       请求成功的回调
 *  @param failure       请求失败的回调
 *  @param responese     请求响应头
 *  @return 返回的对象可取消请求,调用cancel方法
 */
+ (NSURLSessionDataTask *)GET:(NSString *)url responeseType:(bg_HttpResponseType )responseType parameters:(id)params success:(bg_HttpRequetSuccess)success failure:(bg_HttpRequesError)failure responeseHeader:(bg_HTTPURLResponse)responese;


/**
 *  POST请求
 *
 *  @param url           请求地址
 *  @param responseType  返回数据格式
 *  @param params        请求参数
 *  @param success       请求成功的回调
 *  @param failure       请求失败的回调
 *  @param responese     请求响应头
 *  @return 返回的对象可取消请求,调用cancel方法
 */
+ (NSURLSessionDataTask *)POST:(NSString *)url responeseType:(bg_HttpResponseType )responseType parameters:(id)params success:(bg_HttpRequetSuccess)success failure:(bg_HttpRequesError)failure responeseHeader:(bg_HTTPURLResponse)responese;

/**
 *  取消全部的HTTP请求
 */
+ (void)cancelAllRequest;

/**
 *  取消指定URL的HTTP请求
 */
+ (void)cancelRequestWithURL:(NSString *)URL;


#pragma mark - 设置AFHTTPSessionManager相关属性
#pragma mark 注意: 因为全局只有一个AFHTTPSessionManager实例,所以以下设置方式全局生效
/**
 *  设置请求超时时间:默认为30S
 *
 *  @param time 时长
 */
+ (void)setRequestTimeoutInterval:(NSTimeInterval)time;

/**
 *  设置请求头内容
 *
 *  @param dic 内容字典
 */
+ (void)setHttpHeaderFieldWithDic:(NSDictionary *)dic;

/**
 *  清理cookie
 *
 */
+ (void)clearnCookie;

@end

NS_ASSUME_NONNULL_END
