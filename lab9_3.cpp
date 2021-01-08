#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
    int N=0;
    double x=0,y=0;
    string si;
    ifstream ScorFile("score.txt");
    while(getline(ScorFile, si)){
        x += stod(si);
        y += pow(stod(si),2);
        N++;
    }
    ScorFile.close();
    double mean = x/N, sd = sqrt((y/N)-pow(mean,2));
    cout <<"Number of data = "<<N;
    cout <<setprecision(3)<<"\nMean = "<<mean<<"\nStandard deviation = "<<sd;

    return 0;
}