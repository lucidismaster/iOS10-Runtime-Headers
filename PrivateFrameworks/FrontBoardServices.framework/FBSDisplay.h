/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplay : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    CADisplay * _caDisplay;
    unsigned int  _displayID;
    bool  _external;
    double  _orientation;
    int  _pid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _scale;
    unsigned int  _seed;
    long long  _tags;
    unsigned long long  _type;
    NSString * _uniqueID;
}

@property (nonatomic, readonly, retain) CADisplay *caDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int displayID;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double orientation;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (nonatomic, readonly) double scale;
@property (nonatomic) unsigned int seed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tags;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *uniqueID;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)_CADisplayForId:(unsigned int)arg1;
+ (id)_nameForDisplayType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (id)_nameForDisplayType;
- (unsigned long long)_typeFromTags:(unsigned long long)arg1;
- (id)caDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)displayID;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCADisplay:(id)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isAirPlayDisplay;
- (bool)isCarDisplay;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isExternal;
- (bool)isHiddenDisplay;
- (bool)isMainDisplay;
- (bool)isMusicOnlyDisplay;
- (bool)isRestrictedAirPlayDisplay;
- (bool)isiPodOnlyDisplay;
- (double)orientation;
- (int)pid;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (double)scale;
- (unsigned int)seed;
- (void)setSeed:(unsigned int)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)tags;
- (unsigned long long)type;
- (id)uniqueID;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)UIScreen;
- (id)_screen;

@end