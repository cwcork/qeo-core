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
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#define NO_TEST_ASSERT_EQUAL_MEMORY_MESSAGE
#include "unity.h"
#include "cmock.h"
#include "Mocktypesupport.h"

typedef struct _CMOCK_calculate_member_id_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint32_t ReturnVal;
  char* Expected_name;

} CMOCK_calculate_member_id_CALL_INSTANCE;

typedef struct _CMOCK_qeocore_type_use_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  qeo_retcode_t ReturnVal;
  qeocore_type_t* Expected_type;

} CMOCK_qeocore_type_use_CALL_INSTANCE;

static struct MocktypesupportInstance
{
  int calculate_member_id_IgnoreBool;
  uint32_t calculate_member_id_FinalReturn;
  CMOCK_calculate_member_id_CALLBACK calculate_member_id_CallbackFunctionPointer;
  int calculate_member_id_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE calculate_member_id_CallInstance;
  int qeocore_type_use_IgnoreBool;
  qeo_retcode_t qeocore_type_use_FinalReturn;
  CMOCK_qeocore_type_use_CALLBACK qeocore_type_use_CallbackFunctionPointer;
  int qeocore_type_use_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE qeocore_type_use_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mocktypesupport_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.calculate_member_id_IgnoreBool)
    Mock.calculate_member_id_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.calculate_member_id_CallInstance, cmock_line, "Function 'calculate_member_id' called less times than expected.");
  if (Mock.calculate_member_id_CallbackFunctionPointer != NULL)
    Mock.calculate_member_id_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.qeocore_type_use_IgnoreBool)
    Mock.qeocore_type_use_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.qeocore_type_use_CallInstance, cmock_line, "Function 'qeocore_type_use' called less times than expected.");
  if (Mock.qeocore_type_use_CallbackFunctionPointer != NULL)
    Mock.qeocore_type_use_CallInstance = CMOCK_GUTS_NONE;
}

void Mocktypesupport_Init(void)
{
  Mocktypesupport_Destroy();
}

void Mocktypesupport_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.calculate_member_id_CallbackFunctionPointer = NULL;
  Mock.calculate_member_id_CallbackCalls = 0;
  Mock.qeocore_type_use_CallbackFunctionPointer = NULL;
  Mock.qeocore_type_use_CallbackCalls = 0;
}

uint32_t calculate_member_id(const char* name)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_calculate_member_id_CALL_INSTANCE* cmock_call_instance = (CMOCK_calculate_member_id_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.calculate_member_id_CallInstance);
  Mock.calculate_member_id_CallInstance = CMock_Guts_MemNext(Mock.calculate_member_id_CallInstance);
  if (Mock.calculate_member_id_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.calculate_member_id_FinalReturn;
    Mock.calculate_member_id_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.calculate_member_id_CallbackFunctionPointer != NULL)
  {
    return Mock.calculate_member_id_CallbackFunctionPointer(name, Mock.calculate_member_id_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'calculate_member_id' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_name, name, cmock_line, "Function 'calculate_member_id' called with unexpected value for argument 'name'.");
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_calculate_member_id(CMOCK_calculate_member_id_CALL_INSTANCE* cmock_call_instance, const char* name)
{
  cmock_call_instance->Expected_name = (char*)name;
}

void calculate_member_id_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_calculate_member_id_CALL_INSTANCE));
  CMOCK_calculate_member_id_CALL_INSTANCE* cmock_call_instance = (CMOCK_calculate_member_id_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.calculate_member_id_CallInstance = CMock_Guts_MemChain(Mock.calculate_member_id_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.calculate_member_id_IgnoreBool = (int)1;
}

void calculate_member_id_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const char* name, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_calculate_member_id_CALL_INSTANCE));
  CMOCK_calculate_member_id_CALL_INSTANCE* cmock_call_instance = (CMOCK_calculate_member_id_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.calculate_member_id_CallInstance = CMock_Guts_MemChain(Mock.calculate_member_id_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_calculate_member_id(cmock_call_instance, name);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void calculate_member_id_StubWithCallback(CMOCK_calculate_member_id_CALLBACK Callback)
{
  Mock.calculate_member_id_CallbackFunctionPointer = Callback;
}

qeo_retcode_t qeocore_type_use(qeocore_type_t* type)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_qeocore_type_use_CALL_INSTANCE* cmock_call_instance = (CMOCK_qeocore_type_use_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.qeocore_type_use_CallInstance);
  Mock.qeocore_type_use_CallInstance = CMock_Guts_MemNext(Mock.qeocore_type_use_CallInstance);
  if (Mock.qeocore_type_use_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.qeocore_type_use_FinalReturn;
    memcpy(&Mock.qeocore_type_use_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(qeo_retcode_t));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.qeocore_type_use_CallbackFunctionPointer != NULL)
  {
    return Mock.qeocore_type_use_CallbackFunctionPointer(type, Mock.qeocore_type_use_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'qeocore_type_use' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_type), (void*)(type), sizeof(qeocore_type_t), cmock_line, "Function 'qeocore_type_use' called with unexpected value for argument 'type'.");
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_qeocore_type_use(CMOCK_qeocore_type_use_CALL_INSTANCE* cmock_call_instance, qeocore_type_t* type)
{
  cmock_call_instance->Expected_type = type;
}

void qeocore_type_use_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_qeocore_type_use_CALL_INSTANCE));
  CMOCK_qeocore_type_use_CALL_INSTANCE* cmock_call_instance = (CMOCK_qeocore_type_use_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.qeocore_type_use_CallInstance = CMock_Guts_MemChain(Mock.qeocore_type_use_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.qeocore_type_use_IgnoreBool = (int)1;
}

void qeocore_type_use_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeocore_type_t* type, qeo_retcode_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_qeocore_type_use_CALL_INSTANCE));
  CMOCK_qeocore_type_use_CALL_INSTANCE* cmock_call_instance = (CMOCK_qeocore_type_use_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.qeocore_type_use_CallInstance = CMock_Guts_MemChain(Mock.qeocore_type_use_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_qeocore_type_use(cmock_call_instance, type);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(qeo_retcode_t));
}

void qeocore_type_use_StubWithCallback(CMOCK_qeocore_type_use_CALLBACK Callback)
{
  Mock.qeocore_type_use_CallbackFunctionPointer = Callback;
}

