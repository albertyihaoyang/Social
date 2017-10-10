//
//  SCPostDetailViewController.h
//  Social
//
//  Created by 杨以皓 on 10/7/17.
//  Copyright © 2017 yyh. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
