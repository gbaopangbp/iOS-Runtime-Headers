/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, GEOMapServiceTraits, NSString;

@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket> {
    bool_shiftLocationsIfNeeded;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) GEOMapRegion * resultBoundingRegion;
@property(readonly) NSString * searchQuery;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (id)searchQuery;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;

@end
