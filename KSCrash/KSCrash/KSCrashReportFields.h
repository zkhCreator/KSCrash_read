//
//  KSCrashReportFields.h
//
//  Created by Karl Stenerud on 2012-10-07.
//
//  Copyright (c) 2012 Karl Stenerud. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall remain in place
// in this source code.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//


#ifndef HDR_KSCrashReportFields_h
#define HDR_KSCrashReportFields_h


#pragma mark - Report Types -

#define KSCrashReportType_Minimal          "minimal"
#define KSCrashReportType_Standard         "standard"


#pragma mark - Memory Types -

#define KSCrashMemType_Class               "objc_class"
#define KSCrashMemType_Object              "objc_object"
#define KSCrashMemType_String              "string"
#define KSCrashMemType_Unknown             "unknown"


#pragma mark - Exception Types -

#define KSCrashExcType_Deadlock            "deadlock"
#define KSCrashExcType_Mach                "mach"
#define KSCrashExcType_NSException         "nsexception"
#define KSCrashExcType_Signal              "signal"


#pragma mark - Common -

#define KSCrashField_Address               "address"
#define KSCrashField_Contents              "contents"
#define KSCrashField_Exception             "exception"
#define KSCrashField_Index                 "index"
#define KSCrashField_Name                  "name"
#define KSCrashField_Type                  "type"
#define KSCrashField_UUID                  "uuid"
#define KSCrashField_Value                 "value"

#define KSCrashField_Error                 "error"
#define KSCrashField_JSONData              "json_data"


#pragma mark - Notable Address -

#define KSCrashField_Class                 "class"
#define KSCrashField_LastDeallocObject     "last_deallocated_obj"
#define KSCrashField_MallocSize            "malloc_size"


#pragma mark - Backtrace -

#define KSCrashField_InstructionAddr       "instruction_addr"
#define KSCrashField_ObjectAddr            "object_addr"
#define KSCrashField_ObjectName            "object_name"
#define KSCrashField_SymbolAddr            "symbol_addr"
#define KSCrashField_SymbolName            "symbol_name"


#pragma mark - Stack Dump -

#define KSCrashField_DumpEnd               "dump_end"
#define KSCrashField_DumpStart             "dump_start"
#define KSCrashField_GrowDirection         "grow_direction"
#define KSCrashField_Overflow              "overflow"
#define KSCrashField_StackPtr              "stack_pointer"


#pragma mark - Thread Dump -

#define KSCrashField_Backtrace             "backtrace"
#define KSCrashField_Basic                 "basic"
#define KSCrashField_Crashed               "crashed"
#define KSCrashField_CurrentThread         "current_thread"
#define KSCrashField_DispatchQueue         "dispatch_queue"
#define KSCrashField_NotableAddresses      "notable_addresses"
#define KSCrashField_Registers             "registers"
#define KSCrashField_Skipped               "skipped"
#define KSCrashField_Stack                 "stack"


#pragma mark - Binary Image -

#define KSCrashField_CPUSubType            "cpu_subtype"
#define KSCrashField_CPUType               "cpu_type"
#define KSCrashField_ImageAddress          "image_addr"
#define KSCrashField_ImageSize             "image_size"


#pragma mark - Memory -

#define KSCrashField_Free                  "free"
#define KSCrashField_Usable                "usable"


#pragma mark - Error -

#define KSCrashField_Backtrace             "backtrace"
#define KSCrashField_Code                  "code"
#define KSCrashField_CodeName              "code_name"
#define KSCrashField_ExceptionName         "exception_name"
#define KSCrashField_Mach                  "mach"
#define KSCrashField_NSException           "nsexception"
#define KSCrashField_Signal                "signal"
#define KSCrashField_Subcode               "subcode"
#define KSCrashField_Reason                "reason"


#pragma mark - Process State -

#define KSCrashField_LastDeallocedNSException "last_dealloced_nsexception"
#define KSCrashField_ProcessState             "process"


#pragma mark - App Stats -

#define KSCrashField_ActiveTimeSinceCrash  "active_time_since_last_crash"
#define KSCrashField_ActiveTimeSinceLaunch "active_time_since_launch"
#define KSCrashField_AppActive             "application_active"
#define KSCrashField_AppInFG               "application_in_foreground"
#define KSCrashField_BGTimeSinceCrash      "background_time_since_last_crash"
#define KSCrashField_BGTimeSinceLaunch     "background_time_since_launch"
#define KSCrashField_LaunchesSinceCrash    "launches_since_last_crash"
#define KSCrashField_SessionsSinceCrash    "sessions_since_last_crash"
#define KSCrashField_SessionsSinceLaunch   "sessions_since_launch"


#pragma mark - Report -

#define KSCrashField_Crash                 "crash"
#define KSCrashField_Diagnosis             "diagnosis"
#define KSCrashField_ID                    "id"
#define KSCrashField_Major                 "major"
#define KSCrashField_Minor                 "minor"
#define KSCrashField_ProcessName           "process_name"
#define KSCrashField_Report                "report"
#define KSCrashField_Timestamp             "timestamp"
#define KSCrashField_Version               "version"

#pragma mark Minimal
#define KSCrashField_CrashedThread         "crashed_thread"

#pragma mark Standard
#define KSCrashField_AppStats              "application_stats"
#define KSCrashField_BinaryImages          "binary_images"
#define KSCrashField_SystemAtCrash         "system_atcrash"
#define KSCrashField_System                "system"
#define KSCrashField_Memory                "memory"
#define KSCrashField_Threads               "threads"
#define KSCrashField_User                  "user"
#define KSCrashField_UserAtCrash           "user_atcrash"

#pragma mark Incomplete
#define KSCrashField_Incomplete            "incomplete"
#define KSCrashField_RecrashReport         "recrash_report"

#endif