//
//  FavoriteViewController.h
//  LeXiang100 Direct Selling
//
//  Created by ZengYifei on 14-6-1.
//  Copyright (c) 2014年 ZengYifei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"
@interface FavoriteViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate>{
    UIImageView *imgViewMetal;
    UITextView * la;
    UIAlertView * alert;
    int pressedCell;
}
@property (nonatomic,strong)UITableView * tableview;
@property (nonatomic,strong)NSMutableArray * dataSource;
@property (strong,nonatomic)DetailViewController * detailView;

@end
