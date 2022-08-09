#include <iostream>
<<<<<<< HEAD

const int ArSize = 80;

char * left(const char * str, int n = 1);
=======
const int ArSize = 80;

char * left(const char *str, int n = 1);
>>>>>>> 7d79f5650d4269509c31749ea953e8373de38884

int main(){
    using namespace std;

    char sample[ArSize];

    cout << "Enter a string:\n";
<<<<<<< HEAD
    cin.get(sample,ArSize);

    char *ps = left(sample, 4);

    cout << ps << endl;

    delete [] ps;

    ps = left(sample);

    cout << ps << endl;

=======

    cin.get(sample, ArSize);

    char *ps = left(sample, 4);
    cout << ps << endl;
    delete []ps;
    ps = left(sample);

    cout << ps << endl;
>>>>>>> 7d79f5650d4269509c31749ea953e8373de38884
    delete [] ps;
    return 0;
}

<<<<<<< HEAD

char * left(const char * str, int n){
    if (n < 0)  n = 0;
=======
char * left(const char * str, int n){
    if (n < 0) n = 0;

>>>>>>> 7d79f5650d4269509c31749ea953e8373de38884
    char * p = new char[n + 1];

    int i;

<<<<<<< HEAD
    for (i = 0; i < n && str[i]; i ++){
        p[i] = str[i];
    }

    while (i <=  n){
        p[i ++] =  '\0';

    }
=======
    for (int i = 0; i < n && str[i]; i ++){
        p[i] = str[i];
    }

    while (i <= n){
        p[i ++] = '\0';
    }

>>>>>>> 7d79f5650d4269509c31749ea953e8373de38884
    return p;
}