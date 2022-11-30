#include "manager.h"

manager::manager(string Text, string Pattern){
    text=Text;
    pattern=Pattern;
    search();
}
void manager::search(){
    mix = pattern + "$" + text;
    int l = mix.length();

    int zz[l];
    Z_arr(mix, zz); 
    for (int i = 0; i < l; ++i)
    {
        if (zz[i] == pattern.length()){
            cout << "index "
                << i - pattern.length() -1 << endl;
        }
    }
}
void manager::Z_arr(string str, int zz[]){
     int n = str.length();
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;
            while (R<n && str[R-L] == str[R])
                R++;
            zz[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if (zz[k] < R-i+1)
                zz[i] = zz[k];
            else
            {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                zz[i] = R-L;
                R--;
            }
        }
    }
}
 