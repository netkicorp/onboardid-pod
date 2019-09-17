//
//  NTAnalyticEvents.h
//  netkisdk-ios
//
//  Created by Admin on 7/22/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#ifndef NTKAnalyticEvents_h
#define NTKAnalyticEvents_h

static NSString * const NTKTRACKER_EVENT_ACCESS_CODE_VERIFIED = @"Access code: verified";
static NSString * const NTKTRACKER_EVENT_PHONE_NUMBER_CODE_REQUESTED = @"Phone number: code requested";
static NSString * const NTKTRACKER_EVENT_PHONE_NUMBER_CODE_VERIFIED = @"Phone number: code verified";
static NSString * const NTKTRACKER_EVENT_PHONE_NUMBER_CODE_BYPASSED = @"Phone number: code bypassed";
static NSString * const NTKTRACKER_EVENT_PICTURE_SUBMITTED = @"Picture: submitted";
static NSString * const NTKTRACKER_EVENT_TRANSACTION_SUBMITTED = @"Transaction: submitted";
static NSString * const NTKTRACKER_EVENT_TOKEN_REFRESHED = @"Token: refreshed";
static NSString * const NTKTRACKER_EVENT_IDENTIFICATION_PROCESS_STARTED = @"Identification process: started";
static NSString * const NTKTRACKER_EVENT_INSTRUCTION_PAGE_DISPLAYED = @"Instruction page: displayed";
static NSString * const NTKTRACKER_EVENT_PICTURE_CAPTURE_FINISHED = @"Picture capture: finished";
static NSString * const NTKTRACKER_EVENT_IDENTIFICATION_PROCESS_FINISHED = @"Identification process: finished";


static NSString * const NTKTRACKER_VALUE_CODE_ACCESS_CODE = @"access_code";
static NSString * const NTKTRACKER_VALUE_CODE_CLIENT_NAME = @"client_name";
static NSString * const NTKTRACKER_VALUE_CODE_PHONE_NUMBER = @"phone_number";
static NSString * const NTKTRACKER_VALUE_CODE_CODE = @"code";
static NSString * const NTKTRACKER_VALUE_CODE_TRANSACTION_ID = @"transaction_id";
static NSString * const NTKTRACKER_VALUE_CODE_DOCUMENT_TYPE = @"document_type";
static NSString * const NTKTRACKER_VALUE_CODE_PICTURE_TYPE = @"picture_type";
static NSString * const NTKTRACKER_VALUE_CODE_CAPTURE_TYPE = @"capture_type";
static NSString * const NTKTRACKER_VALUE_CODE_ATTEMPT_NUMBER = @"attempt_number";
static NSString * const NTKTRACKER_VALUE_CODE_AUTOCAPTURE = @"autocapture";
static NSString * const NTKTRACKER_VALUE_CODE_DOCUMENT_CENTERED = @"document_centered";
static NSString * const NTKTRACKER_VALUE_CODE_FACE_DETECTED_ID = @"face_detected_id";
static NSString * const NTKTRACKER_VALUE_CODE_BARCODE_DETECTED = @"barcode_detected";
static NSString * const NTKTRACKER_VALUE_CODE_SELFIE_FACE_DETECTED = @"selfie_face_detected";
static NSString * const NTKTRACKER_VALUE_CODE_TEXT_MRZ_READABLE = @"text_mrz_readable";
static NSString * const NTKTRACKER_VALUE_CODE_CORRECT_LIGHTING = @"correct_lighting";
static NSString * const NTKTRACKER_VALUE_CODE_NO_GLARE_PRESENT = @"no_glare_present";
static NSString * const NTKTRACKER_VALUE_CODE_ACTION_TAKEN = @"action_taken";
static NSString * const NTKTRACKER_VALUE_CODE_COUNTRY_SELECTED = @"country_selected";
static NSString * const NTKTRACKER_VALUE_CODE_RESULT = @"result";
static NSString * const NTKTRACKER_VALUE_CODE_ERROR_MESSAGE = @"error_message";

static NSString * const NTKTRACKER_VALUE_CANCEL = @"cancel";
static NSString * const NTKTRACKER_VALUE_RETAKE = @"retake";
static NSString * const NTKTRACKER_VALUE_CONTINUE = @"continue";
static NSString * const NTKTRACKER_VALUE_INDIVIDUAL = @"individual";
static NSString * const NTKTRACKER_VALUE_PROCESS = @"process";
static NSString * const NTKTRACKER_VALUE_SUCCESSFUL = @"successful";
static NSString * const NTKTRACKER_VALUE_ERROR = @"error";

#endif /* NTKAnalyticEvents_h */
