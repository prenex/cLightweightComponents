/* List of used interfacing modules */
#include "components/log.h"

/* Must be the last include for the dependency 
 * injection of implementation modules! */
#include "components/clwc.h"

/* Program entry point */
int main(int argc, char **argv) {
	
	log_i("Hello clwc!\n");

	return 0;
}
