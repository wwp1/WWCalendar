//
//  WWDayCell.h
//  WWCalendarDemo
//
//  Created by 王万鹏 on 2019/12/4.
//  Copyright © 2019 王万鹏. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WWDateHelpObject.h"

static CGFloat const dayCellH = 40;//日期cell高度

typedef enum : NSUInteger {
    CalendarType_Week,
    CalendarType_Month,
} CalendarType;


@interface WWDayCell : UICollectionViewCell

@property (nonatomic, strong) NSDate *currentDate;  //当月或当周日期
@property (nonatomic, strong) NSDate *selectDate;   //选择日期
@property (nonatomic, strong) NSDate *cellDate;     //cell显示日期
@property (nonatomic, assign) CalendarType type;    //选择类型
@property (nonatomic, strong) NSArray *eventArray;  //事件数组

@end

