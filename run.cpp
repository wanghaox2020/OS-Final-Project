#include <istream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc > 4)
    {
        printf("More than 4 arguments, please use './run <filename> block_size block_count' instead");
        exit(0);
    }
    string line;
    char *filename = argv[1];
    ifstream infile;
    infile.open(filename);
    if (infile.is_open())
    {
        ifstream infile(filename, ios::binary);
        infile.seekg(0, ios::end);
        int file_size = infile.tellg();
        printf("There are %d bytes in %s\n", file_size, filename);
        infile.close();
    }
    else
    {
        printf("No such file, please enter a valid file name\n");
    }

    return 0;
}
