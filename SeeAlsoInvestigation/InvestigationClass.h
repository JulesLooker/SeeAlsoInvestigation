//
//  InvestigationClass.h
//  SeeAlsoInvestigation
//
//  Created by Jules Looker on 03/12/2011.
//  Copyright (c) 2011 The Interface Works. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Used for investigation
 
 Document1 <- This links to static document fine, so it's recognised.
 
 TO SEE PROBLEM: Replace AMP with an @ in next line. Error will occur in build log.    
 
 AMPsee Document1 <- I expect this line to add Document1 to companion guide for the class.
 
 */

@interface InvestigationClass : NSObject

@end
