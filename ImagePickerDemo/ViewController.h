//
//  ViewController.h
//  ImagePickerDemo
//
//  Created by Krupa-iMac on 20/05/14.
//  Copyright (c) 2014 TheAppGuruz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIImagePickerController *ipc;
    UIPopoverController *popover;
}

@property (weak, nonatomic) IBOutlet UIButton *btnGallery;
@property (weak, nonatomic) IBOutlet UIButton *btnCamera;
@property (weak, nonatomic) IBOutlet UIImageView *ivPickedImage;

@end