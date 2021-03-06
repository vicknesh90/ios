//
//  Candle.h
//  ch03-LighttheCandle
//
//  Created by JeongHoon Byun on 11. 2. 20..
//  Copyright 2011 CJInternet. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Candle : NSObject {
	BOOL candleState;
	UIImage *candleOffImage;
	UIImage *candleOnImage;
}

@property (assign) BOOL candleState;
@property (retain) UIImage *candleOffImage;
@property (retain) UIImage *candleOnImage;

@end
