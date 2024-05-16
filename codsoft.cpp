#include<iostream>
#include<string>
using namespace std;
class todo
{
    string work,taskfinish,taskend,tasks[100];
    int taskno=0,i;
    bool status=false;
    public:
        void add(int a){
            cout<<"\n";
            cout<<"enter task : ";
            std::getline(std::cin>>std::ws,work);
            taskno++;
            for(i=0;i<taskno;i++)
            {
               tasks[a]=work;
            }
        }
        void show()
        {
            for(i=0;i<taskno;i++)
            {
           
            if((tasks[i+1].compare(taskfinish))==0){
                cout<<i+1<<"-"<<tasks[i+1]<<"-completed"<<endl;
            }
            else if(tasks[i+1]==taskend)
            {
                continue;
            }
            else if(status==false)
            {
            cout<<i+1<<"-"<<tasks[i+1]<<"-pending"<<endl;
            }
            }
        }
        void finish()
        {
            cout<<"\nenter task that is completed : ";
            std::getline(std::cin>>std::ws,taskfinish);
            status==true;
        }
        void remove()
        {
            cout<<"\nenter task to be removed : ";
            std::getline(std::cin>>std::ws,taskend);
        }
};
int main()
{
  int ch,n=1,i=0;
  string s;
  todo td;
  while(n==1)
  {
  cout<<endl;
  cout<<"1. add task\n2. see task details\n3. update completed task\n4. delete task\n5. end program";
  cout<<"\n";
  cout<<"\nenter choice : " ;
  cin>>ch;
  switch(ch)
  {
    case 1:
        do{
        i++;
        td.add(i);
        cout<<"\ndo you want to add more task??(yes/no) ";
        cin>>s;
        }while(s=="yes");
        break;
    case 2:
        td.show();
        break;
    case 3:
        td.finish();
        break;
     case 4:
         td.remove();
         break;
    case 5:
         cout<<"\nend program"<<endl;;
         terminate();
    default:
         cout<<"\ninvalid input";
         break;

  }
  cout<<endl;
  cout<<"do u want to repeat if yes press 1 : ";
  cin>>n;
}
return 0;
}
