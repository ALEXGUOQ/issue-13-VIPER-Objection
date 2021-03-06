//
//  VTDListTableViewCellPresenter.h
//  objectionViper
//
//  Created by 崔 明辉 on 15/1/20.
//  Copyright (c) 2015年 多玩事业部 iOS开发组 YY Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VTDListTableViewCell.h"
#import "VTDListUpcomingItem.h"

@class VTDListTableViewCell;

@interface VTDListTableViewCellPresenter : NSObject

@property (nonatomic, weak) VTDListTableViewCell *userInterface;

@property (nonatomic, strong) VTDListUpcomingItem *upcomingItem;

@end
