//
//  DebugMemoryLeaksAppDelegate.h
//  DebugMemoryLeaks
//
//  Created by Jong Pil Park on 11. 2. 17..
//  Copyright 2011 Lilac Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DebugMemoryLeaksAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

