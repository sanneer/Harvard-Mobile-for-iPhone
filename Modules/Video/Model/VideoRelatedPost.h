#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Video;

@interface VideoRelatedPost : NSManagedObject {
@private
}
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * wpid;
@property (nonatomic, retain) NSNumber * sortOrder;
@property (nonatomic, retain) NSString * guid;
@property (nonatomic, retain) Video * video;
@property (nonatomic, retain) NSSet* categories;
- (NSArray *)categoryTitles;

@end
