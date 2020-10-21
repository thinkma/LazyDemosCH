//
//  AddOverlayViewController.h
//  VideoEditingPart2
//
//  Created by Abdul Azeem Khan on 1/24/13.
//  Copyright (c) 2013 com.datainvent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommonVideoViewController.h"

@interface AddOverlayViewController : CommonVideoViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *frameSelectSegment;

- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end
