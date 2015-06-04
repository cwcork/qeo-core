/*
 * Copyright (c) 2014 - Qeo LLC
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
#ifndef _MOCKDEVICEINFO_WRITER_H
#define _MOCKDEVICEINFO_WRITER_H

#include "unity.h"
#include "deviceinfo_writer.h"

void Mockdeviceinfo_writer_Init(void);
void Mockdeviceinfo_writer_Destroy(void);
void Mockdeviceinfo_writer_Verify(void);




#define qeo_deviceinfo_publish_Ignore() qeo_deviceinfo_publish_CMockIgnore(__LINE__)
void qeo_deviceinfo_publish_CMockIgnore(UNITY_LINE_TYPE cmock_line);
#define qeo_deviceinfo_publish_Expect(factory) qeo_deviceinfo_publish_CMockExpect(__LINE__, factory)
void qeo_deviceinfo_publish_CMockExpect(UNITY_LINE_TYPE cmock_line, qeo_factory_t* factory);
typedef void (* CMOCK_qeo_deviceinfo_publish_CALLBACK)(qeo_factory_t* factory, int cmock_num_calls);
void qeo_deviceinfo_publish_StubWithCallback(CMOCK_qeo_deviceinfo_publish_CALLBACK Callback);
#define qeo_deviceinfo_destruct_Ignore() qeo_deviceinfo_destruct_CMockIgnore(__LINE__)
void qeo_deviceinfo_destruct_CMockIgnore(UNITY_LINE_TYPE cmock_line);
#define qeo_deviceinfo_destruct_Expect(factory) qeo_deviceinfo_destruct_CMockExpect(__LINE__, factory)
void qeo_deviceinfo_destruct_CMockExpect(UNITY_LINE_TYPE cmock_line, qeo_factory_t* factory);
typedef void (* CMOCK_qeo_deviceinfo_destruct_CALLBACK)(qeo_factory_t* factory, int cmock_num_calls);
void qeo_deviceinfo_destruct_StubWithCallback(CMOCK_qeo_deviceinfo_destruct_CALLBACK Callback);

#endif