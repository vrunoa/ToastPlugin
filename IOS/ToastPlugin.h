#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>
#import "iToast.h"


@interface ToastPlugin : CDVPlugin {
    
    NSString* callbackID;  
    UIAlertView *alert;
}


@property (nonatomic, copy) NSString* callbackID;
@property (nonatomic, copy) UIAlertView *alert;

@end
