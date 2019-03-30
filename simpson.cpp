#include <iostream>

using namespace std;


double f(double x){
    return x*x;
}

main(){

    double a, b, h, x, error;
    int n;
    double luas, sigma=0;

    cout<<"Masukkan batas atas (a) : ";
    cin>>a;
    cout<<"Masukkan batas bawah (b) : ";
    cin>>b;
    cout<<"Masukkan jumlah partisi : ";
    cin>>n;

    h = b-a/n;
    x = a;

    luas = f(a)+f(b);



    for(int i=1; i<n; i++){
        i=i+h;
        if(i%2 == 1){
            sigma = sigma + 4*f(x);
        }else{
            sigma = sigma + 2*f(x);
        }
    }

    luas = (luas + sigma)*(h/3);

    //error = ((8.0/3.0)-luas)/(8.0/3.0);

    cout<<endl;
    cout<<"Simpson(hasil)\t\t"<<"Error"<<endl;
    cout<<luas<<"\t\t\t"<<error<<endl;

}
