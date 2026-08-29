//
//  AWHBBVideoDownloadManager.h
//  TestWH
//
//  Created by 王恒 on 2025/11/29.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AWHBBDownloadState) {
    AWHBBDownloadStateNone,       // 未开始
    AWHBBDownloadStateWaiting,    // 等待中
    AWHBBDownloadStateDownloading,// 下载中
    AWHBBDownloadStatePaused,     // 已暂停
    AWHBBDownloadStateCompleted,  // 下载完成
    AWHBBDownloadStateFailed      // 下载失败
};

@class AWHBBVideoDownloadManager;
@protocol AWHBBVideoDownloadDelegate <NSObject>
/// 下载进度回调
- (void)downloadManager:(AWHBBVideoDownloadManager *)manager
           progressWithUrl:(NSString *)url
                  progress:(float)progress;
/// 下载状态回调
- (void)downloadManager:(AWHBBVideoDownloadManager *)manager
           stateChangedWithUrl:(NSString *)url
                         state:(AWHBBDownloadState)state
                          path:(NSString *)filePath;
@end


@interface AWHBBVideoDownloadManager : NSObject

/// 添加下载任务
- (void)addDownloadTaskWithUrl:(NSString *)url
                     delegate:(id<AWHBBVideoDownloadDelegate>)delegate;

/// 暂停下载
- (void)pauseDownloadWithUrl:(NSString *)url;

/// 恢复下载
- (void)resumeDownloadWithUrl:(NSString *)url;

/// 取消下载（删除临时文件）
- (void)cancelDownloadWithUrl:(NSString *)url;

/// 获取下载状态
- (AWHBBDownloadState)getDownloadStateWithUrl:(NSString *)url;

/// 获取已下载文件路径
- (NSString *)getFilePathWithUrl:(NSString *)url;

/// 保存视频到相册
- (void)saveVideoToAlbumWithFilePath:(NSString *)filePath completion:(void(^)(BOOL success, NSString *errorMsg))completion;

@end

