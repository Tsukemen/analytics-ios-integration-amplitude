#import <Foundation/Foundation.h>
#import <Analytics/SEGIntegrationFactory.h>

NS_ASSUME_NONNULL_BEGIN

@interface SEGAmplitudeIntegrationFactory : NSObject<SEGIntegrationFactory>

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
