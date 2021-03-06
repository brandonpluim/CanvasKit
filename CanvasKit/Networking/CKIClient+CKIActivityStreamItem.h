//
//  CKIClient+CKIActivityStreamItem.h
//  CanvasKit
//
//  Created by Jason Larsen on 11/12/13.
//  Copyright (c) 2013 Instructure. All rights reserved.
//

#import "CKIClient.h"

@class RACSignal;

@interface CKIClient (CKIActivityStreamItem)

/**
 Fetches the activity stream for the current user.
 
 @param success success block returning a paged response of CKIActivityStreamItem
 @param failure failure block for handling error
 */
- (RACSignal *)fetchActivityStream;

@end
