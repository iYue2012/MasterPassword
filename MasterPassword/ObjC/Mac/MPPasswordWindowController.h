//
//  MPPasswordWindowController.h
//  MasterPassword-Mac
//
//  Created by Maarten Billemont on 04/03/12.
//  Copyright (c) 2012 Lyndir. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MPPasswordWindowController : NSWindowController<NSTextFieldDelegate>

@property(nonatomic, weak) IBOutlet NSTextField *siteField;
@property(nonatomic, weak) IBOutlet NSTextField *contentField;
@property(nonatomic, weak) IBOutlet NSTextField *tipField;
@property(nonatomic, weak) IBOutlet NSView *contentContainer;
@property(nonatomic, weak) IBOutlet NSProgressIndicator *progressView;
@property(nonatomic, weak) IBOutlet NSTextField *userLabel;

- (IBAction)reload:(id)sender;

@end
