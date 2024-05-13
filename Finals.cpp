#include<iostream>
using namespace std;
int main()
{
	string username="admin10", password="admin12345", u1, p1, a1;

	cout<<"Log in to get the sum, difference, quotient, and product of five consecutive numbers.\n\n";
	
	do{
	string A1;
	
	cout<<"USERNAME: "; cin>>u1;
	cout<<"\nPASSWORD: "; cin>>p1;
	
	if(username==u1 && password==p1){
	
	do{
	float n1, n2, n3, n4, n5, sum=0, diff=0, quot=0, prod=0;
	
	
	cout<<"\nInstruction: Enter five numbers that you want know the sum, difference, quotient, and product.\n";
	cout<<"You may enter whole numbers, integers, and decimals.\n\n";
	
	cout<<"First number: "; cin>>n1;
	cout<<"Second number: "; cin>>n2;	
	cout<<"Third number: "; cin>>n3;	
	cout<<"Fourth number: "; cin>>n4;	
	cout<<"Fifth number: "; cin>>n5;
	
	sum=n1+n2+n3+n4+n5;
	diff=n1-n2-n3-n4-n5;
	quot=n1/n2/n3/n4/n5;
	prod=n1*n2*n3*n4*n5;
	
	cout<<"\n\nThe sum of the five numbers is "<<sum<<".\n";
	cout<<"\n\nThe difference of the five numbers is "<<diff<<".\n";
	cout<<"\n\nThe quotient of the five numbers is "<<quot<<".\n";
	cout<<"\n\nThe product of the five numbers is "<<prod<<".\n";
	
	cout<<"\nDo you want to try again?\n";
	cout<<"[Type Y/y if you want to re-enter five numbers to get their sum, difference, quotient, and product, otherwise type other key.]: ";
    cin>>A1;
}

	while(A1=="Y" || A1=="y");
	
	}else{
		
	cout<<"\nInvalid login, please try again. \n";
	cout<<"[Type Y/y if you want to re-enter your username and password, otherwise type other key.]: ";
	cin>>a1;
	cout<<"\n";
	}
	
	
}
	
	while(a1=="Y" || a1=="y");
	
	return 0;
	
}


