/**
 * @file ck_simple_app.c
 */

#include <px4_platform_common/log.h>

__EXPORT int ck_simple_app_main(int argc, char *argv[]);

int ck_simple_app_main(int argc, char *argv[])
{
	PX4_INFO("Hello sky");
	return OK;
}
