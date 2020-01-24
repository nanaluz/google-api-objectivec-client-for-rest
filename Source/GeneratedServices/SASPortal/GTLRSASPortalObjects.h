// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   SAS Portal API (sasportal/v1alpha1)
// Documentation:
//   https://developers.google.com/spectrum-access-system/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRSASPortal_Assignment;
@class GTLRSASPortal_Customer;
@class GTLRSASPortal_Device;
@class GTLRSASPortal_DeviceAirInterface;
@class GTLRSASPortal_DeviceConfig;
@class GTLRSASPortal_DeviceGrant;
@class GTLRSASPortal_DeviceModel;
@class GTLRSASPortal_DpaMoveList;
@class GTLRSASPortal_FrequencyRange;
@class GTLRSASPortal_InstallationParams;
@class GTLRSASPortal_Node;
@class GTLRSASPortal_Operation_Metadata;
@class GTLRSASPortal_Operation_Response;
@class GTLRSASPortal_Policy;
@class GTLRSASPortal_Status;
@class GTLRSASPortal_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRSASPortal_Device.state

/**
 *  Device de-registered with SAS.
 *
 *  Value: "DEREGISTERED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_Device_State_Deregistered;
/**
 *  Unspecified state.
 *
 *  Value: "DEVICE_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_Device_State_DeviceStateUnspecified;
/**
 *  Device registered with SAS.
 *
 *  Value: "REGISTERED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_Device_State_Registered;
/**
 *  Device created in the SAS Portal, however, not yet registered
 *  with SAS.
 *
 *  Value: "RESERVED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_Device_State_Reserved;

// ----------------------------------------------------------------------------
// GTLRSASPortal_DeviceAirInterface.radioTechnology

/** Value: "CAMBIUM_NETWORKS" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_CambiumNetworks;
/** Value: "DOODLE_CBRS" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_DoodleCbrs;
/** Value: "E_UTRA" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_EUtra;
/** Value: "FOUR_G_BBW_SAA_1" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_FourGBbwSaa1;
/** Value: "NR" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_Nr;
/** Value: "RADIO_TECHNOLOGY_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_RadioTechnologyUnspecified;

// ----------------------------------------------------------------------------
// GTLRSASPortal_DeviceConfig.category

/**
 *  Category A.
 *
 *  Value: "DEVICE_CATEGORY_A"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryA;
/**
 *  Category B.
 *
 *  Value: "DEVICE_CATEGORY_B"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryB;
/**
 *  Unspecified device category.
 *
 *  Value: "DEVICE_CATEGORY_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryUnspecified;

// ----------------------------------------------------------------------------
// GTLRSASPortal_DeviceConfig.measurementCapabilities

/** Value: "MEASUREMENT_CAPABILITY_RECEIVED_POWER_WITH_GRANT" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_MeasurementCapabilities_MeasurementCapabilityReceivedPowerWithGrant;
/** Value: "MEASUREMENT_CAPABILITY_RECEIVED_POWER_WITHOUT_GRANT" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_MeasurementCapabilities_MeasurementCapabilityReceivedPowerWithoutGrant;
/** Value: "MEASUREMENT_CAPABILITY_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_MeasurementCapabilities_MeasurementCapabilityUnspecified;

// ----------------------------------------------------------------------------
// GTLRSASPortal_DeviceConfig.state

/** Value: "DEVICE_CONFIG_STATE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_State_DeviceConfigStateUnspecified;
/** Value: "DRAFT" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_State_Draft;
/** Value: "FINAL" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceConfig_State_Final;

// ----------------------------------------------------------------------------
// GTLRSASPortal_DeviceGrant.channelType

/** Value: "CHANNEL_TYPE_GAA" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypeGaa;
/** Value: "CHANNEL_TYPE_PAL" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypePal;
/** Value: "CHANNEL_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRSASPortal_DeviceGrant.state

/**
 *  The device is currently transmitting.
 *
 *  Value: "GRANT_STATE_AUTHORIZED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateAuthorized;
/**
 *  The grant has expired.
 *
 *  Value: "GRANT_STATE_EXPIRED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateExpired;
/**
 *  The grant has been granted but the device is not heartbeating on it.
 *
 *  Value: "GRANT_STATE_GRANTED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateGranted;
/**
 *  The grant has been suspended by the SAS.
 *
 *  Value: "GRANT_STATE_SUSPENDED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateSuspended;
/**
 *  The grant has been terminated by the SAS.
 *
 *  Value: "GRANT_STATE_TERMINATED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateTerminated;
/** Value: "GRANT_STATE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateUnspecified;

// ----------------------------------------------------------------------------
// GTLRSASPortal_InstallationParams.heightType

/**
 *  AGL height is measured relative to the ground level.
 *
 *  Value: "HEIGHT_TYPE_AGL"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_InstallationParams_HeightType_HeightTypeAgl;
/**
 *  AMSL height is measured relative to the mean sea level.
 *
 *  Value: "HEIGHT_TYPE_AMSL"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_InstallationParams_HeightType_HeightTypeAmsl;
/**
 *  Unspecified height type.
 *
 *  Value: "HEIGHT_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRSASPortal_InstallationParams_HeightType_HeightTypeUnspecified;

/**
 *  Associates `members` with a `role`.
 */
@interface GTLRSASPortal_Assignment : GTLRObject

/**
 *  The identities the role is assigned to. It can have the following
 *  values:
 *  * `{user_email}`: An email address that represents a specific
 *  Google account. For example: `alice\@gmail.com`.
 *  * `{group_email}`: An email address that represents a Google
 *  group. For example, `viewers\@gmail.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/** Required. Role that is assigned to `members`. */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  Request for BulkCreateDevice method.
 */
@interface GTLRSASPortal_BulkCreateDeviceRequest : GTLRObject

/**
 *  Required. A csv with each row representing a [device]. Each row must
 *  conform to the regulations described on CreateDeviceRequest's device field.
 */
@property(nonatomic, copy, nullable) NSString *csv;

@end


/**
 *  Response for BulkCreateDevice method.
 */
@interface GTLRSASPortal_BulkCreateDeviceResponse : GTLRObject

/** Required. The devices that were imported. */
@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_Device *> *devices;

@end


/**
 *  Request for CreateSignedDevice method.
 */
@interface GTLRSASPortal_CreateSignedDeviceRequest : GTLRObject

/**
 *  Required. JSON Web Token signed using a CPI private key. Payload
 *  must be the JSON encoding of the [Device].
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *encodedDevice;

/**
 *  Required. Unique installer id (cpiId) from the Certified Professional
 *  Installers database.
 */
@property(nonatomic, copy, nullable) NSString *installerId;

@end


/**
 *  Entity representing a SAS customer.
 */
@interface GTLRSASPortal_Customer : GTLRObject

/** Required. Name of the organization that the customer entity represents. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** Output only. Resource name of the customer. */
@property(nonatomic, copy, nullable) NSString *name;

/** User IDs used by the devices belonging to this customer. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *sasUserIds;

@end


/**
 *  GTLRSASPortal_Device
 */
@interface GTLRSASPortal_Device : GTLRObject

/**
 *  Output only. Current configuration of the device as registered to the SAS.
 */
@property(nonatomic, strong, nullable) GTLRSASPortal_DeviceConfig *activeConfig;

/** Device display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The FCC identifier of the device. */
@property(nonatomic, copy, nullable) NSString *fccId;

/** Output only. Grants held by the device. */
@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_DeviceGrant *> *grants;

/** Output only. The resource path name. */
@property(nonatomic, copy, nullable) NSString *name;

/** Configuration of the device, as specified via SAS Portal API. */
@property(nonatomic, strong, nullable) GTLRSASPortal_DeviceConfig *preloadedConfig;

/**
 *  A serial number assigned to the device by the device
 *  manufacturer.
 */
@property(nonatomic, copy, nullable) NSString *serialNumber;

/**
 *  Output only. Device state.
 *
 *  Likely values:
 *    @arg @c kGTLRSASPortal_Device_State_Deregistered Device de-registered with
 *        SAS. (Value: "DEREGISTERED")
 *    @arg @c kGTLRSASPortal_Device_State_DeviceStateUnspecified Unspecified
 *        state. (Value: "DEVICE_STATE_UNSPECIFIED")
 *    @arg @c kGTLRSASPortal_Device_State_Registered Device registered with SAS.
 *        (Value: "REGISTERED")
 *    @arg @c kGTLRSASPortal_Device_State_Reserved Device created in the SAS
 *        Portal, however, not yet registered
 *        with SAS. (Value: "RESERVED")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Information about the device's air interface.
 */
@interface GTLRSASPortal_DeviceAirInterface : GTLRObject

/**
 *  This field specifies the radio access technology that is used for the CBSD.
 *  Conditional
 *
 *  Likely values:
 *    @arg @c kGTLRSASPortal_DeviceAirInterface_RadioTechnology_CambiumNetworks
 *        Value "CAMBIUM_NETWORKS"
 *    @arg @c kGTLRSASPortal_DeviceAirInterface_RadioTechnology_DoodleCbrs Value
 *        "DOODLE_CBRS"
 *    @arg @c kGTLRSASPortal_DeviceAirInterface_RadioTechnology_EUtra Value
 *        "E_UTRA"
 *    @arg @c kGTLRSASPortal_DeviceAirInterface_RadioTechnology_FourGBbwSaa1
 *        Value "FOUR_G_BBW_SAA_1"
 *    @arg @c kGTLRSASPortal_DeviceAirInterface_RadioTechnology_Nr Value "NR"
 *    @arg @c kGTLRSASPortal_DeviceAirInterface_RadioTechnology_RadioTechnologyUnspecified
 *        Value "RADIO_TECHNOLOGY_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *radioTechnology;

/**
 *  This field is related to the radioTechnology field and provides the air
 *  interface specification that the CBSD is compliant with at the time of
 *  registration.
 *  Optional
 */
@property(nonatomic, copy, nullable) NSString *supportedSpec;

@end


/**
 *  Information about the device configuration.
 */
@interface GTLRSASPortal_DeviceConfig : GTLRObject

/** Information about this device's air interface. */
@property(nonatomic, strong, nullable) GTLRSASPortal_DeviceAirInterface *airInterface;

/** The call sign of the device operator. */
@property(nonatomic, copy, nullable) NSString *callSign;

/**
 *  FCC category of the device.
 *
 *  Likely values:
 *    @arg @c kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryA Category A.
 *        (Value: "DEVICE_CATEGORY_A")
 *    @arg @c kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryB Category B.
 *        (Value: "DEVICE_CATEGORY_B")
 *    @arg @c kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryUnspecified
 *        Unspecified device category. (Value: "DEVICE_CATEGORY_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *category;

/** Installation parameters for the device. */
@property(nonatomic, strong, nullable) GTLRSASPortal_InstallationParams *installationParams;

/**
 *  Output-only. Whether the configuration has been signed by a CPI.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isSigned;

/** Measurement reporting capabilities of the device. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *measurementCapabilities;

/** Information about this device model. */
@property(nonatomic, strong, nullable) GTLRSASPortal_DeviceModel *model;

/**
 *  State of the configuration.
 *
 *  Likely values:
 *    @arg @c kGTLRSASPortal_DeviceConfig_State_DeviceConfigStateUnspecified
 *        Value "DEVICE_CONFIG_STATE_UNSPECIFIED"
 *    @arg @c kGTLRSASPortal_DeviceConfig_State_Draft Value "DRAFT"
 *    @arg @c kGTLRSASPortal_DeviceConfig_State_Final Value "FINAL"
 */
@property(nonatomic, copy, nullable) NSString *state;

/** Output-only. The last time the device configuration was edited. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

/** Output only. The identifier of a device user. */
@property(nonatomic, copy, nullable) NSString *userId;

@end


/**
 *  Device grant. It is an authorization provided by the Spectrum
 *  Access System to a device to transmit using specified operating
 *  parameters after a successful heartbeat by the device.
 */
@interface GTLRSASPortal_DeviceGrant : GTLRObject

/**
 *  Type of channel used.
 *
 *  Likely values:
 *    @arg @c kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypeGaa Value
 *        "CHANNEL_TYPE_GAA"
 *    @arg @c kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypePal Value
 *        "CHANNEL_TYPE_PAL"
 *    @arg @c kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypeUnspecified
 *        Value "CHANNEL_TYPE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *channelType;

/** The expiration time of the grant. */
@property(nonatomic, strong, nullable) GTLRDateTime *expireTime;

/** The transmission frequency range. */
@property(nonatomic, strong, nullable) GTLRSASPortal_FrequencyRange *frequencyRange;

/**
 *  Maximum Equivalent Isotropically Radiated Power (EIRP) permitted
 *  by the grant. The maximum EIRP is in units of dBm/MHz. The
 *  value of maxEirp represents the average (RMS) EIRP that would be
 *  measured by the procedure defined in FCC part 96.41(e)(3).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxEirp;

/** The DPA move lists on which this grant appears. */
@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_DpaMoveList *> *moveList;

/**
 *  State of the grant.
 *
 *  Likely values:
 *    @arg @c kGTLRSASPortal_DeviceGrant_State_GrantStateAuthorized The device
 *        is currently transmitting. (Value: "GRANT_STATE_AUTHORIZED")
 *    @arg @c kGTLRSASPortal_DeviceGrant_State_GrantStateExpired The grant has
 *        expired. (Value: "GRANT_STATE_EXPIRED")
 *    @arg @c kGTLRSASPortal_DeviceGrant_State_GrantStateGranted The grant has
 *        been granted but the device is not heartbeating on it. (Value:
 *        "GRANT_STATE_GRANTED")
 *    @arg @c kGTLRSASPortal_DeviceGrant_State_GrantStateSuspended The grant has
 *        been suspended by the SAS. (Value: "GRANT_STATE_SUSPENDED")
 *    @arg @c kGTLRSASPortal_DeviceGrant_State_GrantStateTerminated The grant
 *        has been terminated by the SAS. (Value: "GRANT_STATE_TERMINATED")
 *    @arg @c kGTLRSASPortal_DeviceGrant_State_GrantStateUnspecified Value
 *        "GRANT_STATE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Information about the model of the device.
 */
@interface GTLRSASPortal_DeviceModel : GTLRObject

/** The firmware version of the device. */
@property(nonatomic, copy, nullable) NSString *firmwareVersion;

/** The hardware version of the device. */
@property(nonatomic, copy, nullable) NSString *hardwareVersion;

/** The name of the device model. */
@property(nonatomic, copy, nullable) NSString *name;

/** The software version of the device. */
@property(nonatomic, copy, nullable) NSString *softwareVersion;

/** The name of the device vendor. */
@property(nonatomic, copy, nullable) NSString *vendor;

@end


/**
 *  An entry in a DPA's move list.
 */
@interface GTLRSASPortal_DpaMoveList : GTLRObject

/** The ID of the DPA. */
@property(nonatomic, copy, nullable) NSString *dpaId;

/** The frequency range that the move list affects. */
@property(nonatomic, strong, nullable) GTLRSASPortal_FrequencyRange *frequencyRange;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRSASPortal_Empty : GTLRObject
@end


/**
 *  Frequency range from `low_frequency` to `high_frequency`.
 */
@interface GTLRSASPortal_FrequencyRange : GTLRObject

/**
 *  The highest frequency of the frequency range in MHz.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *highFrequencyMhz;

/**
 *  The lowest frequency of the frequency range in MHz.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lowFrequencyMhz;

@end


/**
 *  Request for GenerateSecret method]
 *  [spectrum.sas.portal.v1alpha1.DeviceManager.GenerateSecret].
 */
@interface GTLRSASPortal_GenerateSecretRequest : GTLRObject
@end


/**
 *  Response for GenerateSecret method.
 */
@interface GTLRSASPortal_GenerateSecretResponse : GTLRObject

/**
 *  The secret generated by the string and used by
 *  [ValidateInstaller] method.
 */
@property(nonatomic, copy, nullable) NSString *secret;

@end


/**
 *  Request message for `GetPolicy` method.
 */
@interface GTLRSASPortal_GetPolicyRequest : GTLRObject

/** Required. The resource for which the policy is being requested. */
@property(nonatomic, copy, nullable) NSString *resource;

@end


/**
 *  Information about the device installation parameters.
 */
@interface GTLRSASPortal_InstallationParams : GTLRObject

/**
 *  Boresight direction of the horizontal plane of the antenna in
 *  degrees with respect to true north. The value of this parameter
 *  is an integer with a value between 0 and 359 inclusive. A value
 *  of 0 degrees means true north; a value of 90 degrees means
 *  east. This parameter is optional for Category A devices and
 *  conditional for Category B devices.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *antennaAzimuth;

/**
 *  3-dB antenna beamwidth of the antenna in the horizontal-plane in
 *  degrees. This parameter is an unsigned integer having a value
 *  between 0 and 360 (degrees) inclusive; it is optional for
 *  Category A devices and conditional for Category B devices.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *antennaBeamwidth;

/**
 *  Antenna downtilt in degrees and is an integer with a value
 *  between -90 and +90 inclusive; a negative value means the antenna
 *  is tilted up (above horizontal). This parameter is optional for
 *  Category A devices and conditional for Category B devices.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *antennaDowntilt;

/**
 *  Peak antenna gain in dBi. This parameter is an integer with a
 *  value between -127 and +128 (dBi) inclusive.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *antennaGain;

/**
 *  If an external antenna is used, the antenna model is optionally
 *  provided in this field. The string has a maximum length of 128
 *  octets.
 */
@property(nonatomic, copy, nullable) NSString *antennaModel;

/**
 *  This parameter is the maximum device EIRP in units of dBm/10MHz
 *  and is an integer with a value between -127 and +47 (dBm/10 MHz)
 *  inclusive. If not included, SAS interprets it as maximum
 *  allowable EIRP in units of dBm/10MHz for device category.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *eirpCapability;

/**
 *  Device antenna height in meters. When the heightType parameter
 *  value is "AGL", the antenna height should be given relative to
 *  ground level. When the heightType parameter value is "AMSL", it
 *  is given with respect to WGS84 datum.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *height;

/**
 *  Specifies how the height is measured.
 *
 *  Likely values:
 *    @arg @c kGTLRSASPortal_InstallationParams_HeightType_HeightTypeAgl AGL
 *        height is measured relative to the ground level. (Value:
 *        "HEIGHT_TYPE_AGL")
 *    @arg @c kGTLRSASPortal_InstallationParams_HeightType_HeightTypeAmsl AMSL
 *        height is measured relative to the mean sea level. (Value:
 *        "HEIGHT_TYPE_AMSL")
 *    @arg @c kGTLRSASPortal_InstallationParams_HeightType_HeightTypeUnspecified
 *        Unspecified height type. (Value: "HEIGHT_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *heightType;

/**
 *  A positive number in meters to indicate accuracy of the device
 *  antenna horizontal location. This optional parameter should only
 *  be present if its value is less than the FCC requirement of 50
 *  meters.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *horizontalAccuracy;

/**
 *  Whether the device antenna is indoor or not. True: indoor. False:
 *  outdoor.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *indoorDeployment;

/**
 *  Latitude of the device antenna location in degrees relative to
 *  the WGS 84 datum. The allowed range is from -90.000000 to
 *  +90.000000. Positive values represent latitudes north of the
 *  equator; negative values south of the equator.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *latitude;

/**
 *  Longitude of the device antenna location. in degrees relative to
 *  the WGS 84 datum. The allowed range is from -180.000000 to
 *  +180.000000. Positive values represent longitudes east of the
 *  prime meridian; negative values west of the prime
 *  meridian.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *longitude;

/**
 *  A positive number in meters to indicate accuracy of the device
 *  antenna vertical location. This optional parameter should only be
 *  present if its value is less than the FCC requirement of 3
 *  meters.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *verticalAccuracy;

@end


/**
 *  Response for `ListCustomers`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "customers" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRSASPortal_ListCustomersResponse : GTLRCollectionObject

/**
 *  The list of customers that
 *  match the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_Customer *> *customers;

/**
 *  A pagination token returned from a previous call to ListCustomers method
 *  that indicates from
 *  where listing should continue. If the field is missing or empty, it means
 *  there are no more customers.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response for ListDevices method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "devices" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRSASPortal_ListDevicesResponse : GTLRCollectionObject

/**
 *  The devices that match the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_Device *> *devices;

/**
 *  A pagination token returned from a previous call to ListDevices method
 *  that indicates from where listing should continue. If the field
 *  is missing or empty, it means there is no more devices.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response for ListNodes method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "nodes" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRSASPortal_ListNodesResponse : GTLRCollectionObject

/**
 *  A pagination token returned from a previous call to
 *  ListNodes method
 *  that indicates from where listing should continue. If the field is missing
 *  or empty, it means there is no more nodes.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The nodes that match the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_Node *> *nodes;

@end


/**
 *  Request for MoveDevice method.
 */
@interface GTLRSASPortal_MoveDeviceRequest : GTLRObject

/**
 *  Required. The name of the new parent resource (Node or Customer) to
 *  reparent the device under.
 */
@property(nonatomic, copy, nullable) NSString *destination;

@end


/**
 *  Request for MoveNode method.
 */
@interface GTLRSASPortal_MoveNodeRequest : GTLRObject

/**
 *  Required. The name of the new parent resource node or Customer) to reparent
 *  the node under.
 */
@property(nonatomic, copy, nullable) NSString *destination;

@end


/**
 *  The Node.
 */
@interface GTLRSASPortal_Node : GTLRObject

/** The node's display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** Output only. Resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/** User ids used by the devices belonging to this node. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *sasUserIds;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRSASPortal_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRSASPortal_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRSASPortal_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRSASPortal_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRSASPortal_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRSASPortal_Operation_Response : GTLRObject
@end


/**
 *  Defines an access control policy to the resources.
 */
@interface GTLRSASPortal_Policy : GTLRObject

@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_Assignment *> *assignments;

/**
 *  The [etag] is used for optimistic concurrency control as a way to
 *  help prevent simultaneous updates of a policy from overwriting
 *  each other. It is strongly suggested that systems make use of
 *  the [etag] in the read-modify-write cycle to perform policy
 *  updates in order to avoid race conditions: An [etag] is returned
 *  in the response to [GetPolicy], and systems are expected to put
 *  that etag in the request to [SetPolicy] to ensure that their
 *  change will be applied to the same version of the policy.
 *  If no [etag] is provided in the call to [SetPolicy], then the
 *  existing policy is overwritten blindly.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

@end


/**
 *  Request message for `SetPolicy` method.
 */
@interface GTLRSASPortal_SetPolicyRequest : GTLRObject

/** Required. The policy to be applied to the `resource`. */
@property(nonatomic, strong, nullable) GTLRSASPortal_Policy *policy;

/**
 *  Required. The resource for which the policy is being specified. This policy
 *  replaces any existing policy.
 */
@property(nonatomic, copy, nullable) NSString *resource;

@end


/**
 *  Request for SignDevice method.
 */
@interface GTLRSASPortal_SignDeviceRequest : GTLRObject

/**
 *  Required. The device to sign.
 *  The device fields name, fcc_id and serial_number must be set.
 */
@property(nonatomic, strong, nullable) GTLRSASPortal_Device *device;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRSASPortal_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSASPortal_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRSASPortal_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRSASPortal_Status_Details_Item : GTLRObject
@end


/**
 *  Request message for `TestPermissions` method.
 */
@interface GTLRSASPortal_TestPermissionsRequest : GTLRObject

/** The set of permissions to check for the `resource`. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

/** Required. The resource for which the permissions are being requested. */
@property(nonatomic, copy, nullable) NSString *resource;

@end


/**
 *  Response message for `TestPermissions` method.
 */
@interface GTLRSASPortal_TestPermissionsResponse : GTLRObject

/** A set of permissions that the caller is allowed. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Request for UpdateSignedDevice method.
 */
@interface GTLRSASPortal_UpdateSignedDeviceRequest : GTLRObject

/**
 *  Required. The JSON Web Token signed using a CPI private key. Payload
 *  must be the JSON encoding
 *  of the device.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *encodedDevice;

/**
 *  Required. Unique installer ID (CPI ID) from the Certified Professional
 *  Installers database.
 */
@property(nonatomic, copy, nullable) NSString *installerId;

@end


/**
 *  Request for ValidateInstaller method.
 */
@interface GTLRSASPortal_ValidateInstallerRequest : GTLRObject

/**
 *  Required. JSON Web Token signed using a CPI private key. Payload
 *  must include a "secret" claim whose value is the secret.
 */
@property(nonatomic, copy, nullable) NSString *encodedSecret;

/**
 *  Required. Unique installer id (cpiId) from the Certified
 *  Professional Installers database.
 */
@property(nonatomic, copy, nullable) NSString *installerId;

/** Required. Secret returned by the GenerateSecret method. */
@property(nonatomic, copy, nullable) NSString *secret;

@end


/**
 *  Response for ValidateInstaller method]
 *  [spectrum.sas.portal.v1alpha1.DeviceManager.ValidateInstaller].
 */
@interface GTLRSASPortal_ValidateInstallerResponse : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
