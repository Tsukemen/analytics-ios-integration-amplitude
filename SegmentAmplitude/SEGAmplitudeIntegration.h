#import <Foundation/Foundation.h>
#import <Analytics/SEGIntegration.h>
#import <Amplitude/Amplitude.h>


@interface SEGAmplitudeIntegration : NSObject<SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;
@property (strong) Amplitude *amplitude;

- (id)initWithSettings:(NSDictionary *)settings;

@end
