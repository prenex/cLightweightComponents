/* Only include anything if the interface is already included! */
#ifdef _LOG_H_INTERFACE
#ifndef _LOG_H_IMPL
#define _LOG_H_IMPL

#include "stdio.h"

/* "Deep impl" */
/* ----------- */

void log_openLogFile(const char *fileName);
void log_closeLogFile();
FILE* log_file();

/* "Interface impl" */
/* ---------------- */

/* Open logfile: Should be called on component start initialization - aquire resources*/
void log_init(const char *logName) {
	log_openLogFile(logName);
}

/* Close logfile: Should be called on component stop finalization - release resources */
void log_quit() {
	log_closeLogFile();
}

void vlog_t(const char *fmt, va_list argp) {
	fprintf(log_file(), "TRACE: ");
	vfprintf(log_file(), fmt, argp);
}
void vlog_i(const char *fmt, va_list argp) {
	fprintf(log_file(), "INFO: ");
	vfprintf(log_file(), fmt, argp);
}
void vlog_w(const char *fmt, va_list argp) {
	fprintf(log_file(), "WARNING: ");
	vfprintf(log_file(), fmt, argp);
}
void vlog_e(const char *fmt, va_list argp) {
	fprintf(log_file(), "ERROR: ");
	vfprintf(log_file(), fmt, argp);
}

#endif /* _LOG_H_IMPL */
#endif /* _LOG_H_INTERFACE */
