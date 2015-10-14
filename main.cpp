#include <iostream>
using namespace std;

void print (int x[], int N)
{
    for (int n=0; n<=N; n++)
        cout << x[n] <<endl;
}

int main(int argc, char *argv[])
{
    const int N=9;
    int arr[N];


     for (int n=0; n<=N; ++n)
         arr[n]=n+1;

    print (arr, N);


    for (int n=0; n<=N; n++)
        arr[n]=arr[n]*arr[n];


    for (int n=0; n<=N; n++)
        cout << arr[n]<<endl;



    //cout << "hello" <<endl;
    return 0;
}
