#include "GGHelperFunction.h"
#include "GGCommon.h"
#include <stdarg.h>
#include <time.h>

//
// function helper
//

std::string format(const char* fmt, ...)
{
	if (NULL == fmt)
	{
		return "";
	}

	va_list ap;
	va_start(ap, fmt);

	char szBuffer[MAX_STRING_LEN];
	memset(szBuffer, 0, sizeof(szBuffer));

	vsnprintf(szBuffer, ARRAY_SIZE(szBuffer) - 1, fmt, ap);

	va_end(ap);

	return std::string(szBuffer);
}