#include <iostream>
using namespace std;
void func();

int main()
{
    func();
}
void func(){
    int N,k=0;
    cin >> N;
    float *a=new float [N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] > 0) a[i]=a[i]/(i+1);
        if (a[i] < 0) k++;
        
    }
    for (int i = 0; i < N; i++) cout << a[i]<<" "<<endl;
    cout <<"kolvo is: "<< k;
}