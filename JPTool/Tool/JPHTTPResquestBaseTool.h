//
//  JPHTTPResquestBaseTool.h
//  community_lightkey_ios
//
//  Created by KC on 16/9/1.
//  Copyright © 2016年 KC. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>

@interface JPHTTPResquestBaseTool : AFHTTPSessionManager
//单例
+ (instancetype)sharedManager;

/**
 *  get请求
 *
 *  @param url        接口url
 *  @param parameters 参数
 *  @param success    请求成功的block
 *  @param failure    请求失败的block
 */
+ (void)get:(NSString *)url parameter:(id )parameters success:(void(^)(id responseObject))success faliure:(void(^)(id error))failure;

/**
 *  post请求
 *
 *  @param url        接口url
 *  @param parameters 参数
 *  @param success    请求成功的block
 *  @param failure    请求失败的block
 */
+ (void)post:(NSString *)url parameters:(id)parameters success:(void(^)(id responseObject))success faliure:(void(^)(id error))failure;

/**
 *  文件上传
 *
 *  @param url        接口url
 *  @param parameters 参数
 *  @param block      图片data
 *  @param success    请求成功的block
 *  @param failure    请求失败的block
 */
+ (void )post:(NSString *)url parameters:(id)parameters  constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block success:(void (^)(id responseObject))success faliure:(void (^)(id error))failure;


/**
 *  文件下载
 *
 *  @param request       下载请求
 *  @param ProgressBlock 下载进度block
 *  @param savePath      储存路径
 *  @param failure       下载失败block
 */
+ (void)downloadTaskWithUrl:(NSString *)url progress:(void (^)(id downloadProgress))ProgressBlock savePath:(NSString *)savePath  completionHandler:(void (^)(NSURLResponse *response ,NSURL *filePath))completion  error:(void (^)(id error))failure;
@end