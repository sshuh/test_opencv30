//============================================================================
// Name        : test_opencv30.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv )
{
//    printf("OPENCV VER %d %d %d\n", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION);
    printf("OPENCV VER %s\n", CV_VERSION);

//    system("pkg-config --libs opencv");
//    system("pkg-config --cflags opencv");

    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

    return 0;
}

/*
#include <dirent.h>
#include <stdio.h>

#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv )
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
*/
