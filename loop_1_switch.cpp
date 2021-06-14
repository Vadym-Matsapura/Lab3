#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int loop=3;//for, while, do-while
	float z=0;
	float a, b;
	double x;
	
	switch(loop){
		case 1:
			a = 0.8, b = 1.1;
			for(x = -5; x <= 5; x+=0.1){
				float tmp = fabs(b*x*x*x);
				z = log(tmp);
				if(x<a)
					cout<<"\n>>\t"<<2.8 * sin(a*x) * sin(a*x) - b*x*x*x*z;
				else if(x>=a && x<=b*b)
					cout<<"\n>>\t"<<z*cos((a*x+b)*(a*x+b)) + log(z);
				else
					cout<<"\n>>\t"<<z*a*b*x + exp(2.5*a*x);
			}
			break;
		case 2:
			a = 2.2, b = 1.3, x=-5;
			while(x<=5){
				z = log(fabs(b*x));
				if(x<a)
					cout<<"\n>>\t"<<2.8 * sin(a*x) * sin(a*x) - b*x*x*x*z;
				else if(x>=a && x<=b*b)
					cout<<"\n>>\t"<<z*cos((a*x+b)*(a*x+b)) + log(z);
				else
					cout<<"\n>>\t"<<z*a*b*x + exp(2.5*a*x);
				x+=0.1;
			}
			break;
		case 3:
			a = 3.2, b = 1.5, x=-5;
			do{
				z = log(fabs(b*x*x));
				if(x<a)
					cout<<"\n>>\t"<<2.8 * sin(a*x) * sin(a*x) - b*x*x*x*z;
				else if(x>=a && x<=b*b)
					cout<<"\n>>\t"<<z*cos((a*x+b)*(a*x+b)) + log(z);
				else
					cout<<"\n>>\t"<<z*a*b*x + exp(2.5*a*x);
				x+=0.1;
			}while(x<=5);
			break;
		default:
			cout<<"\n>> NULL!";
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
