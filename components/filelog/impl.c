#include "impl.h"
#include "stdio.h"

/* "Private" */
/* --------- */

static FILE *logFile;

/* "Public" */
/* -------- */

void log_openLogFile(const char* fileName) {
	// open file for appending
	logFile = fopen(fileName, "a");
}
void log_closeLogFile() {
	fclose(logFile);
}

FILE* log_file() {
	return logFile;
}
