#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    istream *fin = &cin;  //ifstream
    if(argc > 1) {
        ifstream infile(argv[1], ios::in);
        if (!infile) return 1;
        fin = &infile;
	cout<<"File Read Successfully"<<endl;
    //}
    
    while (1) {
        char c; //This will accept characer wise and not complete line.
        fin->get(c);
        if (! *fin) break;
        cout.put(c);
    }
    }
    return 0;
}
