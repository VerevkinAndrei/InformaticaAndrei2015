#include <iostream>
#include <cmath>
using namespace std;

/*void print (int x[], int N)
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
}*/


const double alpha = 0.1;

double f(double x)
{
    return sin(x) - alpha*x;
}

double df(double x)
{
    return cos(x) - alpha;
}

double dichotomy (
        double x1,
        double x2,
        double tolerance
        )
{
    while (fabs(x2-x1)>tolerance)
   {
    double x3=(x1+x2)/2;
    if (f(x3)*f(x2)>0)
        x2=x3;
    else
        x1=x3;
    }


    return x2;
}


double newton (double x0, double tolerance)
{
    double x=x0;
    double dx;
    do
    {
        dx = -f(x)/df(x);
        x+=dx;

    }
    while(fabs(dx)>tolerance);

    return x;
}

int main(int argc, char *argv[])
{
    double pi = 2*asin(1);
    cout << dichotomy(pi/2, 3*pi/2, 0.001) << endl;
    cout << newton(pi, 1e-7) << endl;
    return 0;
}



























