/*
 * read_file_list.cpp
 *
 *  Created on: May 30, 2015
 *      Author: sshuh
 */

#include <dirent.h>
#include <stdio.h>

#include <string>
#include <iostream>

using namespace std;

int read_file_list()
{
	string str_dirname("/home/sshuh/workspace/");

	DIR *d;
	struct dirent *dir;
	d = opendir( str_dirname.c_str() );

	string str_filename;
	string str_renamed;
	if( d )
	{
		while( (dir = readdir(d)) != NULL )
		{
			str_filename = string(dir->d_name);
			str_renamed = string(dir->d_name);

			string::iterator it3 = str_filename.end()-1;
			string::iterator it2 = str_filename.end()-2;
			string::iterator it1 = str_filename.end()-3;
			string::iterator it0 = str_filename.end()-4;

			string::iterator it2r = str_renamed.end()-2;

//			if( (*it0 == '.') )
//			{
//
//			}

			str_filename = str_dirname + str_filename;
			str_renamed = str_dirname + str_renamed;

			printf("%s \t %s\n", str_filename.c_str(), str_renamed.c_str());

//			rename( str_filename.c_str(), str_renamed.c_str() );
		}

		closedir(d);
	}

	return 0;
}
