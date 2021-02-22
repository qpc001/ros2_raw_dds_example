// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file UUID.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _UNIQUE_IDENTIFIER_MSGS_MSG_UUID_H_
#define _UNIQUE_IDENTIFIER_MSGS_MSG_UUID_H_


#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(UUID_SOURCE)
#define UUID_DllAPI __declspec( dllexport )
#else
#define UUID_DllAPI __declspec( dllimport )
#endif // UUID_SOURCE
#else
#define UUID_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define UUID_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace unique_identifier_msgs {
    namespace msg {
        typedef std::array<uint8_t, 16> uint8__16;
        /*!
         * @brief This class represents the structure UUID defined by the user in the IDL file.
         * @ingroup UUID
         */
        class UUID
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport UUID();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~UUID();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object unique_identifier_msgs::msg::UUID that will be copied.
             */
            eProsima_user_DllExport UUID(
                    const UUID& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object unique_identifier_msgs::msg::UUID that will be copied.
             */
            eProsima_user_DllExport UUID(
                    UUID&& x);

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object unique_identifier_msgs::msg::UUID that will be copied.
             */
            eProsima_user_DllExport UUID& operator =(
                    const UUID& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object unique_identifier_msgs::msg::UUID that will be copied.
             */
            eProsima_user_DllExport UUID& operator =(
                    UUID&& x);

            /*!
             * @brief This function copies the value in member uuid
             * @param _uuid New value to be copied in member uuid
             */
            eProsima_user_DllExport void uuid(
                    const unique_identifier_msgs::msg::uint8__16& _uuid);

            /*!
             * @brief This function moves the value in member uuid
             * @param _uuid New value to be moved in member uuid
             */
            eProsima_user_DllExport void uuid(
                    unique_identifier_msgs::msg::uint8__16&& _uuid);

            /*!
             * @brief This function returns a constant reference to member uuid
             * @return Constant reference to member uuid
             */
            eProsima_user_DllExport const unique_identifier_msgs::msg::uint8__16& uuid() const;

            /*!
             * @brief This function returns a reference to member uuid
             * @return Reference to member uuid
             */
            eProsima_user_DllExport unique_identifier_msgs::msg::uint8__16& uuid();

            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const unique_identifier_msgs::msg::UUID& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            unique_identifier_msgs::msg::uint8__16 m_uuid;
        };
    } // namespace msg
} // namespace unique_identifier_msgs

#endif // _UNIQUE_IDENTIFIER_MSGS_MSG_UUID_H_