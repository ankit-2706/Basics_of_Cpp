
//~~~~~~~~~~~~~~`````LAST INDEX OF A NUMBER`````````~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int last_index(int a[],int n,int x){
    if(n==0){
        return -1;
    }
    
    int smallleroutput = last_index(a+1, n-1 , x);
    if (smallleroutput== -1){
        if(a[0]==x){
            return 0;
        }
        else{
            return -1;
        }
        
   
    }
    if(smallleroutput!=-1){
        return 1+smallleroutput;
    }
    
}
int main(){
    int n,x;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int a[100];
    for (int i=0; i<n ; i++){
        cout << "Enter the elements at a["<<i<<"]: " ;
        cin >> a[i];
    }
    cout << "Enter the no. whose  1st index need to find/: " << endl;
    cin >> x;
    cout << last_index(a,n,x);
    
    return 0;
}