/*
     File: RegionsViewController.h
*/

#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface RegionsViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, CLLocationManagerDelegate, UINavigationBarDelegate> {

}

@property (nonatomic, retain) IBOutlet MKMapView *regionsMapView;
@property (nonatomic, retain) IBOutlet UITableView *updatesTableView;
@property (nonatomic, retain) NSMutableArray *updateEvents;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) IBOutlet UINavigationBar *navigationBar;

- (IBAction)switchViews;
- (IBAction)addRegion;
- (void)updateWithEvent:(NSString *)event;

@end
