//
//  MPMainViewController.h
//  MasterPassword
//
//  Created by Maarten Billemont on 24/11/11.
//  Copyright (c) 2011 Lyndir. All rights reserved.
//

#import <MessageUI/MessageUI.h>
#import "MPTypeViewController.h"
#import "MPElementListSearchController.h"

@interface MPMainViewController : UIViewController<MPTypeDelegate, UITextFieldDelegate, MPElementListDelegate, UIWebViewDelegate, UIGestureRecognizerDelegate>

@property(assign, nonatomic) BOOL siteInfoHidden;
@property(strong, nonatomic) IBOutlet MPElementListSearchController *searchDelegate;
@property(strong, nonatomic) IBOutlet UIPanGestureRecognizer *pullDownGesture;
@property(strong, nonatomic) IBOutlet UIPanGestureRecognizer *pullUpGesture;
@property(weak, nonatomic) IBOutlet UITextField *contentField;
@property(weak, nonatomic) IBOutlet UIButton *typeButton;
@property(weak, nonatomic) IBOutlet UIWebView *helpView;
@property(weak, nonatomic) IBOutlet UILabel *siteName;
@property(weak, nonatomic) IBOutlet UILabel *passwordCounter;
@property(weak, nonatomic) IBOutlet UIButton *passwordIncrementer;
@property(weak, nonatomic) IBOutlet UIButton *passwordEdit;
@property(weak, nonatomic) IBOutlet UIButton *passwordUpgrade;
@property(weak, nonatomic) IBOutlet UIView *contentContainer;
@property(weak, nonatomic) IBOutlet UIView *displayContainer;
@property(weak, nonatomic) IBOutlet UIView *helpContainer;
@property(weak, nonatomic) IBOutlet UIView *contentTipContainer;
@property(weak, nonatomic) IBOutlet UIView *loginNameTipContainer;
@property(weak, nonatomic) IBOutlet UIView *alertContainer;
@property(weak, nonatomic) IBOutlet UILabel *alertTitle;
@property(weak, nonatomic) IBOutlet UITextView *alertBody;
@property(weak, nonatomic) IBOutlet UILabel *contentTipBody;
@property(weak, nonatomic) IBOutlet UILabel *loginNameTipBody;
@property(weak, nonatomic) IBOutlet UIImageView *toolTipEditIcon;
@property(weak, nonatomic) IBOutlet UIView *searchTipContainer;
@property(weak, nonatomic) IBOutlet UIView *actionsTipContainer;
@property(weak, nonatomic) IBOutlet UIView *typeTipContainer;
@property(weak, nonatomic) IBOutlet UIView *toolTipContainer;
@property(weak, nonatomic) IBOutlet UILabel *toolTipBody;
@property(weak, nonatomic) IBOutlet UIView *loginNameContainer;
@property(weak, nonatomic) IBOutlet UITextField *loginNameField;
@property(weak, nonatomic) IBOutlet UIButton *passwordUser;
@property(weak, nonatomic) IBOutlet UIView *outdatedAlertContainer;
@property(weak, nonatomic) IBOutlet UIImageView *outdatedAlertBack;
@property(weak, nonatomic) IBOutlet UIButton *outdatedAlertCloseButton;
@property(weak, nonatomic) IBOutlet UIImageView *pullUpView;
@property(weak, nonatomic) IBOutlet UIImageView *pullDownView;

@property(copy, nonatomic) void (^contentTipCleanup)(BOOL finished);
@property(copy, nonatomic) void (^toolTipCleanup)(BOOL finished);

- (IBAction)copyContent;
- (IBAction)incrementPasswordCounter;
- (IBAction)resetPasswordCounter:(UILongPressGestureRecognizer *)sender;
- (IBAction)editLoginName:(UILongPressGestureRecognizer *)sender;
- (IBAction)editPassword;
- (IBAction)closeAlert;
- (IBAction)upgradePassword;
- (IBAction)action:(UIBarButtonItem *)sender;
- (IBAction)toggleUser;
- (IBAction)searchOutdatedElements;
- (IBAction)closeOutdatedAlert;
- (IBAction)infoOutdatedAlert;

- (void)toggleHelpAnimated:(BOOL)animated;
- (void)setHelpHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)setHelpChapter:(NSString *)chapter;
- (IBAction)panHelpDown:(UIPanGestureRecognizer *)sender;
- (IBAction)panHelpUp:(UIPanGestureRecognizer *)sender;

@end
