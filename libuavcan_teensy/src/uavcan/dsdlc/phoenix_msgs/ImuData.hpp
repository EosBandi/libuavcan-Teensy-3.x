/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\CyberPalin\Desktop\uavcan\phoenix_msgs\5003.ImuData.uavcan
 */

#ifndef UAVCAN_PHOENIX_MSGS_IMUDATA_HPP_INCLUDED
#define UAVCAN_PHOENIX_MSGS_IMUDATA_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan\Timestamp.hpp>

/******************************* Source text **********************************
# Simpler Raw IMU data with timestamps.
#
# Data acquisition timestamp in the bus shared time base.
#
uavcan.Timestamp timestamp

#
# Angular velocity samples in radian/second.
# The samples are represented in the body frame, the axes are ordered as follows:
#   1. angular velocity around X (roll rate)
#   2. angular velocity around Y (pitch rate)
#   3. angular velocity around Z (yaw rate)
#
float16[3] rate_gyro               # Latest sample, radian/second

#
# Linear acceleration samples in meter/(second^2).
# The samples are represented in the body frame, the axes are ordered as follows:
#   1. linear acceleration along X (forward positive)
#   2. linear acceleration along Y (right positive)
#   3. linear acceleration along Z (down positive)
#
# !Without gravity vector!
float16[3] lin_acceleration            # Latest sample, meter/(second^2)

#
# Angular samples in degrees.
# The samples are represented in the body frame, the axes are ordered as follows:
#   1. angle around X (roll)
#   2. angle around Y (pitch)
#   3. angle around Z (yaw)
#
float16[3] euler                   # Latest sample, degrees
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.phoenix_msgs.ImuData
uavcan.Timestamp timestamp
saturated float16[3] rate_gyro
saturated float16[3] lin_acceleration
saturated float16[3] euler
******************************************************************************/

#undef timestamp
#undef rate_gyro
#undef lin_acceleration
#undef euler

namespace uavcan
{
namespace phoenix_msgs
{

template <int _tmpl>
struct UAVCAN_EXPORT ImuData_
{
    typedef const ImuData_<_tmpl>& ParameterType;
    typedef ImuData_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::Timestamp timestamp;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 3 > rate_gyro;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 3 > lin_acceleration;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 3 > euler;
    };

    enum
    {
        MinBitLen
            = FieldTypes::timestamp::MinBitLen
            + FieldTypes::rate_gyro::MinBitLen
            + FieldTypes::lin_acceleration::MinBitLen
            + FieldTypes::euler::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::timestamp::MaxBitLen
            + FieldTypes::rate_gyro::MaxBitLen
            + FieldTypes::lin_acceleration::MaxBitLen
            + FieldTypes::euler::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::timestamp >::Type timestamp;
    typename ::uavcan::StorageType< typename FieldTypes::rate_gyro >::Type rate_gyro;
    typename ::uavcan::StorageType< typename FieldTypes::lin_acceleration >::Type lin_acceleration;
    typename ::uavcan::StorageType< typename FieldTypes::euler >::Type euler;

    ImuData_()
        : timestamp()
        , rate_gyro()
        , lin_acceleration()
        , euler()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<200 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 5003 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.phoenix_msgs.ImuData";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool ImuData_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        timestamp == rhs.timestamp &&
        rate_gyro == rhs.rate_gyro &&
        lin_acceleration == rhs.lin_acceleration &&
        euler == rhs.euler;
}

template <int _tmpl>
bool ImuData_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(timestamp, rhs.timestamp) &&
        ::uavcan::areClose(rate_gyro, rhs.rate_gyro) &&
        ::uavcan::areClose(lin_acceleration, rhs.lin_acceleration) &&
        ::uavcan::areClose(euler, rhs.euler);
}

template <int _tmpl>
int ImuData_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::encode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::rate_gyro::encode(self.rate_gyro, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::lin_acceleration::encode(self.lin_acceleration, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::euler::encode(self.euler, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ImuData_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::decode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::rate_gyro::decode(self.rate_gyro, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::lin_acceleration::decode(self.lin_acceleration, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::euler::decode(self.euler, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature ImuData_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x7F5EEDDFF94DE6A8ULL);

    FieldTypes::timestamp::extendDataTypeSignature(signature);
    FieldTypes::rate_gyro::extendDataTypeSignature(signature);
    FieldTypes::lin_acceleration::extendDataTypeSignature(signature);
    FieldTypes::euler::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef ImuData_<0> ImuData;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::phoenix_msgs::ImuData > _uavcan_gdtr_registrator_ImuData;

}

} // Namespace phoenix_msgs
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::phoenix_msgs::ImuData >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::phoenix_msgs::ImuData::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::phoenix_msgs::ImuData >::stream(Stream& s, ::uavcan::phoenix_msgs::ImuData::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "timestamp: ";
    YamlStreamer< ::uavcan::phoenix_msgs::ImuData::FieldTypes::timestamp >::stream(s, obj.timestamp, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "rate_gyro: ";
    YamlStreamer< ::uavcan::phoenix_msgs::ImuData::FieldTypes::rate_gyro >::stream(s, obj.rate_gyro, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "lin_acceleration: ";
    YamlStreamer< ::uavcan::phoenix_msgs::ImuData::FieldTypes::lin_acceleration >::stream(s, obj.lin_acceleration, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "euler: ";
    YamlStreamer< ::uavcan::phoenix_msgs::ImuData::FieldTypes::euler >::stream(s, obj.euler, level + 1);
}

}

namespace uavcan
{
namespace phoenix_msgs
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::phoenix_msgs::ImuData::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::phoenix_msgs::ImuData >::stream(s, obj, 0);
    return s;
}

} // Namespace phoenix_msgs
} // Namespace uavcan

#endif // UAVCAN_PHOENIX_MSGS_IMUDATA_HPP_INCLUDED