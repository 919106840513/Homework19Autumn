#include <bits/stdc++.h>
using namespace std;

enum operation{create_List=1,print_List,insert_Node,delete_Node,delete_List,quit};//ö�����ͣ����ڲ˵�ѡ����

struct  node{
    int data ;
    node * next;
};

operation  Menu();

node * CreateList( );
void  PrintList( node *);
node * InsertNode(node *,node *);
node * DeleteNode(node *,int);
node * deleteList(node *head);

void Create();
void Print( );
void Insert( );
void Delete( );
void DeleteAll();


int n=0;
node * head=NULL ;

int main()
{
  operation menu_choice;

  do
  {
   menu_choice=Menu();
   switch(menu_choice)
   {
      case create_List: cout<<"1 ��������"<<endl<<endl;
		                Create( );
					    break;
	  case  print_List: cout<<"2 ��������"<<endl<<endl;
                       Print();
					   break;
      case  insert_Node: cout<<"3 ����������"<<endl<<endl;
                       Insert();
					    break;
	  case  delete_Node: cout<<"4 ɾ��������"<<endl<<endl;
                       Delete();
					    break;
      case  delete_List: cout<<"5 ɾ����������"<<endl<<endl;
                       DeleteAll();
					    break;
	  case quit :
	  default:   cout<<"�˳�������� "<<endl;
		        return 0;

   }

  }while(menu_choice!=quit);

  return 0;
}

/*��������*/
node * CreateList( )
{ node * s, * p ;
  s = new node ;
   cout<<"��"<<n+1<<"�����"<<endl;
  cin >> s->data ;
  head = NULL ;
  if( s->data==0)
  {
	  cout<<"�������Ŀ�����"<<endl;
      delete  s ;
  }
  else
  {
	  while ( s->data != 0 )
	  { if ( head == NULL )   head = s ;
		 else  p->next = s ;
		p = s ;
		n=n+1;
		s = new node ;
		 cout<<"��"<<n+1<<"�����"<<endl;
		cin >> s->data ;
	  }
	  p -> next = NULL ;
	  delete  s ;
	  cout<<"�����������й���"<<n<<"���ڵ�"<<endl<<endl;
  }
  return ( head ) ;
}

/*��������*/
void  PrintList( node * head)
{    node *p=head;
     int i=1;
    if (head!=NULL)
        do
		{     cout<<"��"<<i++<<"���������Ϊ:"<<p->data<<endl;
               p=p->next;
        }while(p!=NULL) ;
	else
	{
	  cout<<"�����ǿ����� "<<endl;
	}
	 cout<<"�����й���"<<n<<"���ڵ�"<<endl;
}

/*������*/
node * InsertNode(node *head,node * s){
    node *p,*q;
    p=head;
    if(head==NULL)
    { head=s;
    s->next=NULL;
    }
    else
    {while((s->data>p->data) && (p->next!=NULL))
        {q=p;
        p=p->next;
	}
    if(s->data<=p->data)
    {	  if(head==p)
        { head=s;
            s->next=p;
        }
        else
        { q->next=s;
            s->next=p;
        }
    }
    else
  {  p->next=s;
     s->next=NULL;
  }
 }
   n=n+1;
   return (head);
}

/*ɾ�����*/
node *DeleteNode(node *head,int delData)
{node *p,*q;
 p=head;
 if (head==NULL)
 {
   return(head);
 }
 while(delData!=p->data && p->next!=NULL)
 { q=p;
   p=p->next;
 }
  if(delData==p->data)
  { if(p==head)
       head=p->next;
    else q->next=p->next;
    cout<<"�ɹ�ɾ������Ϊ"<<delData<<"�Ľ��"<<endl;
    n=n-1;
 }
 else
	 cout<<"Ҫɾ��������Ϊ"<<delData<<"�Ľ����������û���ҵ�"<<endl;     //�Ҳ����ý��
 return(head);
}

/*ɾ����������*/
node * deleteList(node *head)
{
  node *p,*s;
  p=head;
  if(head==NULL)
	  cout<<"�������Ϊ������";
  else
  {
	  while(p->next!=NULL)
	  {
	     s=p;
		 p=p->next;
		 delete s;
		 n--;
	  }
	  delete p;
	  n--;
      head=NULL;
  }
  cout<<"��������ɾ���ɹ�!"<<endl;
  return head;
}


/*�˵�����*/
operation  Menu()
{  int choice;
   cout<<endl<<endl;
   cout<<"��������˵�"<<endl;
   cout<<"1 ��������"<<endl;
   cout<<"2 ��������"<<endl;
   cout<<"3 ����������"<<endl;
   cout<<"4 ɾ��������"<<endl;
   cout<<"5 ɾ����������"<<endl;
   cout<<"6 �˳�"<<endl;

   cout<<endl<<endl<<"�����빦�����";
   cin>>choice;
   return operation(choice);
}

void Create()
{
    if(head==NULL)
	{
	  head=CreateList( );
	}
	else
	{
	  cout<<"�Ѵ����������������ٴδ���"<<endl;
	  cout<<"��������´�������ɾ��ԭ������"<<endl;
	}
}

void Print( )
{
   PrintList(head);
}

void Insert( )
{
  char IsGo;
  IsGo='y';
  cout<<endl<<"��ʼ���н��������"<<endl;
  node *stu;
  while(IsGo=='y'||IsGo=='Y')
  {   stu=new node;
      cin>>stu->data;
	  head=InsertNode(head,stu);
	  cin>>IsGo;
  }
}

void Delete( )
{
   char IsGo;
   int del_num;
   IsGo='y';
   while(IsGo=='y'||IsGo=='Y')
   {
	   cin>>del_num;  //����Ҫɾ���Ľ�������
	   head=DeleteNode(head,del_num);    //ɾ���������ͷ��ַ
	   cin>>IsGo;
   }
}

void DeleteAll()
{
  head=deleteList(head);

}
