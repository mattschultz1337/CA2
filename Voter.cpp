#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <stdlib.h>
#include "VoterDB.h"
#include "Voter.h"
using namespace std;
void cmd_new(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);
void cmd_update(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip);
void cmd_view(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);
void cmd_report(string lastname, float amtdonated);
void cmd_donate(float& amtdonated);

class Voter {
   private:
     string lastname;
     string firstname;
     string userid;
     string password;
     int age;
     int stnum;
     string street;
     string town;
     string zip;
     float amtdonated;
   public:
     int main(int argc, char *argv[]);
     Voter(){
       string lastname="[EMPTY]";
       string firstname="[EMPTY]";
       userid="userid1";
       password="pass-word2";
       int age=0;
       int stnum=0;
       string street="[EMPTY]";
       string town="[EMPTY]";
       string zip="00000";
       float amtdonated=0;
     }

};
int main(int argc, char *argv[]) {
   cout << "Enter a command(Login,New,Report,Save,Load, or Quit)";
   cout << ">: ";
   string command;
   cin>>command;
   while(command != "Quit"){
	    if(command=="New"){
	       cmd_new(lastname,firstname,age,stnum,street,town,zip,amtdonated);
	    } else if(command=="Update"){
	       cmd_update(lastname, firstname, age, stnum,street,town,zip);
	    } else if(command=="View"){
		     cmd_view(lastname,firstname,age,stnum,street,town,zip,amtdonated);
      } else if(command=="Donate"){
         cmd_donate(amtdonated);
  	  } else if(command=="Report"){
         cmd_report(lastname,amtdonated);
	    }else{
         cout << "\n Command '" << command << "' not Recognized";
      }
      cout << "\nCommand>: ";
      cin>>command;
   }


}
