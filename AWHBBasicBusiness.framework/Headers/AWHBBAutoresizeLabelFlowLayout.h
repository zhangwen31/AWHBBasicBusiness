//
//  AWHBBAutoresizeLabelFlowLayout.h
//  MSSAutoresizeLabelFlow
//
//  Created by Mrss on 15/12/26.
//  Copyright © 2015年 expai. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AWHBBAutoresizeLabelFlowLayoutDelegate <NSObject>

@optional

- (void)layoutFinishWithNumberOfline:(NSInteger)number;

@end

@protocol AWHBBAutoresizeLabelFlowLayoutDataSource <NSObject>

- (NSString *)titleForLabelAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface AWHBBAutoresizeLabelFlowLayout : UICollectionViewFlowLayout

@property (nonatomic,weak) id <AWHBBAutoresizeLabelFlowLayoutDataSource> dataSource;
@property (nonatomic,weak) id <AWHBBAutoresizeLabelFlowLayoutDelegate> delegate;

@end
