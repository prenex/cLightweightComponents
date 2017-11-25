/* Only include anything if the interface is already included! */
#ifdef _LOG_H_INTERFACE
#ifndef _LOG_H_IMPL
#define _LOG_H_IMPL

#include "stdio.h"

void vlog_t(const char *fmt, va_list argp) {
	fprintf(stdout, "TRACE: ");
	vfprintf(stdout, fmt, argp);
}
void vlog_i(const char *fmt, va_list argp) {
	fprintf(stdout, "INFO: ");
	vfprintf(stdout, fmt, argp);
}
void vlog_w(const char *fmt, va_list argp) {
	fprintf(stderr, "WARNING: ");
	vfprintf(stderr, fmt, argp);
}
void vlog_e(const char *fmt, va_list argp) {
	fprintf(stderr, "ERROR: ");
	vfprintf(stderr, fmt, argp);
}

#endif /* _LOG_H_IMPL */
#endif /* _LOG_H_INTERFACE */
