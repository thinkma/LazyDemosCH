//
//  SXTMyTableView.h
//  SXT
//
//  Created by 赵金鹏 on 16/8/17.
//  Copyright © 2016年 赵金鹏. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^exitBtnMethodBlock)();
@interface SXTMyTableView : UITableView
@property (copy, nonatomic) exitBtnMethodBlock exitBlock;
@end
