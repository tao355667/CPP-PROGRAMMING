#include<iostream>
using namespace std;

void ShowScore()
{
	double a;
	cout<<"�㿼�˶��ٷ֣�(0~100)"<<endl;
    cin>>a;
    if(a>=90 && a<=100)
    	cout<<"�ȼ�=����"<<endl;
    if(a>=80 && a<90)
    	cout<<"�ȼ�=����"<<endl;
    if(a>=60 && a<80)
    	cout<<"�ȼ�=�е�"<<endl;
    if(a>=0 && a<60)
    	cout<<"�ȼ�=��"<<endl;
}

int main()
{
    ShowScore(); 
    
	return 0;
}
