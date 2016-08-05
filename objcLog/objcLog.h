//
//  objcLog.h
//  objcLog
//
//  Created by FTET on 16/8/5.
//  Copyright © 2016年 vilyever. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for objcLog.
FOUNDATION_EXPORT double objcLogVersionNumber;

//! Project version string for objcLog.
FOUNDATION_EXPORT const unsigned char objcLogVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <objcLog/PublicHeader.h>

#pragma mark VDLog
#if !VDLog
#define VDLog(frmt, ...) \
NSLog(@"%@    【Method:(%s) —— Line:%d】", [NSString stringWithFormat:frmt, ##__VA_ARGS__], __FUNCTION__, __LINE__)
#endif
