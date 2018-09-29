#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef VOTERDB_H
#define VOTERDB_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class VoterDB {
   public:
        void cmd_new(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);
        void cmd_update(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip);
        void cmd_view(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);
        void cmd_report(string lastname, float amtdonated);
        void cmd_donate(float& amtdonated);


   private:

};
#endif
