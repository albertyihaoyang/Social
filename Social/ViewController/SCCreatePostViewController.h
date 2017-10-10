//
//  SCCreatePostViewController.h
//  Social
//
//  Created by 杨以皓 on 10/7/17.
//  Copyright © 2017 yyh. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

