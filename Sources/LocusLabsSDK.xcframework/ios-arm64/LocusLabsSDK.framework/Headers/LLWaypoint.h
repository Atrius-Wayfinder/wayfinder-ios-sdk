//
// Created by Rafal Hotlos on 30/03/2018.
//  Copyright © 2018-2021 LocusLabs, Inc. All rights reserved.
//  Copyright © 2021 Acuity Brands, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LLPosition.h"

@class LLLatLng;

/**
 *  A waypoint along a navigation path.
 */
@interface LLWaypoint : LLPosition

/**
 *  The distance, in meters, this waypoint is from the previous one.
 */
@property (nonatomic, readonly) NSNumber *distance;

/**
 *  The estimated time, in minutes, to travel from the previous waypoint to this one.
 */
@property (nonatomic, readonly) NSNumber *eta;

/**
 *  A boolean flag which is true if this waypoint was specified as a destination.
 */
@property (nonatomic, readonly) NSNumber *isDestination;

/**
 *  A boolean flag which is true if this waypoint was specified as a portal.
 */
@property (nonatomic, readonly) NSNumber *isPortal;

/**
 *  The portal type.
 */
@property (nonatomic, readonly) NSString *portalType;

/**
 *  The details.
 */
@property (nonatomic, readonly) NSString *details;

/**
 *  The action.
 */
@property (nonatomic, readonly) NSString *action;

/**
 *  The difference between levels from the previous waypoint to this one.
 */
@property (nonatomic, readonly) NSNumber *levelDifference;

/**
 *  A specific path to use to get to the next waypoint.
 */
@property (nonatomic, readonly) NSArray *curvePath;

/**
 * Does the waypoint go through a "securityCheckpoint".
 */
@property (nonatomic, readonly) NSNumber *securityCheckpoint;

/**
 * The queue type id of the queue this step goes through, for example <code>LLQueueTypeSecurityLane</code> for a security checkpoint.
 * nil if the step doesn't go through a queue.
 */
@property (nonatomic, readonly) NSString *queueTypeId;

/**
 * The id of the POI this step goes through, for example the security checkpoint lane, or nil if there is none.
 *
 * Load it with [LLPOIDatabase loadPOI:completion:] and call [LLPOI availableQueueSubtypeIdsForQueueTypeId:] with queueTypeId
 * to list the lanes available at that checkpoint.
 */
@property (nonatomic, readonly) NSString *poiId;

@end
