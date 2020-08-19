//
//  IASKSpecifierValuesViewController.h
//  InAppSettingsKit
//
//  Copyright (c) 2009-2020:
//  Luc Vandal, Edovia Inc., http://www.edovia.com
//  Ortwin Gentz, FutureTap GmbH, http://www.futuretap.com
//  All rights reserved.
// 
//  It is appreciated but not required that you give credit to Luc Vandal and Ortwin Gentz, 
//  as the original authors of this code. You can give credit in a blog post, a tweet or on 
//  a info page of your app. Also, the original authors appreciate letting them know if you use this code.
//
//  This code is licensed under the BSD license that is available at: http://www.opensource.org/licenses/bsd-license.php
//

#import <InAppSettingsKit/IASKSpecifier.h>
#import <InAppSettingsKit/IASKViewController.h>

// PC ADD
@class IASKSpecifier;
@class IASKSettingsReader;
@class IASKSpecifierValuesViewController;

@protocol IASKSpecifierValuesDelegate
@optional

- (void)specifierValuesViewControllerDidEnd:(IASKSpecifierValuesViewController*_Nonnull)sender;
- (void)specifierValuesUpdateTableCell:(UITableViewCell*_Nonnull)cell atRow:(NSInteger)row forSpecifier:(IASKSpecifier*_Nonnull)specifier;

@end
// PC ADD - end

@interface IASKSpecifierValuesViewController : UITableViewController <IASKViewController>

- (nonnull id)initWithSpecifier:(nonnull IASKSpecifier*)specifier;

// PC ADD
@property (nonatomic, assign) IBOutlet id _Nullable delegate;

@end
