/*
����һ����ҵ�⣬����һ�����Ȳ�����50���ַ�����
�����еĴ�д��ĸ��ΪСд��Ȼ��ֱ�����޸�֮ǰ�ĺ��޸�֮����ַ����� 
 ��Ҫʹ��string.hͷ�ļ�
*/
#include<iostream> 
using namespace std;
void change(char s[]){
	for(int i=0;s[i];i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
}
int main(){
	char s[50];
	cin.getline(s,50);
	cout<<"�޸�ǰ���ַ�����"<<endl;
	cout<<s<<endl;
	change(s);
	cout<<"�޸ĺ���ַ�����"<<endl;
	cout<<s<<endl;
}
/*��������
asf sdgsdvs w wef sdf ds sd w reg re gregreg
*/ 
