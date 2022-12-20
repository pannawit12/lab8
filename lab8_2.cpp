//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name,movie,day,ans;
    int id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<<name<<" is a really cool name.\nFahsai: I think you are an Engineering student. What is your student ID?\n"<<name<<": ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<<id/10000000-12<<". I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n"<<name<<": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n"<<name<<": ";
    getline(cin,day);
    cout << "Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n"<<name<<": ";
    getline(cin,ans);
    cout << "Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
    return 0;
}