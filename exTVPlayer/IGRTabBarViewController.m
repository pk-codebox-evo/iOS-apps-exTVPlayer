//
//  IGRTabBarViewController.m
//  exTVPlayer
//
//  Created by Vitalii Parovishnyk on 1/14/16.
//  Copyright © 2016 IGR Software. All rights reserved.
//

#import "IGRTabBarViewController.h"

@interface IGRTabBarViewController () <UITabBarControllerDelegate, UIGestureRecognizerDelegate>

@end

@implementation IGRTabBarViewController

- (void)viewDidLoad
{
	[super viewDidLoad];
	
	self.delegate = self;
}

- (void)tabBarController:(UITabBarController *)tabBarController didSelectViewController:(UIViewController *)viewController
{

}

- (BOOL)canPerformAction:(SEL)action withSender:(nullable id)sender
{
	return YES;
}

@end
