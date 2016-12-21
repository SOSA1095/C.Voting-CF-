#include <iostream>

using namespace std;

int main()
{
    int A,D=0,R=0;
    string aux;
    cin >> A >> aux;
    for(int iA=0; iA<aux.size();iA++){
        if(aux[iA]=='D'){
            D++;
        }else{
            R++;
        }
    }
    while(D>0 && R>0){
        for(int iA=0,iB=0; iA<aux.size();iA++){
            if(aux[iA]=='D'){
                while(aux[iB]!='R' && R>0){
                    iB++;
                    if(iB==aux.size()){
                        iB=0;
                    }
                }
                aux[iB]='X';
                R--;
            }else if(aux[iA]=='R'){
                while(aux[iB]!='D'&& D>0){
                    iB++;
                    if(iB==aux.size()){
                        iB=0;
                    }
                }
                aux[iB]='X';
                D--;
            }
        }
    }
    if(D>0){
        cout << "D" << endl;
    }else{
        cout << "R" << endl;
    }
    return 0;
}
