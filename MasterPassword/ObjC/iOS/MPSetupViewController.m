/**
 * Copyright Maarten Billemont (http://www.lhunath.com, lhunath@lyndir.com)
 *
 * See the enclosed file LICENSE for license information (LGPLv3). If you did
 * not receive this file, see http://www.gnu.org/licenses/lgpl-3.0.txt
 *
 * @author   Maarten Billemont <lhunath@lyndir.com>
 * @license  http://www.gnu.org/licenses/lgpl-3.0.txt
 */

//
//  MPSetupViewController.h
//  MPSetupViewController
//
//  Created by lhunath on 2013-04-11.
//  Copyright, lhunath (Maarten Billemont) 2013. All rights reserved.
//

#import "MPSetupViewController.h"
#import "MPiOSAppDelegate.h"
#import "MPAppDelegate_Store.h"

@implementation MPSetupViewController

- (void)viewDidAppear:(BOOL)animated {

    [[LocalyticsSession sharedLocalyticsSession] tagScreen:@"Setup"];

    [super viewDidAppear:animated];

    if (self.cloudSwitch && [[MPiOSConfig get].iCloudDecided boolValue])
        self.cloudSwitch.on = [MPiOSAppDelegate get].storeManager.cloudEnabled;
    if (self.rememberLoginSwitch)
        self.rememberLoginSwitch.on = [[MPiOSConfig get].rememberLogin boolValue];
}

- (void)viewWillDisappear:(BOOL)animated {

    [super viewWillDisappear:animated];

    if (self.cloudSwitch) {
        [MPiOSConfig get].iCloudDecided = @YES;
        [MPiOSAppDelegate get].storeManager.cloudEnabled = self.cloudSwitch.on;
    }
    if (self.rememberLoginSwitch)
        [MPiOSConfig get].rememberLogin = @(self.rememberLoginSwitch.on);
}

- (IBAction)close:(UIBarButtonItem *)sender {

    [MPiOSConfig get].showSetup = @NO;
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (IBAction)showGuide:(UIBarButtonItem *)sender {

    [MPiOSConfig get].showSetup = @NO;
    [self dismissViewControllerAnimated:YES completion:^{
        [[MPiOSAppDelegate get] showGuide];
    }];
}

@end
