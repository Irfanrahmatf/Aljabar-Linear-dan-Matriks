#include <iostream>
using namespace std;

int main(){
	
	int matriksA[2][3]={{3,6,4},{5,7,2}};
    int matriksAskalar[2][3];
   
   cout<<"\t2"<<endl;
   cout<<endl;
   cout<<"\tx"<<endl;
   cout<<endl;
   
   for (int a = 0; a < 2; a++)
   {
   	  for (int b = 0; b < 3; b++)
   	  {
   	  	cout<<matriksA[a][b]<<"\t";
	  }
	  cout<<endl;
   }
   
   cout<<endl;
   cout<<"\t"<<endl;
   cout<<endl;
   
   for (int a = 0; a < 2; a++)
   {
   	  for (int b = 0; b < 3; b++)
   	  {
   	  	matriksAskalar[a][b]= 2*matriksA[a][b];
   	  	cout<<matriksAskalar[a][b]<<"\t";
	  }
	  cout<<endl;
   }
   

}


