/*
 * Written by Paul Goldstein, June 2023.
 */
 
#include <iostream>
#include <cstring>

#include "install.cpp"
#include "remove.cpp"
#include "list.cpp"

#include "constants.h"

int main(int argc, char* argv[]) {
	if(argc < 2) {
		printf("No arguments provided. Use --help or -h to print help message\n");
		exit(1);
	}

	if(!strcmp(argv[1],"-h") || !strcmp(argv[1],"--help")) {
		printf(LOGO);
		printf("[\e[33mPako!\e[39m] v%s\n\n",constants::VERSION.c_str());
		printf("Usage: pako <command> [packages]\n\nPackage manager functions:\n\n   -i	install a pako package.\n   -r	remove installed package\n   -l	list installed packages\n   -h	get some help like this help message\n\n");
	}
	if(!strcmp(argv[1],"-i")) {
		install(argc, argv);
	}
	if(!strcmp(argv[1],"-r")) {
		remove(argc, argv);
	}
	if(!strcmp(argv[1],"-l")) {
		list_f(argc, argv);
	}
}

