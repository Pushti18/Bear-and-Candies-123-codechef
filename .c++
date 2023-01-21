#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A,B;
	    cin>>A>>B;
	    for(int i=1;;i++)
        {   if(i%2==0)
            {   B-=i;
            }
            else
            {   A-=i;
            }
            if(A<0)
            {   cout<<"Bob\n";
                break;
            }
            else if(B<0)
            {   cout<<"Limak\n";
                break;
            }
        }
	   // for (int i=0;i<count;i++){
	   //     if(a<i){
	   //         cout<<""
	   //     }
	   // }
	}
	return 0;
}
