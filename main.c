/* List of used interfacing modules */
#include "components/log.h"

/* Must be the last include for the dependency 
 * injection of implementation modules! */
#include "components/clwc.h"

/* Program entry point */
int main(int argc, char **argv) {
	
	// Init components
	log_init("mainlog");

	// Use components
	log_i("Hello clwc!\n");

	// Quit/release components
	log_quit();

	return 0;
}
