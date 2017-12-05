//
//  RNLocale.h
//  RNLocale
//

#import <Foundation/Foundation.h>
#import "React/RCTBridgeModule.h"
#import "React/RCTLog.h"
#import "React/RCTConvert.h"

@interface RCTConvert (NSDateFormatterStyle)
    + (NSDateFormatterStyle)NSDateFormatterStyle:(id)json;
@end

@interface RNLocale : NSObject <RCTBridgeModule>
@end
