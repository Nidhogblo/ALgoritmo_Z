#include <iostream>
using namespace std;

class manager{
    private:
    string text;
    string pattern;
    string mix ;
    int L, R, k;
    void search();
    void Z_arr(string str, int Z[]);
    
    public:   
    manager(string text, string pattern);
    

};