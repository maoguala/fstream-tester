#include <iostream>
#include <fstream>
#include <windows.h>
#include <filesystem>
#include <vector>
#include <sstream>
#pragma once

std::string sel = "";
std::string w_ws;
std::string named; //name the file
std::string ext_fname = ".csv"; // file extension
std::string full_fnames; //full file name
std::string del_file; //delete specify file
std::string r_file; //Read the specify file
std::string getstring;

std::ofstream out; //w
std::ifstream in; //r
    
 
 