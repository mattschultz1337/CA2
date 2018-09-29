#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef VOTER_H
#define VOTER_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
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
#endif
