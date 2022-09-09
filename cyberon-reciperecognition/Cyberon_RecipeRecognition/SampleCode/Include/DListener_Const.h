#ifndef __DLISTENER_CONST_H__
#define __DLISTENER_CONST_H__

#include "base_types.h"

//Command Attribute
#define DLISTENER_CA_SINGLE_CMD		((DWORD)0x00000001)
#define DLISTENER_CA_PRE_CMD	((DWORD)0x00000002)
#define DLISTENER_CA_POST_CMD	((DWORD)0x00000004)
#define DLISTENER_CA_CENTRAL_CMD	((DWORD)0x00000008)


//Grammar Attribute//2006/02/10
#define DLISTENER_GA_DEFAULT		((DWORD)0x00000000)
#define DLISTENER_GA_NEED_POSTCMD	((DWORD)0x00000001)
#define DLISTENER_GA_OPTIONAL_PRECMD	((DWORD)0x00000010)

//Command ID not Found
#define DLISTENER_NO_RESULT_ID	(0x7FFFFFFF)

/************************/
//	 SDK	Error code
/************************/
#define DLISTENER_SUCCESS						((INT)0)
#define DLISTENER_ERR_SDKError					( -2000 )
#define DLISTENER_ERR_LexiconError				( -3000 )
#define DLISTENER_ERR_WTFError					( -4000 )
#define DLISTENER_ERR_EngineError				( -5000 )
#define DLISTENER_ERR_LicenseError				( -7000 )

#define DLISTENER_ERR_ILLEGAL_HANDLE			(DLISTENER_ERR_SDKError-1)
#define DLISTENER_ERR_CREATE_VSR_FAILED			(DLISTENER_ERR_SDKError-2)
#define DLISTENER_ERR_CREATE_LEXMGR_FAILED		(DLISTENER_ERR_SDKError-3)
#define DLISTENER_ERR_CREATE_WTF_FAILED			(DLISTENER_ERR_SDKError-4)
#define DLISTENER_ERR_LOAD_DVSRBIN_FAILED		(DLISTENER_ERR_SDKError-5)
#define DLISTENER_ERR_LOAD_TREEBIN_FAILED		(DLISTENER_ERR_SDKError-6)
#define DLISTENER_ERR_LOAD_CLASSIFIER_FAILED	(DLISTENER_ERR_SDKError-7)
#define DLISTENER_ERR_GET_VSRFUNCTION_FAILED	(DLISTENER_ERR_SDKError-8)
#define DLISTENER_ERR_NO_LEXMGR					(DLISTENER_ERR_SDKError-9)
#define DLISTENER_ERR_NEED_MORE_SAMPLE			(DLISTENER_ERR_SDKError-10)
#define DLISTENER_ERR_LEAVE_NO_MEMORY			(DLISTENER_ERR_SDKError-11)
#define DLISTENER_ERR_ILLEGAL_ATTRIBUTE			(DLISTENER_ERR_SDKError-12)
#define DLISTENER_ERR_TIMEOUT					(DLISTENER_ERR_SDKError-13)
#define DLISTENER_ERR_INVALID_PARAMETER			(DLISTENER_ERR_SDKError-14)
#define DLISTENER_ERR_LOAD_VSR_DLL_FAILED		(DLISTENER_ERR_SDKError-15)
#define DLISTENER_ERR_ILLEGAL_CNVIPA_HANDLE		(DLISTENER_ERR_SDKError-16)
#define DLISTENER_ERR_CNVIPA_CONVERT_FAIL		(DLISTENER_ERR_SDKError-17)
#define DLISTENER_ERR_FAIL_TO_GET_COMMAND		(DLISTENER_ERR_SDKError-18)
#define DLISTENER_ERR_FAIL_LOAD_LICENSE			(DLISTENER_ERR_SDKError-19)
#define	DLISTENER_ERR_FAIL_SDK_NOT_SUPPORT		(DLISTENER_ERR_SDKError-20)
#define	DLISTENER_ERR_FAIL_LANGUAGE_NOT_SUPPORT	(DLISTENER_ERR_SDKError-21)
#define	DLISTENER_ERR_FAIL_EXCEED_MAX_HANDLE_NUM	(DLISTENER_ERR_SDKError-22)
#define DLISTENER_ERR_EXPIRED					(DLISTENER_ERR_SDKError-100)
#define DLISTENER_ERR_LICENSE_FAILED			(DLISTENER_ERR_SDKError-101)
#define DLISTENER_ERR_LICENSE_INVALID_LANGID	(DLISTENER_ERR_SDKError-102)
#define DLISTENER_ERR_WRONGSERVERSETTING		(DLISTENER_ERR_LicenseError-1)
#define DLISTENER_ERR_CONNECTSERVERFAILED		(DLISTENER_ERR_LicenseError-2)
#define DLISTENER_ERR_SERVERSTATUSFAILED		(DLISTENER_ERR_LicenseError-3)
#define DLISTENER_ERR_GETCONTENTFAILED			(DLISTENER_ERR_LicenseError-4)
#define DLISTENER_ERR_WRONGCONTENTFORMAT		(DLISTENER_ERR_LicenseError-5)
#define DLISTENER_ERR_WRONGCONTENTFORMAT2		(DLISTENER_ERR_LicenseError-6)
#define DLISTENER_ERR_UNAUTHORIZEDKEY			(DLISTENER_ERR_LicenseError-7)
#define DLISTENER_ERR_EXCEEDMAXTOTALAUTHREQNUM	(DLISTENER_ERR_LicenseError-8)
#define DLISTENER_ERR_EXCEEDMAXAUTHDEVNUM		(DLISTENER_ERR_LicenseError-9)
#define DLISTENER_ERR_EXCEEDMAXDEVAUTHREQNUM	(DLISTENER_ERR_LicenseError-10)
#define DLISTENER_ERR_GETCONTENT2FAILED			(DLISTENER_ERR_LicenseError-11)
#define DLISTENER_ERR_STARTGENLICENSEFAILED		(DLISTENER_ERR_LicenseError-12)
#define DLISTENER_ERR_GENLICENSEFAILED			(DLISTENER_ERR_LicenseError-13)
#define DLISTENER_ERR_SERVERUNKNOWNERROR		(DLISTENER_ERR_LicenseError-100)


#endif //__DLISTENER_CONST_H__