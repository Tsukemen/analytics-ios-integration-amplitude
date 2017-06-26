#import <Foundation/Foundation.h>
#import <Analytics/SEGIntegration.h>
#import <Amplitude/Amplitude.h>


NS_ASSUME_NONNULL_BEGIN

@interface SEGAmplitudeIntegration : NSObject<SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;
@property (strong) Amplitude *amplitude;

- (instancetype)initWithSettings:(NSDictionary *)settings;

@end

NS_ASSUME_NONNULL_END
