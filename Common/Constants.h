#import <Foundation/Foundation.h>
#import "MITBuildInfo.h"
#import "Secret.h"

// common URLs
extern NSString * const MITMobileWebDomainString;
extern NSString * const MITMobileWebAPIURLString;
extern NSString * const KurogoAPIURLString;

// keys for NSUserDefaults dictionary go here (app preferences)
extern NSString * const MITModuleTabOrderKey;
extern NSString * const MITActiveModuleKey;
extern NSString * const MITNewsTwoFirstRunKey;
extern NSString * const MITEventsModuleInSortOrderKey;
extern NSString * const EmergencyInfoKey;
extern NSString * const EmergencyLastUpdatedKey;
extern NSString * const EmergencyUnreadCountKey;
extern NSString * const ShuttleSubscriptionsKey;
extern NSString * const StellarTermKey;
extern NSString * const TwitterShareUsernameKey;
extern NSString * const MITDeviceIdKey;
extern NSString * const MITPassCodeKey;
extern NSString * const DeviceTokenKey;
extern NSString * const MITUnreadNotificationsKey;
extern NSString * const PushNotificationSettingsKey;
extern NSString * const MITModulesSavedStateKey;
extern NSString * const ShakeToReturnPrefKey;
extern NSString * const MapTypePrefKey;

extern NSString * const MITInternalURLScheme;


// module tags
extern NSString * const CalendarTag;
extern NSString * const EmergencyTag;
extern NSString * const CampusMapTag;
extern NSString * const NewsOfficeTag;
extern NSString * const VideoTag;
extern NSString * const SocialTag;
extern NSString * const DirectoryTag;
extern NSString * const StellarTag;
extern NSString * const ShuttleTag;
extern NSString * const MobileWebTag;
extern NSString * const SettingsTag;
extern NSString * const AboutTag;
extern NSString * const DiningTag;
extern NSString * const SchoolsTag;
extern NSString * const LibrariesTag;

// notification names
extern NSString * const EmergencyInfoDidLoadNotification;
extern NSString * const EmergencyInfoDidFailToLoadNotification;
extern NSString * const EmergencyInfoDidChangeNotification;
extern NSString * const EmergencyContactsDidLoadNotification;

extern NSString * const ShuttleAlertRemoved;

extern NSString * const UnreadBadgeValuesChangeNotification;

extern NSString * const MyStellarAlertNotification;

extern NSString * const kTileServerManagerProjectionIsReady;

// core data entity names

extern NSString * const NewsStoryEntityName;
extern NSString * const NewsCategoryEntityName;
extern NSString * const NewsImageEntityName;
extern NSString * const NewsImageRepEntityName;
extern NSString * const VideoEntityName;
extern NSString * const VideoRelatedPostEntityName;
extern NSString * const VideoRelatedPostCategoryEntityName;
extern NSString * const PersonDetailsEntityName;
extern NSString * const PersonDetailEntityName;
extern NSString * const StellarCourseEntityName;
extern NSString * const StellarClassEntityName;
extern NSString * const StellarClassTimeEntityName;
extern NSString * const StellarStaffMemberEntityName;
extern NSString * const StellarAnnouncementEntityName;
extern NSString * const EmergencyInfoEntityName;
extern NSString * const EmergencyContactEntityName;
extern NSString * const ShuttleRouteEntityName;
extern NSString * const ShuttleStopEntityName;
extern NSString * const ShuttleRouteStopEntityName;
extern NSString * const CalendarEventEntityName;
extern NSString * const CalendarCategoryEntityName;
extern NSString * const CampusMapSearchEntityName;
extern NSString * const CampusMapAnnotationEntityName;
extern NSString * const ShuttleRouteEntityName;
extern NSString * const ShuttleStopEntityName;
extern NSString * const ShuttleRouteStopEntityName;
extern NSString * const LibraryItemEntityName;
extern NSString * const LibraryEntityName;
extern NSString * const LibraryFormatCodeEntityName;
extern NSString * const LibraryLocationCodeEntityName;
extern NSString * const LibraryPubDateCodeEntityName;
extern NSString * const LibraryPhoneEntityName;
extern NSString * const LibraryAliasEntityName;


// local path names for handleLocalPath
extern NSString * const LocalPathMapsSelectedAnnotation;

// resource names
extern NSString * const ImageNameHomeScreenBackground;
extern NSString * const MITImageNameBackground;

extern NSString * const MITImageNameEmail;
extern NSString * const MITImageNameEmailHighlight;
extern NSString * const MITImageNameMap;
extern NSString * const MITImageNameMapHighlight;
extern NSString * const MITImageNamePeople;
extern NSString * const MITImageNamePeopleHighlight;
extern NSString * const MITImageNamePhone;
extern NSString * const MITImageNamePhoneHighlight;
extern NSString * const MITImageNameExternal;
extern NSString * const MITImageNameExternalHighlight;
extern NSString * const MITImageNameEmergency;
extern NSString * const MITImageNameEmergencyHighlight;
extern NSString * const MITImageNameSecure;
extern NSString * const MITImageNameSecureHighlight;

extern NSString * const MITImageNameScrollTabBackgroundOpaque;
extern NSString * const MITImageNameScrollTabBackgroundTranslucent;
extern NSString * const MITImageNameScrollTabLeftEndCap;
extern NSString * const MITImageNameScrollTabRightEndCap;
extern NSString * const MITImageNameScrollTabSelectedTab;

extern NSString * const MITImageNameLeftArrow;
extern NSString * const MITImageNameRightArrow;
extern NSString * const MITImageNameUpArrow;
extern NSString * const MITImageNameDownArrow;

extern NSString * const MITImageNameSubheadBarBackground; 

extern NSString * const MITImageNameSearch;
extern NSString * const MITImageNameBookmark;
extern NSString * const MITImageNameBlank;

// action accessory types

typedef enum {
    MITAccessoryViewEmail,
    MITAccessoryViewMap,
    MITAccessoryViewPeople,
    MITAccessoryViewPhone,
    MITAccessoryViewExternal,
	MITAccessoryViewEmergency,
    MITAccessoryViewSecure,
    MITAccessoryViewBlank
} MITAccessoryViewType;

// errors
extern NSString * const MapsErrorDomain;
#define errMapProjection 0

extern NSString * const ShuttlesErrorDomain;
#define errShuttleRouteNotAvailable 0

extern NSString * const JSONErrorDomain;
#define errJSONParseFailed 0

