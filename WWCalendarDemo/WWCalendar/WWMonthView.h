//
//  WWMonthView.h
//  WWCalendarDemo
//
//  Created by 王万鹏 on 2019/12/4.
//  Copyright © 2019 王万鹏. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WWDayCell.h"

typedef void(^SendSelectDate)(NSDate *selDate);

@interface WWMonthView : UIView

@property (nonatomic, strong) NSDate *currentDate;          //当前月份
@property (nonatomic, strong) NSDate *selectDate;           //选中日期
@property (nonatomic, copy) SendSelectDate sendSelectDate;  //回传选中日期
@property (nonatomic, assign) CalendarType type;            //日历模式
@property (nonatomic, strong) NSArray *eventArray;          //事件数组

- (instancetype)initWithFrame:(CGRect)frame Date:(NSDate *)date;

@end

