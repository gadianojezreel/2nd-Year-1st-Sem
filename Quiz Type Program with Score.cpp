#include<iostream>
using namespace std;
int main()
{
	string a1, a2, a3, a4, a5;
	int score=0;
	
	cout<<"Read the questions carefully and choose the best answer.";
	cout<<"\nOnly enter capitalized letter (with period or without period).\n\n";
	
	cout<<"1. What is the limit of x + 1 as x approaches -1?\n";
	cout<<"A. 0\n";
	cout<<"B. 1\n";
	cout<<"C. -1\n";
	cout<<"Answer: "; cin>>a1;
	cout<<"\n\n";
	
	cout<<"2. What is the derivative of ln(x)?\n";
	cout<<"A. 1\n";
	cout<<"B. x\n";
	cout<<"C. 1/x\n";
	cout<<"Answer: "; cin>>a2;
	cout<<"\n\n";
	
	cout<<"3. What is the derivative of a constant?\n";
	cout<<"A. 0\n";
	cout<<"B. Constant itself\n";
	cout<<"C. X\n";
	cout<<"Answer: "; cin>>a3;
	cout<<"\n\n";
	
	cout<<"4. What is the derivative of X?\n";
	cout<<"A. 0\n";
	cout<<"B. 1\n";
	cout<<"C. X\n";
	cout<<"Answer: "; cin>>a4;
	cout<<"\n\n";
	
	cout<<"5. Who is the fifth Hokage?\n";
	cout<<"A. Tsunade\n";
	cout<<"B. Naruto Uzumaki\n";
	cout<<"C. Kakashi\n";
	cout<<"Answer: "; cin>>a5;
	
	cout<<"\n\nResults:";
	
	if(a1=="A." || a1=="A"){
		cout<<"\n1. Correct";
		score=score + 1;
	}else{
		cout<<"\n1. Incorrect (Corrrect answer: A. 0)";
	}
	if(a2=="C." || a2=="C"){
		cout<<"\n2. Correct";
		score=score + 1;
	}else{
		cout<<"\n2. Incorrect (Correct answer: C. 1/x)";
	}
	if(a3=="A." || a3=="A"){
		cout<<"\n3. Correct";
		score=score + 1;
	}else{
		cout<<"\n3. Incorrect (Correct answer: A. 0)";
	}
	if(a4=="B." || a4=="B"){
		cout<<"\n4. Correct";
		score=score + 1;
	}else{
		cout<<"\n4. Incorrect (Correct answer: B. 1)";
	}
	if(a5=="A." || a5=="A"){
		cout<<"\n5. Correct";
		score=score + 1;
	}else{
		cout<<"\n5. Incorrect (Correct answer: A. Tsunade)";
	}
	
	cout<<"\n\nScore: "<<score<<"/5";
	
	
	return 0;
}

