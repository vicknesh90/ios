//
//  LightTheCandleAppDelegate.h
//  LightTheCandle
//
//  Created by nephilim on 11. 2. 10..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LightTheCandleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	
	
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

#pragma mark -
#pragma mark 이벤트 처리 

- (IBAction) nextWalkingFrame:(id)sender;

@end

