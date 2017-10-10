//
//  SCHomeTableViewCell.h
//  Social
//
//  Created by 杨以皓 on 10/1/17.
//  Copyright © 2017 yyh. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell
- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end
