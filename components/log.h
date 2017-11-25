#ifndef _LOG_H_INTERFACE
#define _LOG_H_INTERFACE

/* Ability to set a log level when using */
#ifndef _LOG_LEVEL
#define _LOG_LEVEL 'i'
#endif /* _LOG_LEVEL */

/* Used for vararg handoff */
#include <stdarg.h>

/* log trace message */
void vlog_t(const char *fmt, va_list argp);
void log_t(const char *fmt, ...) {
	va_list argp;
	va_start(argp, fmt);
	vlog_t(fmt, argp);
	va_end(argp);
}

/* log info message */
void vlog_i(const char *fmt, va_list argp);
void log_i(const char *fmt, ...) {
	va_list argp;
	va_start(argp, fmt);
	vlog_i(fmt, argp);
	va_end(argp);
}

/* log warn message */
void vlog_w(const char *fmt, va_list argp);
void log_w(const char *fmt, ...) {
	va_list argp;
	va_start(argp, fmt);
	vlog_w(fmt, argp);
	va_end(argp);
}

/* log error message */
void vlog_e(const char *fmt, va_list argp);
void log_e(const char *fmt, ...) {
	va_list argp;
	va_start(argp, fmt);
	vlog_e(fmt, argp);
	va_end(argp);
}

#endif /* _LOG_H_INTERFACE */
