//
//  SCPUpdateReaderSoftwareDelegate.h
//  StripeTerminal
//
//  Created by Ben Guo on 6/13/18.
//  Copyright © 2018 Stripe. All rights reserved.
//
//  Use of this SDK is subject to the Stripe Terminal Terms:
//  https://stripe.com/terminal/legal
//

#import <Foundation/Foundation.h>

#import "SCPBlocks.h"
#import "SCPTerminal.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Implement this protocol to handle updates when checking for and installing
 reader software updates.
 
 You must implement the ability to update your reader's software in your app.
 Though we expect required software updates to be very rare, by using Stripe
 Terminal, you are obligated to include this functionality.

 @see https://stripe.com/docs/terminal/readers/bbpos-chipper2xbt#software-updates-and-releases
 */
NS_SWIFT_NAME(ReaderSoftwareUpdateDelegate)
@protocol SCPReaderSoftwareUpdateDelegate <NSObject>


/**
 The terminal reported progress on a reader software update.

 @param terminal            The originating terminal.
 @param progress            An estimate of the progress of the software update
 (in the range [0, 1]).
 */
- (void)terminal:(SCPTerminal *)terminal
didReportReaderSoftwareUpdateProgress:(float)progress NS_SWIFT_NAME(terminal(_:didReportReaderSoftwareUpdateProgress:));

@end

NS_ASSUME_NONNULL_END
