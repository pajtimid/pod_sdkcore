/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonNetworkUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonNetwork : NSObject

/**
 Signals the remote that the host will disconnect.
 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))disconnectEncoder
NS_SWIFT_NAME(disconnectEncoder());

@end

