/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, NSDictionary, CLLocationManager, CLHeading;



@interface PLLocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSInteger _managerRefCount;
    NSMutableArray *_locationPendingPaths;
    CLHeading *_lastHeading;
    NSDictionary *_supportDOPInfo;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (id)location;
- (id)locationEXIFDictionary;
- (id)locationString;
- (void)addLocationToImageAtPathWhenAvailable:(id)arg1;
- (void)_updatePendingImagePaths;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 usingSupportInfo:(id)arg4;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)_locationlessImageFinishedWriting:(id)arg1 withError:(id)arg2 atPath:(id)arg3;

@end
