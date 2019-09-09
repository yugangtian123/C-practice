#include<iostream>
#include<algorithm>
#include<time.h>
#include<string.h>
using namespace std;
int main()
{
    /*
     *Punctuation!!
     *
     */

    //ispunct() If char is a symble.
    string s = "Hello!!";
    int cnt = 0;
    // auto c  is char
    // we can use "&c" to change "s"
    for(auto c : s){
        if(ispunct(c)){
            ++cnt;
        }
    }
    printf("%d punctuation characters in ",cnt);
    cout << s << endl << endl << endl;


    /*
     *toupper()
     *Up one char
     */

    cout << s << endl;
    for(auto &c : s){
        c = toupper(c);
    }
    cout << s << endl << endl << endl;



    /*
     *isspace() conclude space, enter and so on.
     *toupper the first word in string.
     */
    s = "hello world!!";
    for(decltype(s.size()) c = 0; !isspace(s[c]); c++){
        s[c] = toupper(s[c]);
    }
    cout << s << endl << endl << endl;


    /*
     *to hex by rand_time
     */

    const string hexdigits = "0123456789ABCDEF";
    time_t tm = time(&tm);
    srand(tm);
    int random = rand()%16;
    printf("%d is %c in hex number.\n",random,hexdigits[random]);


    return 0;
}
