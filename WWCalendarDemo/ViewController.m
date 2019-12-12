//
//  ViewController.m
//  WWCalendarDemo
//
//  Created by 王万鹏 on 2019/12/4.
//  Copyright © 2019 王万鹏. All rights reserved.
//

#import "ViewController.h"
#import "WWCalendarView.h"

@interface ViewController ()

@property (nonatomic, strong) WWCalendarView *calendar;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _calendar = [[WWCalendarView alloc] initWithFrame:CGRectMake(0, 100, [UIScreen mainScreen].bounds.size.width, [WWCalendarView getMonthTotalHeight:[NSDate date] type:CalendarType_Month]) Date:[NSDate date] Type:CalendarType_Month];
    __weak typeof(_calendar) weakCalendar = _calendar;
    _calendar.refreshH = ^(CGFloat viewH) {
        [UIView animateWithDuration:0.3 animations:^{
            weakCalendar.frame = CGRectMake(0, 100, [UIScreen mainScreen].bounds.size.width, viewH);
        }];
        
    };
    _calendar.sendSelectDate = ^(NSDate *selDate) {
        NSLog(@"%@",[[YXDateHelpObject manager] getStrFromDateFormat:@"yyyy-MM-dd" Date:selDate]);
    };
    [self.view addSubview:_calendar];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
