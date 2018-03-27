//
//  WOCBuyDashStep5ViewController.h
//  Wallofcoins
//
//  Created by Sujal Bandhara on 24/01/18.
//  Copyright (c) 2018 Wallofcoins. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WOCBaseViewController.h"

// Offer List ViewController
@interface WOCBuyDashStep5ViewController : WOCBaseViewController

@property (strong, nonatomic) NSString *discoveryId;
@property (strong, nonatomic) NSString *amount;

@property (weak, nonatomic) IBOutlet UILabel *lblInstruction;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)orderClicked:(id)sender;
- (NSIndexPath*)getIndexPathfromTag:(NSInteger)tag;
@end
