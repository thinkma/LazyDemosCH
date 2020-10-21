//
//  FacebookImagePicker.h
//  FavorExchange
//
//  Created by Akshit on 17/02/14.
//  Copyright (c) 2014 Sujal Bandhara. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FBImagePickerControllerDelegate<NSObject>
@required

// The picker does not dismiss itself; the client dismisses it in these callbacks.
// The delegate will receive one or the other, but not both, depending whether the user
// confirms or cancels.

- (void)imagePickerControllerdidFinishPickingImage:(NSMutableArray *)arrayRealImages;

@end


@interface FacebookImagePicker : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

/**
 *  Delegate of Current class
 */
@property NSObject <FBImagePickerControllerDelegate> *delegate;


/**
 *  Contains photos list for Facebook album
 */
@property (strong, nonatomic) NSArray *arrayFacebookImagesForAlbum;

/**
 *  Tells that how many images are already selected for Adding in Exchange Card
 */
@property (assign, readwrite) int intAlreadySelectedImagesCount;

/**
 *  Contains Facebook album's name
 */
@property (strong, nonatomic) NSString *strAlbumName;

/**
 *  Contains Facebook album's ID
 */
@property (strong, nonatomic) NSString *strAlbumID;

/**
 *  Contains Photos from Facebook Album
 */
@property (strong, nonatomic) IBOutlet UICollectionView *clnPhotos;


/**
 *  Contains Currently selected Photos from Facebook Album
 */
@property (strong, nonatomic) NSMutableArray *arraySelectedPhotos;

@end
