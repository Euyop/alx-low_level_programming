#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    string charname= "zyan";
    string charset;
    charset=charname.substr(0,3);
    cout<<5+7*2/4-2*(14%3)<<endl;
    int xnum=16;
    xnum++;
    cout<<xnum<<endl;
    string name;
    cout<<"enter a name:";
    getline(cin,name);
    cout<<"hello\t"<<name<<endl;
    cout<<pow(3,4)<<endl;
    cout<<sqrt(81)<<endl;
    cout<<round(4.2)<<endl;
    cout<<ceil(4.2)<<endl;
    cout<<floor(4.8)<<endl;
    cout<<fmax(8,6)<<endl;
    cout<<fmin(2,2.8)<<endl;
    cout<<charset<<endl;
    charname[3]='r';
    int charage;
    charage=35;
    cout<<charname.substr(2,2)<<endl;
    cout<<charname.find("ya",0)<<endl;
    cout<<charname.length()<<endl;
    cout<<charname[2]<<endl;
    cout<<charname<<endl;
    cout<<charage<<endl;
    cout << "     /f |" << endl;
    cout << "    /u  |" << endl;
    cout << "   / c  |" << endl;
    cout << "  /  k  |" << endl;
    cout << " /___u__|" << endl;
    return 0;
}
