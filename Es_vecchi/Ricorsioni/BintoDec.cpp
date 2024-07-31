#include <iostream>
#include <vector>
#include<algorithm>
#include <cmath>
using std::cin; using std::cout ; using std::vector; using std::endl;


int BintoDec(vector<int>v,int p){

    if(p<0) return 0;
    return v[p]*pow(2,p)+BintoDec(v, p-1);
}



main(){
    vector <int> binario{1,0,1,0,1,0,1} ;
    int decimale{BintoDec(binario, binario.size()-1)};

    cout << " \n il tuo decimale è " << decimale ;


}