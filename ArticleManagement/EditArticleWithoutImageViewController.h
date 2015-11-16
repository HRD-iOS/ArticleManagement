//
//  EditArticleWithoutImageViewController.h
//  ArticleManagement
//
//  Created by Kokpheng on 11/17/15.
//  Copyright © 2015 Yin Kokpheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Article.h"
#import "ArticleManager.h"

@interface EditArticleWithoutImageViewController : UIViewController

@property (strong, nonatomic) Article *article;
@property (weak, nonatomic) IBOutlet UITextField *textFieldTitle;
@property (weak, nonatomic) IBOutlet UITextView *textViewContent;

@end
