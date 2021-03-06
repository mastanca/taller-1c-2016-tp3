/*
 * server_main.cpp
 *
 *  Created on: Apr 22, 2016
 *      Author: mastanca
 */

#include <stdlib.h>
#include <syslog.h>
#include <string>

#include "server_Server.h"


int main(int argc, char *argv[]){
	if (argc != 2){
		syslog(LOG_ERR, "Server: Invalid number of arguments");
		return EXIT_FAILURE;
	}
	std::string port(argv[1]);

	Server server = Server(port);
	server.run();
	return EXIT_SUCCESS;
}
