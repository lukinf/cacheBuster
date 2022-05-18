//
//  main.cpp
//  cacheBuster
//
//  Created by Lukáš Frídl on 18.05.2022.
//

#include <iostream>
#include "directory.hpp"
#include "file.hpp"

int main(int argc, const char * argv[]) {
	
	std::string *path = new std::string("/Users/lukas/Desktop/Projects/www.lukas.fridl.cz/www.lukas.fridl.cz/");
	
	Directory *directory = new Directory(path);
	delete directory;
	
	return 0;
}
