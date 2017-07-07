#include<iostream>
#include<string>
#include<fstream>

using namespace std;


bool create_file(string file_name)
{
    ofstream file(file_name);
    if(!file.is_open())
    {
        return false;
    }
    file.close();
    return true;
}

// 
int main()
{
    
}
