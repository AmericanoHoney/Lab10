#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    ifstream source;
    source.open ("score.txt");
    string textline;
    int i=0;
    double sum,pow2;
    while (getline (source,textline))
    {
        sum+=atof(textline.c_str());
        pow2+=pow(atof(textline.c_str()),2);
        i++;
    }
    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = "<< sum/i<<endl;
    cout << "Standard deviation = "<<sqrt(pow2/i-pow(sum/i,2))<<endl;
    source.close();
}