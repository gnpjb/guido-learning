#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void create_file(string file_name)
{
    ofstream file(file_name);
    file.close();
    
}


int main()
{
    string output;
    create_file("new_file.txt");
    fstream file("new_file.txt",ios::in|ios::out);
    if(!file.is_open())
    {
        cout<<"couldn't open";
        return 0;
    }
    cout<<"write something to file"<<endl;
    getline(cin,output,'\n');
    cout<<endl<<output<<endl;
    file<<output;
    file.close();
}
