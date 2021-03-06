/*
 * Copyright (c) 2016 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKSAMPLESUPPORT_H
#define _MOCKSAMPLESUPPORT_H

#include "unity.h"
#include "samplesupport.h"

void Mocksamplesupport_Init(void);
void Mocksamplesupport_Destroy(void);
void Mocksamplesupport_Verify(void);




#define data_alloc_IgnoreAndReturn(cmock_retval) data_alloc_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void data_alloc_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeocore_data_t* cmock_to_return);
#define data_alloc_ExpectAndReturn(type, prep_data, cmock_retval) data_alloc_CMockExpectAndReturn(__LINE__, type, prep_data, cmock_retval)
void data_alloc_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, DDS_DynamicType type, int prep_data, qeocore_data_t* cmock_to_return);
typedef qeocore_data_t* (* CMOCK_data_alloc_CALLBACK)(DDS_DynamicType type, int prep_data, int cmock_num_calls);
void data_alloc_StubWithCallback(CMOCK_data_alloc_CALLBACK Callback);
#define data_get_member_IgnoreAndReturn(cmock_retval) data_get_member_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void data_get_member_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define data_get_member_ExpectAndReturn(data, id, value, cmock_retval) data_get_member_CMockExpectAndReturn(__LINE__, data, id, value, cmock_retval)
void data_get_member_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const qeocore_data_t* data, qeocore_member_id_t id, void* value, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_data_get_member_CALLBACK)(const qeocore_data_t* data, qeocore_member_id_t id, void* value, int cmock_num_calls);
void data_get_member_StubWithCallback(CMOCK_data_get_member_CALLBACK Callback);
#define data_set_member_IgnoreAndReturn(cmock_retval) data_set_member_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void data_set_member_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define data_set_member_ExpectAndReturn(data, id, value, cmock_retval) data_set_member_CMockExpectAndReturn(__LINE__, data, id, value, cmock_retval)
void data_set_member_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeocore_data_t* data, qeocore_member_id_t id, const void* value, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_data_set_member_CALLBACK)(qeocore_data_t* data, qeocore_member_id_t id, const void* value, int cmock_num_calls);
void data_set_member_StubWithCallback(CMOCK_data_set_member_CALLBACK Callback);
#define sequence_member_accessor_IgnoreAndReturn(cmock_retval) sequence_member_accessor_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void sequence_member_accessor_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define sequence_member_accessor_ExpectAndReturn(data, index, value, get, cmock_retval) sequence_member_accessor_CMockExpectAndReturn(__LINE__, data, index, value, get, cmock_retval)
void sequence_member_accessor_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeocore_data_t* data, int index, qeocore_data_t** value, int get, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_sequence_member_accessor_CALLBACK)(qeocore_data_t* data, int index, qeocore_data_t** value, int get, int cmock_num_calls);
void sequence_member_accessor_StubWithCallback(CMOCK_sequence_member_accessor_CALLBACK Callback);

#endif
