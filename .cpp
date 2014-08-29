
#include "stdafx.h"
# include<windows.h>
# include<stdio.h>
# include<fstream.h>                 	// 文件流的头文件
# include<ctype.h>

#define UP 38                        	// 键盘上的向上键的ASCII码
#define DOWN 40                    	// 键盘上的向下键的ASCII码
#define LEFT 37                      // 键盘上的向左键的ASCII码
#define RIGHT 39                   	// 键盘上的向右键的ASCII码
#define ESC 0x1B               	  	// 键盘上的退出键的ASCII码
#define F2 0x71                     	// 键盘上的F2键的ASCII码

class blackground                    	// 定义一个 blackground 的类
{
private:                             	//类的私有成员
    int x;
    int y;
    int m;
	int n;
    WORD c;
public:                              	//类的公有成员
blackground::blackground(int x0,int y0,int m0,int n0,WORD c0);   //重载blackground（）
    display();
    display1();
	display2(); 
	display3(); 
	display4();
    display5();
    display10();
	display20(); 
	display30(); 
	display40();
    display50();

};

blackground::blackground(int x0,int y0,int m0,int n0,WORD c0)
   	{		 m=m0;
			 n=n0;
			 y=y0;
			 x=x0;
			 c=c0;

             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
			 COORD pos;
			 pos.X=x+m;
			 pos.Y=y+n;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}
blackground::display()
	{	     /*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
			 COORD pos;
			 pos.X=x+m;
			 pos.Y=y+n;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);*/
	         printf(" ");
	}
blackground::display1()
	{	     
	         COORD pos;
			 pos.X=85-9;
			 pos.Y=8-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("open");
             COORD pos1;
			 pos1.X=83-9;
			 pos1.Y=8-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
			 printf("input.txt");
	}
blackground::display2()
	{	     
             COORD pos;
			 pos.X=85-9;
			 pos.Y=11-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("cover");
	}
blackground::display3()
	{	    
	            
             COORD pos;
			 pos.X=85-9;
			 pos.Y=14-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("insert");
	}
blackground::display4()
	{	    
	         COORD pos;
			 pos.X=85-9;
			 pos.Y=17-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("delete");
	}
blackground::display5()
	{	    
	         COORD pos;
			 pos.X=85-9;
			 pos.Y=20-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
             printf("open");
	         COORD pos5;
			 pos5.X=83-9;
			 pos5.Y=21-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos5);
	         printf("output.txt");
	}
blackground::display10()
	{	     
             COORD pos;
			 pos.X=101-9;
			 pos.Y=8-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("save");
	}
blackground::display20()
	{	     
             COORD pos;
			 pos.X=98-9;
			 pos.Y=11-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("statistics");
	}
blackground::display30()
	{	     
             COORD pos;
			 pos.X=98-9;
			 pos.Y=14-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("stati -' '");
	}
blackground::display40()
	{	     
             COORD pos;
			 pos.X=100-9;
			 pos.Y=17-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("replace");
             COORD pos0;
			 pos0.X=101-9;
			 pos0.Y=18-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
	         printf("a<->A");
	}
blackground::display50()
	{	     
             COORD pos;
			 pos.X=100-9;
			 pos.Y=20-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	         printf("replace");
             COORD pos0;
			 pos0.X=101-9;
			 pos0.Y=21-2;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
	         printf("a<->b");
	}

HANDLE hOut,hIn;
void HandleMouse1(MOUSE_EVENT_RECORD Mouse,int a[2])
{
  
  if(Mouse.dwButtonState==1)
  {  a[0]=Mouse.dwMousePosition.X;
	 a[1]=Mouse.dwMousePosition.Y;
  }
}

void xuanzebj(int j)
{   int m,n;
    for(m=0;m<31;m++)
        for(n=0;n<20;n++)
		{    blackground z0(80-9,2-j,m,n,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
		     z0.display();                                                                        //z0.display1();   
		}

	for(m=0;m<12;m++)
		for(n=0;n<2;n++)
	{ 
       blackground z1(82-9,8-2-j,m,n,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z1.display(); z1.display1();
	   blackground z2(82-9,11-2-j,m,n,BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			z2.display();  z2.display2();
	   blackground z3(82-9,14-2-j,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z3.display(); z3.display3();
	   blackground z4(82-9,17-2-j,m,n,BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z4.display(); z4.display4();
	   blackground z5(82-9,20-2-j,m,n,BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z5.display();z5.display5();
       blackground z10(97-9,8-2-j,m,n,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z10.display(); z10.display10();
	   blackground z20(97-9,11-2-j,m,n,BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			z20.display();  z20.display20();
	   blackground z30(97-9,14-2-j,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z30.display(); z30.display30();
	   blackground z40(97-9,17-2-j,m,n,BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z40.display(); z40.display40();
	   blackground z50(97-9,20-2-j,m,n,BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z50.display();z50.display50();
	   
	}


   for(m=0;m<31;m++)
        for(n=0;n<3;n++)
		{    blackground z01(80-9,2,m,n,BACKGROUND_INTENSITY|BACKGROUND_BLUE);
			 z01.display();  
		}
   COORD pos0;
		pos0.X=80-9;
	    pos0.Y=3;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
   printf("---------> 操作按钮 <----------");

   for(m=0;m<31;m++)
        for(n=0;n<3;n++)
		{    blackground z01(80-9,24,m,n,BACKGROUND_INTENSITY|BACKGROUND_BLUE);
			 z01.display();  
		}
   COORD pos01;
		pos01.X=80-9;
	    pos01.Y=25;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos01);
   printf("-------> 操作历史记录 <--------");
   for(m=0;m<31;m++)
        for(n=0;n<17;n++)
		{    blackground z00(80-9,27,m,n,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z00.display();  
		}
    for(m=0;m<31;m++)
	{blackground zp(71,22,m,0,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 zp.display();}

}

void gundongbj(int j,int i,int d)                   	// 设置滚动条属性
{  int m,n;
   if(d<0)
   {   for(m=0;m<3;m++)
		{   
			for(n=0;n<3;n++)
			{                               	// 调用类，设置竖直方向滚动条的颜色为蓝色
blackground zz(66,j+2,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY|BACKGROUND_BLUE);
					zz.display();
			}

			for(n=0;n<20;n++)
			{     if(n+i<j||n+i>j+2)           	// 设置竖直方向滚动条的底色为灰色
				{  blackground zz1(66,2+i,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
					zz1.display(); 
				}
			 }
		}
	
   }
   
   if(d>=0)
   {  for(n=0;n<1;n++)
		{   
			for(m=0;m<3;m++)
			{                               	// 设置左右方向滚动条的颜色为蓝色
blackground zz(d,22,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY|BACKGROUND_BLUE);
					zz.display();
			}

			for(m=0;m<69;m++)
			{     if(m<d||m>d+2)            	// 设置左右方向滚动条的底色为灰色
				{  blackground zz1(0,22,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
					zz1.display(); 
				}
			 }
		}
   }	   
   
}


void print(char a[17][78],int j,int d)               	// 输出数组
{   int m,n;
	for(m=j;m<17;m++)                      	//  j为纵向滚动条返回值
	{	int bz=1;
		for(n=d;n<78;n++) //32                 	//d为横向滚动条返回值    
		{	
			if(a[m][n]>=32&&a[m][n]<=126||a[m][n]==-86||a[m][n]==-95)       
// 限定ASCII的范围， 按ASCII读出字符，避免乱码的出现。
		    printf("%c",a[m][n]);
		    else	
			{   if(bz)                      	//  bz是允许一行只输出一个回车键的标志
				{
                    bz=0;                   // 将bz置零，不允许一行内重复输出回车键
				    printf("\n");
				}
            }
		}
	}
}


void open1(char a[17][78],int j1)                  // 打开input文件
{   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    COORD pos1;                            	//  设置光标的位置
	      pos1.X=73;
		  pos1.Y=27;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
    printf("Open input.txt!"); 
	int m,n;
    for(m=0;m<66;m++)
        for(n=0;n<3;n++)
		{    blackground z01(0,2,m,n,BACKGROUND_INTENSITY|BACKGROUND_BLUE);
			 z01.display();  
		}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY|FOREGROUND_BLUE|BACKGROUND_INTENSITY|BACKGROUND_BLUE);
    COORD pos;
	      pos.X=0;
		  pos.Y=2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    printf("\n input.txt文件的内容如下：（您可以修改以下内容）\n");
	
	  for(m=0;m<66;m++)
		  for(n=0;n<17;n++)
		  {
			  blackground z(0,5,m,n,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			  z.display();
		  }
      
      COORD pos0;
			 pos0.X=0;
			 pos0.Y=5;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
      char ch;
      
	  int i=0,j=0;
      
	  int x1;
	  ifstream OpenFile("input.txt");           	// 打开文件 input.txt文件

			while(!OpenFile.eof())           	//  判断 input.txt 文件是否结束
			{      if(j<78)
				{     OpenFile.get(ch);     	//  取出文本文档的字符
						if(ch==10||ch==13)  	//  判断字符时否为换行键或回车键
							{  a[i][j]='\n'; 
							   ++i;         	//  数组的下标行数转到下一行 
						       j=-1;         // 列数加1后归零
							}
                         else if(ch>=32&&ch<=126||ch==-86||ch==-95)        //判断字符是否为正确的字符
							{   
							   a[i][j]=ch;
							}		
						j++;                   
				}
		  
			 }
	OpenFile.close();                      		//    关闭此文本文件
	print(a,j1,0);                             	// 调出输出数组的子函数
}

void history(int xz)                            	//  记录操作记录的界面
{  if(xz==0)        
	{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
        COORD pos2;
		pos2.X=74; 
		pos2.Y=29; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	printf(" ");
	

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf(" ---- cover");
	}
    if(xz==1)
    {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
        COORD pos3;
		pos3.X=74; 
		pos3.Y=30; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos3);
	printf(" ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf(" ---- insert");
	}
    if(xz==2)
	{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY|FOREGROUND_INTENSITY);
        COORD pos4;
		pos4.X=74; 
		pos4.Y=31; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos4);
	printf(" ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf(" ---- delete");
	}
	   
}

void revise(char a[17][78],int x0,int y1,char ch0,int xz)           //  进行文档修改的子程序
{  
    int y0=y1-5; 
    int x1,n;
	if(xz==0)                           		//   cover
		{  
	      a[y0][x0]=ch0;                 		//   数组的下标与光标的x,y值对应(相反，移位)
	   }
	else if(xz==1)                            	//   consert
		{
			for(x1=77;x1>x0;x1--)
			a[y0][x1]=a[y0][x1-1];
			a[y0][x0]=ch0;
		}
    else if(xz==2)                            	//delete
		{
			for(x1=x0;x1<77;x1++)
			a[y0][x1]=a[y0][x1+1];
		}

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
    COORD pos;
		pos.X=0;
		pos.Y=y1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    int bz=1;
	   for(n=0;n<78;n++)                     	//   输出数组
	   {	
			if(a[y0][n]>=32&&a[y0][n]<=126||a[y0][n]==-86||a[y0][n]==-95)
		    printf("%c",a[y0][n]);
		    else	
			{   if(bz)
				{
                    bz=0;
				    printf("\n");
				}
            }
		}
                    						// 设置三种修改方式的背景颜色
   if(xz==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
   else	if(xz==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
   else	if(xz==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
   COORD pos8;
		pos8.X=x0;
		pos8.Y=y1;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos8);
	    printf("%c",a[y0][x0]);

		history(xz);                                 	// 调用操作历史记录的函数

}

void open2()                                        	//  打开output 文本文件
{    
	   int m,n;
for(m=0;m<3;m++)                                   	// 设置输出文件的背景色
	   {  for(n=0;n<20;n++)
			{    blackground z(66,24,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
	             z.display();
			}
	
	   }
   
        for(m=0;m<3;m++)
		{   
	       for(n=0;n<3;n++)
		   {    
blackground zz(66,24,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY|BACKGROUND_BLUE);
	            zz.display();
		   }
        }
       for(m=0;m<66;m++)
		  for(n=0;n<17;n++)
		  {			 blackgroundz(0,27,m,n,BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			  z.display();
		  }
      
      COORD pos;
			 pos.X=0;
			 pos.Y=27;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);

	char ch;
	ifstream SaveFile("output.txt");                          	//   保存文件到output

	while(!SaveFile.eof())
	{      
		SaveFile.get(ch);                                  	//   保存字符
		printf("%c",ch);
	}
   SaveFile.close();                                       	//   关闭此文件
   printf("\n");


	
}

void gotoxy(int *x1,int *y1,char i,char j,int g)           //  若有修改，光标会自动向右移动一位，g为修改的标志
{       char ch;
        int co,bz=0;
		
     	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
			COORD pos;
			pos.X=*x1+i;                          	// 通过i，j值控制光标的左右上下的移动
			pos.Y=*y1+j;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
			*x1=*x1+i+g;
		    *y1=*y1+j;
}
void position(char sz[17][78],int xz)
{  
	int x=8,y=14;
    int bz=0;
    int ch;
	 HANDLE hIn=GetStdHandle(STD_INPUT_HANDLE); 	//命令行标准输入流句柄，可以通过API函数GetStdHandle获得
     INPUT_RECORD keyRec;  						//INPUT_RECORD结构体的指针。此参数用于储存读入的信息，定义在Windows.h中
	 DWORD res;                               		//DWORD的指针。此参数用于储存读入信息的个数

     DWORD Result;
     INPUT_RECORD Buf;
     hOut=GetStdHandle(STD_OUTPUT_HANDLE);
     hIn=GetStdHandle(STD_INPUT_HANDLE);
     

	 int n;
	 for(n=1;;n++)
	 {   
          ReadConsoleInput(hIn, &keyRec, 1, &res);
		  if (keyRec.EventType==KEY_EVENT)                   	//判断是否为键盘操作
		  { 
			 
			if(n%2==1)
			{   
				if(keyRec.Event.KeyEvent.wVirtualKeyCode==UP)     	//  控制光标的移动
				{
				gotoxy(&x,&y,0,-1,0);
				}
              else if (keyRec.Event.KeyEvent.wVirtualKeyCode==DOWN)
				{
						gotoxy(&x,&y,0,1,0);
				}
			  else if (keyRec.Event.KeyEvent.wVirtualKeyCode==LEFT)
				{
						gotoxy(&x,&y,-1,0,0);
				}
              else if (keyRec.Event.KeyEvent.wVirtualKeyCode==RIGHT)
				{
					gotoxy(&x,&y,1,0,0);
				}
              else if (keyRec.Event.KeyEvent.wVirtualKeyCode==ESC)     //退出程序
				{
					break;
				}
               else if(keyRec.Event.KeyEvent.wVirtualKeyCode>=32&&keyRec.Event.KeyEvent.wVirtualKeyCode<=126)
				{                                                 // 判断键盘上的字符是否为有效字符
				    printf("%c",keyRec.Event.KeyEvent.wVirtualKeyCode);
			        ch=keyRec.Event.KeyEvent.wVirtualKeyCode+32;
			        revise(sz,x,y,ch,xz);                             	// 调用子函数，进行程序的修改
					gotoxy(&x,&y,0,0,1);
				}
			}
		}
}
}

void save(char a[17][78],int tj)  									//  tj 选择统计的类别
{   int m,n,i=0;
    static int j=0;                       						// j的值将不断的被赋予新的值
	if(j>2)  j=j-4;
    int num=0;
	char ch,z,k;                        						//  查找的字节
	fstream SaveFile("output.txt",ios::out);       					//   以追加的形式读写
 
	for(m=0;m<17;m++)
    {   int bz=1;
		for(n=0;n<78;n++)
		{ 
          if(a[m][n]>=32&&a[m][n]<=126||a[m][n]==-86||a[m][n]==-95)
		  {	ch=a[m][n];
		    num++;
			if(tj==0)
		    SaveFile<<ch;
		  }
		  else 
				{	if(bz&&m!=16) 
				      { bz=0;
			            ch='\n';
		                SaveFile<<ch;
						}
				}
		}
	}	  
	      SaveFile.close();
	for(m=0;m<66;m++)
        for(n=0;n<3;n++)
		{    blackground z01(0,24,m,n,BACKGROUND_INTENSITY|BACKGROUND_BLUE);
			 z01.display();  
		} 
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_INTENSITY|BACKGROUND_BLUE);
          COORD pos;
			 pos.X=0;
			 pos.Y=25;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
          printf(" output.txt文件的内容如下：（您修改后的input文件保存在output中）");
          if(tj==0)   open2();
		  if(tj==1)
		  {  
			 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
             COORD pos1;
			 pos1.X=73;
			 pos1.Y=33;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
        	 printf("output.txt 的内存：%d 字节\n",num+17);
			 
		  }
		  if(tj==2)
          {  num=0;
			 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
             COORD pos2;
			 pos2.X=73;
			 pos2.Y=34+j;
             SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
             printf("请输入需要统计的字符:");
			 scanf("%c",&z);
			 scanf("%c",&k);               				//  k是获取回车这个字符的
		     for(m=0;m<17;m++) 
				 for(n=0;n<78;n++)
					 if(a[m][n]==z)         				// 统计出现的次数
                         num++;
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
             COORD pos20;
			 pos20.X=73;
			 pos20.Y=35+j;j=j+2;
             SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos20);
             printf("%c在output.txt中共出现%d次\n",z,num);
          }
          if(tj==4)
		  {  
             for(m=0;m<65;m++)
		        for(n=0;n<17;n++)
				{
					blackground z(0,27,m,n,BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
					z.display();
				} 
		COORD pos1;
		    pos1.X=0;
		    pos1.Y=27;
	    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
        print(a,0,0);                                  	//   刷屏，输出数组
		  }
}
 
void replace(char a[17][78],int xz)                         //  替换子程序
{   
	int m,n;
	static int j=0;                                      //   j将不断地赋予新值
	if(j>2) j=j-4;
	char z,r,s;

	if(xz==0)                                        	//    大小写替换
	{ 
	     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
             COORD pos2;
		        pos2.X=73;
		        pos2.Y=38+j;j++;
         SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
               printf("大小写替换的字符： ");
               scanf("%c",&z);
	           scanf("%c",&s);
				 
    }
    if(xz==1)                                         //  字节替换
	{  
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
     COORD pos2;
		pos2.X=73;
		pos2.Y=38+j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	printf("您需要替换的字符：");
    scanf("%c",&z);
	scanf("%c",&s);
	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
       COORD pos20;
		  pos20.X=73;
		  pos20.Y=39+j;j=j+2;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos20);
	   printf("将字符 %c 替换成字符 ",z);
	   scanf("%c",&r);
	}
    
	for(m=0;m<17;m++)
	{  for(n=0;n<78;n++)
		{   if(xz==1) 
			   {  
				  if(a[m][n]==z)
					  a[m][n]=r;
			   }
			 else if(xz==0)
               {  
				  
				  if(a[m][n]==z&&a[m][n]>=65&&a[m][n]<=90)
                        a[m][n]=a[m][n]+32;                       //   大写换成小写
			      else if(a[m][n]==z&&a[m][n]>=97&&a[m][n]<=122)
			            a[m][n]=a[m][n]-32;                        //  小写换成大写
               }
	   }
	}
	save(a,4);                                                    //     保存新数组
}

void HandleMouse(MOUSE_EVENT_RECORD Mouse,int a[3])
{
  
      if(Mouse.dwButtonState==1)
                                                               //   鼠标点击光标在滚动条上的返回的值
	  {  if(Mouse.dwMousePosition.X>=66&&Mouse.dwMousePosition.X<=68&&
	  ((Mouse.dwMousePosition.Y>1&&Mouse.dwMousePosition.Y<20)
	  ||(Mouse.dwMousePosition.Y>23&&Mouse.dwMousePosition.Y<42))||
	  (Mouse.dwMousePosition.X>=0&&Mouse.dwMousePosition.X<=65&&Mouse.dwMousePosition.Y==22))
	 {
	  a[0]=1;                                                  //   记录鼠标的状态以及x，y值
	  a[1]=Mouse.dwMousePosition.X;
	  a[2]=Mouse.dwMousePosition.Y;
	 }
}

}


void gundong(char sz[17][78],int i1)
{
  int a1[3]={0};
  int m,n,j=0;

  if(i1)
  {
  DWORD Result;
  INPUT_RECORD Buf;

  hOut=GetStdHandle(STD_OUTPUT_HANDLE);
  hIn=GetStdHandle(STD_INPUT_HANDLE);

 do
  {
     ReadConsoleInput(hIn,&Buf,1,&Result);

    if(Buf.EventType==MOUSE_EVENT)                            //    判断是否为鼠标事件
    { HandleMouse(Buf.Event.MouseEvent,a1);
                                                                 //  若是在纵向滚条上
 if(a1[0]==1&&(a1[2]<20&&a1[2]>1)||(a1[2]<42&&a1[2]>23)&&a1[1]>=66&&a1[1]<=68)
		{   
			j=a1[2]-2;
			if(j<18)                                              //   若是在input的滚条上
			{	gundongbj(j,0,-1);

				for(m=0;m<66;m++)                               //   刷屏
				{   for(n=0;n<17;n++)
					{
					 blackground z(0,5,m,n,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
					 z.display();
					}
				}
        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				COORD pos0;
				pos0.X=0;
				pos0.Y=5;
		      	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
                 print(sz,j,0);
			}
            if(j>21)                                            //    若是在output的滚动条上
			{	gundongbj(j,22,-1);
				for(m=0;m<66;m++)                              //   刷屏
				{   for(n=0;n<17;n++)
					{
					 blackground z(0,27,m,n,BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
					 z.display();
					}
				}
        		SetConsoleTextAttribute(GetStdHandle

               (STD_OUTPUT_HANDLE),BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				COORD pos0;
				pos0.X=0;
				pos0.Y=27;
		      	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
                 print(sz,j-22,0);
			}
		}
   else	if(a1[0]==1&&a1[2]==22&&a1[1]>=0&&a1[1]<66)          //    若在横向的滚动条上
	{          gundongbj(0,0,a1[1]);
	           
				for(m=0;m<66;m++)                          //     刷屏
				{   for(n=0;n<17;n++)
					{
					 blackground z(0,5,m,n,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
					 z.display();
					}
				}
        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				COORD pos0;
				pos0.X=0;
				pos0.Y=5;
		      	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
                print(sz,j,a1[1]);
    }
	}



	} while(!(Buf.EventType==MOUSE_EVENT&&Buf.Event.MouseEvent.dwEventFlags==DOUBLE_CLICK));
  }                                       //     循环结束的标志
}

void main(int argc,char *argv[])                       //   主函数
{   int x,y,i1,xz,m,n;
	static int i=0;
    int j=0;
	int a[2];

   
    char sz[17][78];
	xuanzebj(0);                           //     图形界面


HANDLE hOut1,hIn1;
HANDLE hOut,hIn;



for(i1=0;;i1++)
{  gundong(sz,i1);

    
	DWORD Result1;
    INPUT_RECORD Buf1;
 
    hOut1=GetStdHandle(STD_OUTPUT_HANDLE);
    hIn1=GetStdHandle(STD_INPUT_HANDLE);
    int a[2];
    do
	{
       ReadConsoleInput(hIn1,&Buf1,1,&Result1);
       if(Buf1.EventType==MOUSE_EVENT)
		{
		   HandleMouse1(Buf1.Event.MouseEvent,a);         // 返回点击光标的位置
	       x=a[0];
	   	   y=a[1];
		}
	} while(!(Buf1.EventType==MOUSE_EVENT&&Buf1.Event.MouseEvent.dwEventFlags==DOUBLE_CLICK)); 

		 if(x>=82-9&&x<=94-9&&(y==6||y==7))              { open1(sz,j);   gundongbj(0,0,-1);   gundongbj(0,0,0);}          
		 else if(x>=82-9&&x<=94-9&&(y==9||y==10))       {  xz=0;  position(sz,xz);  }      //  覆盖
必须采集到按下esc，而且F2也可以保存
		 else if(x>=82-9&&x<=94-9&&(y==12||y==13))     {  xz=1;  position(sz,xz);  }    // 插入
		 else if(x>=82-9&&x<=94-9&&(y==15||y==16))     {  xz=2;  position(sz,xz);  }    // 删除
		 else if(x>=82-9&&x<=94-9&&(y==18||y==19))      { save(sz,0);       }   
		 else if(x>=97-9&&x<=102-9&&(y==6||y==7))       { save(sz,0);       }                 
		 else if(x>=97-9&&x<=102-9&&(y==9||y==10))      { save(sz,1);       }                   //  统计  
		 else if(x>=97-9&&x<=102-9&&(y==12||y==13))     { save(sz,2);       }
		 else if(x>=97-9&&x<=102-9&&(y==15||y==16))     { replace(sz,0);    }                  //  大小写替换                    
		 else if(x>=97-9&&x<=102-9&&(y==18||y==19))     { replace(sz,1);    }                   //  字符替换  

  }
}

