#include <iostream>
using namespace std;

int main() {
    
    int i,j,n,a;
    int k=0;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(i=n;i>0;i--){
        a=0;
            while(a<=k){
                cout<<" ";
                a++;
            }
        
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        k++;
        cout<<endl;
        
    }
    
    for(i=2;i<=n;i++){
        a=k-2;
        while(a>=0){
            cout<<" ";
            a--;
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        k--;
        cout<<endl;
        
    }

    return 0;
}
