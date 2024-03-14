/********************************************************************
  FileName:		GGCommon.h
  ClassName:	GGCommon
  Author:		helloworldsuper@163.com
  CreateDate:	2024.03.11 
  Description:  GGCommon
  Version:		1.0
  History:      <time> < author> <version >  < desc>
				2024.03.11 helloworldsuper@163.com 1.0 Create File
				https://github.com/helloworldsuper/GGHelperFunction.git

********************************************************************/
#pragma once
#define PROCESS_ERROR_(ret) { \
	  do \
	   {\
		   if (!(ret))\
			   goto Exit0;\
	   }\
	   while(false); \
   } 

#define PROCESS_SUCCESS_(ret) { \
	   do \
	   {\
		   if ((ret))\
			   goto Exit1;\
	   }\
	   while(false);\
   } 

#define SAFE_DELETE(p) { \
		if(p) \
		{ \
			delete p; \
			p = NULL; \
		} \
	}

#define ARRAY_SIZE(ary)			(sizeof(ary)/sizeof(ary[0]))
#define STRUCT_OFFSET(str, mem) ((int)(&(((str*)0)->mem)))
#define FILL_STR_NULL(ary)		(ary[0] = _T('\0'))
#define FILL_STR_LAST_NULL(x)   {x[sizeof(x) - 1] = 0;}

#define MAX_STRING_LEN 4096