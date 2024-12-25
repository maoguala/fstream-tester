#include "ui.h"
#include "vari.h"
#pragma once 

void jud_sel_1() //Write
{   
    system("cls");
    std::cout << "Please Enter the word(s) or sentence(s):";
    std::cin >> w_ws; 
    std::cout << "Please Enter the file name:";
    std::cin >> named; 
    full_fnames = named + ext_fname; //give the valume after named
    out.open(full_fnames,std::ios::out);
    out << w_ws;
    out.close();
    system("cls");
}

void jud_sel_2() //Raed
{   
    system("cls");
    
    std::string token;
    std::vector<std::string> tokens; //get word or sentence
    std::ostringstream buffer; // Read the content of file to getstring
    std::cout << "Want name of file do you want to Read(spilt from comma): ";
    std::cin >> r_file;

    std::ifstream in(r_file);
    if (!in.is_open()) {
        std::cerr << "Error: Could not open the file \"" << r_file << "\".\n";
        return;
    }

    buffer << in.rdbuf(); // Read the entire file content into the string stream
    getstring = buffer.str(); // Store the content into the string variable getstring
    in.close(); // Close the file
    
    std::stringstream ss(getstring); // Split the string using commas as the delimiter
    
    std::cout << "[Splitted strings]:\n";
    while (std::getline(ss, token, ',')) {

        std::cout << token << "\n"; // Output each split string individually
    
    }
    std::cout << std::endl;
    system("pause");
    system("cls");
}

void jud_sel_3() //Delete
{   

    system("cls");
    std::cout << "Want name of file do you want to delete: ";
    std::cin >> del_file;
     try {
        if (std::filesystem::remove(del_file)) {
            std::cout << "File deleted successfully.\n";
        } else {
            std::cout << "File not found.\n";
        }
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    Sleep(2500);
    system("cls");
}

void jud_sel_4() //Exit
{
    exit(0);
}

void jud_sel_5()
{
    system("cls");
    system("dir"); //directory
    system("pause");
    system("cls");
}

void main_page_err() //alarm
{   
    std::string recive_sel = sel;
    std::cerr << "Not match option of " << recive_sel << " ,Please rewrite!\n";
    Sleep(2500);
    system("cls");
}

void sel_judge()
{
    if(sel == "1")
    {   
        jud_sel_1();
    }
    else if(sel == "2")
    {
        jud_sel_2();
    }
    else if(sel == "3")
    {
        jud_sel_3();
    }
    else if(sel == "4")
    {
        jud_sel_4();
    }
    else if(sel == "5")
    {
        jud_sel_5();
    }
    else if(sel != "1" || sel != "2" || sel != "3" || sel != "4" || sel != "5")
    {
        do
        {
            main_page_err();
            main_page();
            sel_judge();

        } while (sel != "1" && sel != "2" && sel != "3" && sel != "4" && sel != "5");
        
    }

}
