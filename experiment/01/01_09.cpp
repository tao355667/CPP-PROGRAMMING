#include<iostream>
using namespace std;
//����1������ 
void ShowPic1(char a,int w)
{
	//��һ�е��м��е���һ�� ��lineΪ��ǰ�У� 
	for(int line=0;line<w/2;line++){
		for(int i=0;i<w/2-line-(w%2!=0?0:1);i++){
			cout<<" ";
		}
		for(int j=0;j<line*2+1;j++){
			cout<<a;
		}
		if(w%2==0) cout<<a;
		cout<<endl;
	}
	//�м���
	if(w%2!=0){
		for(int i=0;i<w;i++)
			cout<<a;
		cout<<endl;
	}
	//�м��е���һ�е����һ��
	//�˴��ǰ������line������д�� 
	for(int line=w/2-1;line>=0;line--){
		for(int i=0;i<w/2-line-(w%2!=0?0:1);i++){
			cout<<" ";
		}
		for(int j=0;j<line*2+1;j++){
			cout<<a;
		}
		if(w%2==0) cout<<a;
		cout<<endl;
	}
}
//����2������ 
void ShowPic2(char a,int w)
{
	//���һ���������Թ滮������������� 
	//����x������y 
	//x+y>=((w%2==0)?(w/2-1):w/2)����������ż���У��У��������� 
	for(int y=0;y<w;y++){
		for(int x=0;x<w;x++){
			if(	x+y>=((w%2==0)?w/2-1:w/2)		&& 
				x+y<=w/2+w-1	&&
				x-y>=-w/2		&&
				x-y<=w/2)
				cout<<a;
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
//�Ի����� 
void ask()
{
	int line;char a;
	cout<<"��ѡ��һ��ͼ����";
	cin>>a;
	cout<<"�������ӡ������";
	cin>>line;
	cout<<"����1��������Σ�"<<endl;
	ShowPic1(a,line);
	cout<<"����2��������Σ�"<<endl;
	ShowPic2(a,line);
}
int main()
{
	for(int i=0;i<2;i++){
		ask();
	}
	return 0;
}
