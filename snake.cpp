#include<iostream>
#include<conio.h>
#include<vector>
#include<fstream>
#include<time.h>
using namespace std;
#define width 38
#define height 15
vector<int>x;
vector<int>y;
int score=0;
int highscore;
int length=1;
int fx=width/3;
int fy=height/3;
int xpos;
int ypos;
char g='r';
void instruction()
{
cout<<"\twelcome to snake game"<<endl;
cout<<endl;
cout<<"\t   done by the programmer NIZAS"<<endl;
cout<<endl;
cout<<"instruction:"<<endl;
cout<<endl;
cout<<" 1.press 'u' to move up"<<endl;
cout<<endl;
cout<<" 2.press 'd' to move down"<<endl;
cout<<endl;
cout<<" 3.press 'l' to move left"<<endl;
cout<<endl;
cout<<" 4.press 'r' to move right"<<endl;
sleep(5);
}
void in()
{
xpos=width/2;
ypos=height/2;
x.push_back(xpos);
y.push_back(ypos);
fstream f;
f.open("snakescore",ios::in);
f>>highscore;
f.close();
}
void display ()
{
cout<<"\t\tsnake_game"<<endl;
cout<<endl;
cout<<"score:"<<score<<endl;
cout<<endl;
cout<<"highscore:"<<highscore<<endl;
cout<<endl;
for(int i=0;i<=height+1;i++)
{
for(int j=0;j<=width+1;j++)
{
if(i==0||j==0||j==width+1||i==height+1)
{
cout<<'.';
}
else if(i==fy&&j==fx)
{
cout<<"o";
}
else
{
bool k=true;
for(int m=0;m<y.size();m++)
{
for(int n=0;n<x.size();n++)
{
if(x[n]==j&&y[m]==i)
{
cout<<"o";
k=false;
}
m++;
}
}
if(k)
{
cout<<' ';
}
}
}
cout<<endl;
}
}
void snakemove()
{
if(kbhit())
{
g=getch();
{
if(g!='l'&&g!='r'&&g!='u'&&g!='d')
{
g='r';
}
}
}
if(g=='l')
{
xpos--;
}
else if(g=='r')
{
xpos++;
}
else if(g=='u')
{
ypos--;
}
else if(g=='d')
{
ypos++;
}
x.push_back(xpos);
y.push_back(ypos);
if(y.size()>length)
{
x.erase(x.begin());
y.erase(y.begin());
}
}
void foodcolloid ()
{
for(int m=0;m<y.size();m++)
{
for(int j=0;j<x.size();j++)
{
if(y[m]==fy&&x[j]==fx)
{
srand(unsigned(time(NULL)));
length++;
fx=rand()%width+1;
fy=rand()%height+1;
score++;
}
}
}
}
int colloid()
{
if(x[x.size()-1]==0||y[y.size()-1]==0||x[x.size()-1]==width+1||y[y.size()-1]==height+1)
{
return 1;
}
else
{
for(int i=1;i<y.size();i++)
{
for(int j=1;j<x.size();j++)
{
if(x[0]==x[j]&&y[0]==y[i])
{
return 1;
}
else
{
i++;
}
}
}
}
return 0;
}
int main()
{
instruction();
in();
while(1)
{
clrscr();
snakemove();
foodcolloid();
bool s=false;
if(colloid()==1)
{
int a;
cout<<endl;
cout<<"  score:"<<score;
fstream op;
op.open("snakescore",ios::in);
op>>a;
op.close();
if(a<score)
{
op.open("snakescore",ios::trunc | ios::out);
op<<score;
op.close();
cout<<"\t\thighscore:"<<score;
}
else
{
cout<<"\t\thighscore:"<<a;
}
for(int i=0;i<height+1;i++)
{
for(int j=0;j<width+1;j++)
{
if(i==height/2&&j==width/3)
{
cout<<" game_over";
cout<<"\a";
s=true;
}
else
{
cout<<" ";
}
}
cout<<endl;
}
}
if(s)
{
break;
}
display();
sleep(1);
}
}
    