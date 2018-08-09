/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\CyberPalin\Desktop\uavcan\protocol\dynamic_node_id\server\31.RequestVote.uavcan
 */

#ifndef UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_SERVER_REQUESTVOTE_HPP_INCLUDED
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_SERVER_REQUESTVOTE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# THIS DEFINITION IS SUBJECT TO CHANGE.
#
# This type is a part of the Raft consensus algorithm.
# Please refer to the specification for details.
#

#
# Refer to the Raft paper for explanation.
#
uint32 term
uint32 last_log_term
uint8 last_log_index

---

#
# Refer to the Raft paper for explanation.
#
uint32 term
bool vote_granted
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.dynamic_node_id.server.RequestVote
saturated uint32 term
saturated uint32 last_log_term
saturated uint8 last_log_index
---
saturated uint32 term
saturated bool vote_granted
******************************************************************************/

#undef term
#undef last_log_term
#undef last_log_index
#undef term
#undef vote_granted

namespace uavcan
{
namespace protocol
{
namespace dynamic_node_id
{
namespace server
{

struct UAVCAN_EXPORT RequestVote_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 32, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > term;
            typedef ::uavcan::IntegerSpec< 32, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > last_log_term;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > last_log_index;
        };

        enum
        {
            MinBitLen
                = FieldTypes::term::MinBitLen
                + FieldTypes::last_log_term::MinBitLen
                + FieldTypes::last_log_index::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::term::MaxBitLen
                + FieldTypes::last_log_term::MaxBitLen
                + FieldTypes::last_log_index::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::term >::Type term;
        typename ::uavcan::StorageType< typename FieldTypes::last_log_term >::Type last_log_term;
        typename ::uavcan::StorageType< typename FieldTypes::last_log_index >::Type last_log_index;

        Request_()
            : term()
            , last_log_term()
            , last_log_index()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<72 == MaxBitLen>::check();
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

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 32, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > term;
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > vote_granted;
        };

        enum
        {
            MinBitLen
                = FieldTypes::term::MinBitLen
                + FieldTypes::vote_granted::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::term::MaxBitLen
                + FieldTypes::vote_granted::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::term >::Type term;
        typename ::uavcan::StorageType< typename FieldTypes::vote_granted >::Type vote_granted;

        Response_()
            : term()
            , vote_granted()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<33 == MaxBitLen>::check();
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

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 31 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.dynamic_node_id.server.RequestVote";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    RequestVote_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool RequestVote_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        term == rhs.term &&
        last_log_term == rhs.last_log_term &&
        last_log_index == rhs.last_log_index;
}

template <int _tmpl>
bool RequestVote_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(term, rhs.term) &&
        ::uavcan::areClose(last_log_term, rhs.last_log_term) &&
        ::uavcan::areClose(last_log_index, rhs.last_log_index);
}

template <int _tmpl>
int RequestVote_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::term::encode(self.term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::last_log_term::encode(self.last_log_term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::last_log_index::encode(self.last_log_index, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int RequestVote_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::term::decode(self.term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::last_log_term::decode(self.last_log_term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::last_log_index::decode(self.last_log_index, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool RequestVote_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        term == rhs.term &&
        vote_granted == rhs.vote_granted;
}

template <int _tmpl>
bool RequestVote_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(term, rhs.term) &&
        ::uavcan::areClose(vote_granted, rhs.vote_granted);
}

template <int _tmpl>
int RequestVote_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::term::encode(self.term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::vote_granted::encode(self.vote_granted, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int RequestVote_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::term::decode(self.term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::vote_granted::decode(self.vote_granted, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature RequestVote_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xCDDE07BB89A56356ULL);

    Request::FieldTypes::term::extendDataTypeSignature(signature);
    Request::FieldTypes::last_log_term::extendDataTypeSignature(signature);
    Request::FieldTypes::last_log_index::extendDataTypeSignature(signature);

    Response::FieldTypes::term::extendDataTypeSignature(signature);
    Response::FieldTypes::vote_granted::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef RequestVote_ RequestVote;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::dynamic_node_id::server::RequestVote > _uavcan_gdtr_registrator_RequestVote;

}

} // Namespace server
} // Namespace dynamic_node_id
} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request >::stream(Stream& s, ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request::ParameterType obj, const int level)
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
    s << "term: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request::FieldTypes::term >::stream(s, obj.term, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "last_log_term: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request::FieldTypes::last_log_term >::stream(s, obj.last_log_term, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "last_log_index: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request::FieldTypes::last_log_index >::stream(s, obj.last_log_index, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response >::stream(Stream& s, ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response::ParameterType obj, const int level)
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
    s << "term: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response::FieldTypes::term >::stream(s, obj.term, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "vote_granted: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response::FieldTypes::vote_granted >::stream(s, obj.vote_granted, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace dynamic_node_id
{
namespace server
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::RequestVote::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace server
} // Namespace dynamic_node_id
} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_SERVER_REQUESTVOTE_HPP_INCLUDED