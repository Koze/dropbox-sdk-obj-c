///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESSharingInfo.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESSharingInfo 

- (instancetype)initWithReadOnly:(NSNumber *)readOnly {

    self = [super init];
    if (self != nil) {
        _readOnly = readOnly;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESSharingInfoSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESSharingInfoSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESSharingInfoSerializer serialize:self] description];
}

@end


@implementation DBXFILESSharingInfoSerializer 

+ (NSDictionary *)serialize:(DBXFILESSharingInfo *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"read_only"] = valueObj.readOnly;

    return jsonDict;
}

+ (DBXFILESSharingInfo *)deserialize:(NSDictionary *)valueDict {
    NSNumber *readOnly = valueDict[@"read_only"];

    return [[DBXFILESSharingInfo alloc] initWithReadOnly:readOnly];
}

@end