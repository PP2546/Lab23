#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc , char *argv[])
{
    float a;
    float sum = 0;
    if(argc == 1) cout << "Please input numbers to find average.";
    else{
        for(int i=1 ; i < argc ; i++)
        {
            a = atoi(argv[i]);
            sum += a;
        }
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " <<  sum/(argc-1) ;
        cout << "\n---------------------------------";
    }
}
