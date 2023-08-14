/*

BASICSHELL NT 1.0 version 0.1
Base on EasyX Core
Copyright(c) WRH(BASICSHELL NT)
Copyright(c) Create.Inc & Grassinternet.Inc(EasyX Core)

This version is a beta version and may be unstable
*/

//Includes
#include <string>
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

//Varibles
	string product_key = "ponduacretctedbnyirasnertcareietdngsicn";
	string task_key = "Ta#skf&Ini^sI??/ed!";
	string Tubor_key = "verywe11!easy0s2.o";
	string pin = "p@22w0r01";
	
	
	string password="";
	
	int power = 0;
	int tubor = 0;
	int bootp = 0;
	int fastmode = 0;
	int turnto = 1;
	int tubdev = 0;
	int screenon = 0;
	
	int maxp = 3000;
	int mem = 5000;
	int core = 5;
	int tread = 12;
	int memory = 4096; 
	
	string cpu="Virtual CPU";
	int cpuclock=1024; 
	string hddname="Vitural Hard Disk Drive";
	int hdd=100;
	
	string keyboard="Virtual Kerboard";
	string mouse="Virtual Mouse";
	
	string tmp;
	string prompt="BASICSHELL NT -$";
	string command="";
	
	int fssize=100000;
	
	

//Funtions

void clear();

void intro()
{
	clear();
	cout << "欢迎使用BASICSHELL NT！" << endl;
	cout << "BASICSHELL NT是BASICSHELL的新成员！" << endl;
	cout << "BASICSHELL NT基于EasyX Core内核" << endl;
	cout << "更强大,更稳定！" << endl;
	Sleep(5000);
	clear();
	cout << "BASICSHELL NT的三大新功能：" << endl;
	cout << "- EasyX Core内核" << endl; 
	cout << "- 虚拟系统" << endl;
	cout << "- 文件系统" << endl;
	Sleep(5000);
	clear();
	int a;
	while(true)
	{
		clear();
		cout << "BASICSHELL NT介绍:" << endl;
		cout << "1.EasyX Core内核" << endl;
		cout << "2.虚拟系统" << endl;
		cout << "3.文件系统" << endl;
		cout << "4.BASICSHELL NT与BASICSHELL的区别" << endl;
		cout << "5.退出" << endl;
		cin >> a;
		if(a==5)
		{
			clear();
			break;
		}
		else if(a==1)
		{
			clear();
			cout << "EasyX Core内核" << endl;
			cout << "BASICSHELL NT抛弃了BASICKERNEL内核" << endl;
			cout << "使用EasyX Core内核" << endl;
			cout << "更强大,更稳定！" << endl;
			system("pause");
		}
		else if(a==2)
		{
			clear();
			cout << "虚拟系统" << endl;
			cout << "BASICSHELL NT提供了虚拟系统" << endl;
			cout << "因此与外部计算机相隔离" << endl;
			system("pause");
		}
		else if(a==3)
		{
			clear();
			cout << "文件系统" << endl;
			cout << "BASICSHELL NT提供了文件系统，可以更方便的管理你的文件" << endl;
			cout << endl << "文件系统工作原理" << endl; 
			cout << "索引          文件系统末端\n |                 |\n |                 |\n[0][1][2][3][4][5][6][7][8][9][10]\n\\___可访问区域__/\\_不可访问区域_/\n\n\n索引\n ├──文件名(字符串型)\n ├──文件内容(字符串型)\n └──是否使用(布尔值型)" << endl;
			system("pause");
		}
		else if(a==4)
		{
			clear();
			cout << "BASICSHELL NT与BASICSHELL的区别" << endl;
			cout << "类别\\系统	        BASICSHELL		BASICSHELL NT" << endl;
			cout << "=============================================================" << endl;
			cout << "内核	            	BASICKERNEL		EasyX Core" << endl;
			cout << "编写语言		Python			C++" << endl;
			cout << "用户数量		多用户(3.3+)		单用户" << endl;
			cout << "默认用户		System			@manager #64" << endl;
			cout << "适用系统		Windows/Linux/MacOS	Windows" << endl;
			cout << "=============================================================" << endl;
			cout << "虚拟系统		N			Y" << endl;
			cout << "文件管理		Y(3.2+)			Y" << endl;
			cout << "文件系统		N			Y" << endl;
			cout << "=============================================================" << endl;
			cout << "面向领域		家用			商业" << endl;
			cout << "=============================================================" << endl;
			system("pause");
		}
	}
}

void calc()
{
	int a,b,o;
	double res=0;
	bool err=false;
	cout << "请输入第一个数:";
	scanf("%d",&a);
	cout << "请输入第二个数:";
	scanf("%d",&b);
	cout << "请输入运算符" << endl;
	cout << "[1]加法" << endl;
	cout << "[2]减法" << endl;
	cout << "[3]乘法" << endl;
	cout << "[4]除法" << endl; 
	scanf("%d",&o);
	if(o==1)
	{
		res=a+b;
	}
	else if(o==2)
	{
		res=a-b;
	}
	else if(o==3)
	{
		res=a*b;
	}
	else if(o==4)
	{
		if(b==0)
		{
			cout << "错误:0不能为除数" << endl;
			err=true;
		}
		else
		{
			res=a/b;
		}
	}
	if(err==false)
	{
		cout << "运算结果:" << res << endl;
	}

}

void timer()
{
	int time;
	cout << "请输入时间(单位:秒):";
	cin >> time;
	for(int i=time;i>0;i--)
	{
		cout << "\r 计时器:剩余" << i << "秒                                               "; 
		Sleep(1000);
	}
	cout << "\r时间到!                                                           " << endl;
}

void tool()
{
	string cmd;
	while(true)
	{
		cout << "BASICSHELL NT TOOL -$";
		getline(cin,cmd);
		if(strcmp(cmd.c_str(),"calc")==0)
		{
			calc();
		}
		else if(strcmp(cmd.c_str(),"timer")==0)
		{
			timer();
		}
		else if(strcmp(cmd.c_str(),"time")==0)
		{
			time_t now = time(0);
			char* dt = ctime(&now);
			cout << dt << endl;
		}
		else if(strcmp(cmd.c_str(),"titicks")==0)
		{
			time_t now = time(0);
			cout << now << endl;
		}
		else if(strcmp(cmd.c_str(),"help")==0)
		{
			cout << "calc       计算器" << endl;
			cout << "timer      计时器" << endl;
			cout << "time       显示时间" << endl;
			cout << "titicks    时间戳(从1970年到现在的秒数" << endl;
			cout << "help       显示此帮助" << endl;
			cout << "exit       退出小工具" << endl;
		}
		else if(strcmp(cmd.c_str(),"exit")==0)
		{
			break;
		}
		else if(strcmp(cmd.c_str(),"")==0)
		{
			
		}
		else
		{
			cout << "没有小工具" << cmd << endl;
		}
	}
}










void clear();

struct ntfiles
{
	string name;
	string content;
	bool used;
};
ntfiles file[722500];
int endoffs=0;

void setpsw()
{
	string _psw,newpsw,retype;
	clear();
	while(true)
	{
		if(password=="")
		{
			break;
		}
		else
		{
			cout << "请输入密码:";
			getline(cin,_psw);
			if(_psw==password)
			{
				break;
			}
			else
			{
				cout << "密码错误" << endl;
			}
		}
	}
	while(true)
	{
		cout << "请设置新密码:";
		getline(cin,newpsw);
		if(newpsw=="")
		{
			break;
		}
		else
		{
			clear();
			cout << "请确认新密码:";
			getline(cin,retype);
			if(newpsw==retype)
			{
				break;
			}
			else
			{
				cout << "密码不匹配" << endl;
			}
		}
	}
	cout << "正在更改密码......";
	password=newpsw;
	cout << "完成" << endl;
}

void init()
{
	if(fssize>722500)
	{
		clog << "[Warning] File system is too big,adjusting...";
		Beep(920,750);
		fssize=722500;
		clog << "Done" << endl;
	}
    for(int i=0;i<fssize;i++)
    {
    	file[i].used=false;
	}
}


void edit(string name)
{
	cout << endl << "NTEDIT v1.0" << endl;
	cout << "被编辑的文件名:" << name << endl;
	bool found=false;
	for(int i=0;i<=endoffs;i++)
	{
		if(file[i].name==name)
		{
			found=true;
			break;
		}
	}
	if(found)
	{
		char input[]="";
		string con="";
		cout << "输入_ok_来完成编辑" << endl;
		cout << "输入_clear_来清空内容" << endl;
		while(true)
		{
			gets(input);
			if(strcmp(input,"_clear_")==0)
			{
				con="";
				cout << "清除" << endl; 
			}
			else if(strcmp(input,"_ok_")==0)
			{
				break;
			}
			else
			{
				con+=strcat(input,"\n");
			}

			
		}
		found=false;
		cout << "写入" << name << "......"; 
		for(int i=0;i<=endoffs;i++)
		{
			
			if(file[i].name==name)
			{
				cout << "完成" << endl;
				found=true;
				file[i].content=con;
				break;
			}
		}
		if(found)
		{
			cout << "编辑完成" << endl; 	
		}
		else
		{
			cout << "出错" << endl;
			cout << "编辑失败" << endl;
		}
		
	}
	else
	{
		cout << "错误:未找到文件" << endl;
	}
	cout << endl;
}










void filemgr()
{
	cout << "BASICSHELL NT FILEMGR 1.0" << endl;
	cout << "请输入命令来控制系统" << endl;
	string filemgr_cmd="";
	while(true)
	{
		cout << "BASICSHELL NT FILEMGR -$";
		getline(cin,filemgr_cmd);
		if(strcmp(filemgr_cmd.c_str(),"create")==0)
		{
			string newfilename;
			cout << "请输入文件名:";
			getline(cin,newfilename);
			if(newfilename!="")
			{
				bool success=false;
				int empty_index=-1;
				for(int i=0;i<fssize;i++)//寻找未使用的空间 
				{
					clog << "文件系统索引" << i << ":";
					if(file[i].used==false)
					{
						clog << "空闲" << endl;
						success=true;
						empty_index=i;
						break;
					}
					else
					{
						clog << "已使用" << endl;
					}
				}
				if(success)
				{
					bool dupname=false;
					for(int i=0;i<fssize;i++)
					{
						if(file[i].name==newfilename)
						{
							clog << "在索引" << i << "处发现一个重名文件:" << file[i].name << endl;
							dupname=true;
						}
					}
					
					if(dupname==false)
					{
						file[empty_index].name=newfilename;
						file[empty_index].used=true;
						if(endoffs<empty_index)
						{
							clog << "将文件系统末端扩展至" << empty_index << endl;
							endoffs=empty_index;
						}
						cout << "创建成功" << endl;
					}
					else
					{
						cout << "错误:文件重名" << endl;
					}
					
				}
				else
				{
					cout << "错误:文件系统没有空闲索引" << endl;
				}
				
			}
			else
			{
				cout << "文件名不能为空" << endl;
			}
		}
		else if(strcmp(filemgr_cmd.c_str(),"ls")==0)
		{
			int total=0;
			for(int i=0;i<10000;i++)
			{
				if(file[i].used==true)
				{
					cout << file[i].name << endl;
					total++;
				}
			}
			cout << "总共" << total << "个文件" <<endl;
		}
		else if(strcmp(filemgr_cmd.c_str(),"del")==0)
		{
			string filename;
			cout << "请输入要删除的文件名:";
			getline(cin,filename);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "正在寻找索引" << i << "......"; 
				if(file[i].name==filename && file[i].used==true)
				{
					clog << "发现文件" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "未发现文件" << endl;
				}
			}
			if(found)
			{
				file[index].used=false;
				file[index].name="";
				file[index].content="";
				cout << "删除成功" << endl;
			}
			else
			{
				cout << "找不到文件" << endl; 
			}
		}
		else if(strcmp(filemgr_cmd.c_str(),"fsstr")==0)
		{
			cout << "文件系统结构" << endl;
			cout << "当前文件系统末端:" << endoffs << endl;
			cout << "文件系统最大索引:" << fssize << endl;
			for(int i=0;i<=endoffs;i++)
			{
				cout << "索引" << i << ":";
				if(file[i].used==true)
				{
					cout << "已使用 - " << file[i].name;
				}
				else
				{
					cout << "空闲";
				}
				cout << endl;
			}
		}
		else if(strcmp(filemgr_cmd.c_str(),"help")==0)
		{
			cout << "create      创建文件" << endl;
			cout << "ls          查看所有文件" << endl;
			cout << "del         删除文件" << endl;
			cout << "fsstr       显示文件系统结构" << endl;
			cout << "help        显示此帮助" << endl;
			cout << "defs        整理文件系统" << endl;
			cout << "move        移动文件系统末端" << endl;
			cout << "edit        编辑文件" << endl;
			cout << "open        打开文件" << endl;
			cout << "format      格式化文件系统" << endl;
			cout << "copy        创建文件副本" << endl;
			cout << "search      搜索文件" << endl;
			cout << "exit        退出文件管理器" << endl;
		}
		else if(strcmp(filemgr_cmd.c_str(),"defs")==0)
		{
			cout << "正在整理文件系统......" << endl;
			int moveindex=0;
			for(int i=0;i<endoffs;i++)
			{
				if(file[i].used==false)
				{
					moveindex++;
				}
				if(moveindex>0)
				{
					if(moveindex+i<=endoffs)
					{
						file[i].name=file[i+moveindex].name;
						file[i].content=file[i+moveindex].content;
						file[i].used=file[i+moveindex].used;
				
						file[i+moveindex].name="";
						file[i+moveindex].content="";
						file[i+moveindex].used=false;
					}

				}

			}
			cout << "整理完成" << endl; 
		}
		else if(strcmp(filemgr_cmd.c_str(),"move")==0)
		{
			int newend;
			cout << "请输入将文件系统末端移动到的索引:";
			scanf("%d",&newend);
			if(newend<=fssize)
			{
				bool foundfile=false;
				bool sure=false;
				for(int i=newend;i<10000;i++)
				{
					if(file[i].used==true)
					{
						foundfile=true;
					}
				}
				if(foundfile)
				{
					cout << "警告！索引" << newend << "及后端有文件，如果移动，那些文件将不可访问" << endl;
					cout << "确定要继续吗？(Y/N)";
					char temp;
					cin >> temp;
					if(temp=='y' || temp=='Y')
					{
						sure=true;
					}
					else
					{
						sure=false;
					}
				}
				else
				{
					sure=true;
				}
				if(sure)
				{
					clog << "将原文件系统末端" << endoffs << "移动到" << newend << endl;
					endoffs=newend;
				}
			}
			else
			{
				cout << "错误:超出文件系统最大范围" << endl;
			}
			
		}
		else if(strcmp(filemgr_cmd.c_str(),"edit")==0)
		{
			string name;
			cout << "请输入要编辑的文件名:";
			getline(cin,name);
			edit(name);
		}
		else if(strcmp(filemgr_cmd.c_str(),"open")==0)
		{
			string name;
			cout << "请输入要打开的文件名:";
			getline(cin,name);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "正在寻找索引" << i << "......"; 
				if(file[i].name==name && file[i].used==true)
				{
					clog << "发现文件" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "未发现文件" << endl;
				}
			}
			if(found)
			{
				cout << "读入" << file[index].name << "......" << endl;
				cout << file[index].content << endl;
			}
			else
			{
				cout << "找不到文件" << endl;
			}
			
		}
		else if(strcmp(filemgr_cmd.c_str(),"format")==0)
		{
			cout << "警告！所有数据将被清空！" << endl;
			cout << "你确定要这样吗？(Y/N)";
			char sure;
			cin >> sure;
			if(sure=='Y' || sure=='y')
			{
				cout << "正在格式化" << endl;
				for(int i=0;i<fssize;i++)
				{
					clog << "\r正在重置索引" << i << "......                                         "; 
					file[i].content="";
					file[i].name="";
					file[i].used=false;
				}
				cout << endl;
				clog << "正在初始化文件系统末端为0......";
				endoffs=0;
				clog << "完成" << endl;
				cout << "格式化完成" << endl;
			}
		}
		else if(strcmp(filemgr_cmd.c_str(),"copy")==0)
		{
			string filename;
			string newfilename;
			cout << "请输入要创建副本的文件名:";
			getline(cin,filename);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "正在寻找索引" << i << "......"; 
				if(file[i].name==filename && file[i].used==true)
				{
					clog << "发现文件" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "未发现文件" << endl;
				}
			}
			if(found)
			{
				newfilename=filename+"的副本";
				bool success=false;
				int empty_index=-1;
				for(int i=0;i<fssize;i++)//寻找未使用的空间 
				{
					clog << "文件系统索引" << i << ":";
					if(file[i].used==false)
					{
						clog << "空闲" << endl;
						success=true;
						empty_index=i;
						break;
					}
					else
					{
						clog << "已使用" << endl;
					}
				}
				if(success)
				{
					bool dupname=false;
					for(int i=0;i<fssize;i++)
					{
						if(file[i].name==newfilename)
						{
							clog << "在索引" << i << "处发现一个重名文件:" << file[i].name << endl;
							dupname=true;
						}
					}
		
					if(dupname==false)
					{
						file[empty_index].name=newfilename;
						file[empty_index].used=true;
						file[empty_index].content=file[index].content;
						if(endoffs<empty_index)
						{
							clog << "将文件系统末端扩展至" << empty_index << endl;
							endoffs=empty_index;
						}
							cout << "创建成功" << endl;
						}
					else
					{
						cout << "错误:文件重名" << endl;
					}
					
					}
				else
				{
					cout << "错误:文件系统没有空闲索引" << endl;
				}
			}
			else
			{
				cout << "找不到文件" << endl;
			}
		}
		else if(strcmp(filemgr_cmd.c_str(),"search")==0)
		{
			string searchfile;
			cout << "请输入要搜索的文件名:";
			getline(cin,searchfile);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "正在寻找索引" << i << "......"; 
				if(file[i].name==searchfile && file[i].used==true)
				{
					clog << "发现文件" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "未发现文件" << endl;
				}
			}
			if(found)
			{
				cout << "找到文件" << file[index].name << ",在索引" << index << endl;
			}
			else
			{
				cout << "找不到文件" << endl;
			}
		}
		else if(strcmp(filemgr_cmd.c_str(),"exit")==0)
		{
			break;
		}
		else if(strcmp(filemgr_cmd.c_str(),"")==0)
		{
			
		}
		else
		{
			cout << "命令" << filemgr_cmd << "无效" << endl;
		}
	}
}

void nt_logo()
{
	cout << " _______     ___    ______   _   ______                                                         _       _____" << endl;
	cout << "|   __  |   / _ \\  /  ____| | | /  ____|  _____        _____                 ___    _   _____  | |     |  _  |" << endl;
	cout << "|  |__| |  | |_| | | (___   | | | |      /       |    /     \\ |     |       |   \\  | | |_   _| | |     | | | |" << endl;
	cout << "|   ___  \\ |  _  |  \\__  \\  | | | |      \\_____  |__  |_____/ |     |       | |\\ \\ | |   | |   | |     | | | |" << endl;
	cout << "|  |___| | | | | |  ___)  | | | | |____        \\ |  | |       |     |       | | \\ \\| |   | |   | |  _  | |_| |" << endl;
	cout << "|________| |_| |_| |_____/  |_| \\______| ______/ |  | \\______ |____ |____   |_|  \\___|   |_|   |_| (_) |_____|" << endl;
	cout << "                                                               基于EasyX Core   BETA 1" << endl;
}

int pup(){
	power = 1;
	if(Tubor_key.substr(5,6) == "1"){
		tubor = 0;
	}else if(Tubor_key.substr(5,6) == "2"){
		cout << "Tubor error!\n\n";
		return 0;
	}else if(Tubor_key.substr(5,6) == pin.substr(6,7)){
		cout << "Tubor is opening!\n\n";
		return 0;
	}
	return 1;
}

int boot(){
	if(power != 1){
		cout << "No powering!\n\n";
		return 0;
	}else if(product_key != "ponduacretctedbnyirasnertcareietdngsicn"){
		cout << "Product key error!\nCkeck who product your devices!\nMaybe you bought not right devices!\n\n";
		return 0;
	}else if(task_key != "Ta#skf&Ini^sI??/ed!"){
		cout << "No enough authority to do tasks\nPlease concact your devices admin or company engineer!\n\n";
		return 0;
	}else if(Tubor_key != "verywe11!easy0s2.o"){
		cout << "Tubor error!\n\nPlease close tubor or the system is hacked!\n\n";
		return 0;
	}else if(pin != "p@22w0r01"){
		cout << "pin error!\n\nplease buy a right pin password!\n\n";
		return 0;
	}else{
		bootp = 1;
		return 1;
	}
}

int bootic(){
	if(bootp == 1){
		if(turnto == 1){
			maxp = 1024;
			mem = 2048;
			core = 2;
			tread = 4;
		}else if(turnto == 2){
			cout << "You opened the 'Tubor hardware' choosen , do you want to make the processors and memorys to be the most powerful?\n";
			cout << "[If you don't kown what are you doing , input 'no']\n\n";
			cout << "-----> ";
			cin >> tmp;
			if(tmp == "yes"){
				tubdev = 1;
				return 0;
			}else{
				maxp = 1024;
				mem = 2048;
				core = 2;
				tread = 4;
			}
		}
	}
	return 1;
}

int harc(){
	if(maxp >= 3100){
		cout << "Processor clock time too much!\n\n";
		return 0;
	}else if(maxp >= 5100 && tubdev == 1){
		cout << "Processor clock time too much!\nPlease make the clock time be smaller...\n\n";
		return 0;
	}else if(mem >= 5100){
		cout << "Memory write time too much!\n\n";
		return 0;
	}else if(mem >= 5100 && tubdev == 1){
		cout << "Memory write time too much!\nPlease make the memory write time be smaller...\n\n";
		return 0;
	}else if(core >= 5){
		cout << "Processor core number error!\n\n";
		return 0;
	}else if(core >= 5 && tubdev == 1){
		cout << "Processor core number error!\nPlease make the processor core number be smaller...\n\n";
		return 0;
	}else if(tread >= 12){
		cout << "Processor tread error!\n\n";
		return 0;
	}else if(tread >= 12 && tubdev == 1){
		cout << "Processor tread error!\nPlease make the processor tread be smaller...\n\n";
		return 0;
	}else{
		screenon = 1;
		return 1;
	}
	
}

int nt_login()
{
	int res=1;
	if(password=="")
	{
		res=0;
	}
	else
	{
		char input_password[]="";
		char _password[101];
		cout << "请输入密码:";
		gets(input_password);
		strcpy(_password,password.c_str());
		if(strcmp(_password,input_password)==0)
		{
			res=0;
		}
		else
		{
			cout << "你无法登录BASICSHELL NT，请检查你的密码是否正确，或无意中按下了Caps Lock键" << endl;
		} 
	}

	return res;
}




void clear()
{
	system("cls");
}

void psw();







void cmdhelp(string command)
{
	if(strcmp(command.c_str(),"shutdown")==0)
	{
		cout << "关闭BASICSHELL NT" << endl;
		cout << "输入此命令后，BASICSHELL NT将会关闭" << endl ;
	}
	else if(strcmp(command.c_str(),"lock")==0)
	{
		cout << "锁定用户" << endl;
		cout << "输入此命令后，将会返回登录界面，必须需要密码才能再次进入" << endl;
		cout << "注意:密码为空时无效" << endl;
	}
	else if(strcmp(command.c_str(),"help")==0)
	{
		cout << "帮助" << endl;
		cout << "输入此命令后，将会显示BASICSHELL NT的帮助" << endl;
	}
	else if(strcmp(command.c_str(),"devlst")==0)
	{
		cout << "设备列表" << endl;
		cout << "输入此命令后，将会显示设备列表" << endl;
	}
	else if(strcmp(command.c_str(),"clear")==0)
	{
		cout << "清屏" << endl;
		cout << "输入此命令后，控制台窗口将会清除" << endl; 
	}
	else if(strcmp(command.c_str(),"filemgr")==0)
	{
		cout << "文件管理器" << endl;
		cout << "文件管理器可以管理文件系统上的文件，也可以管理文件系统" << endl;
	}
	else if(strcmp(command.c_str(),"setpsw")==0)
	{
		cout << "设置密码" << endl;
		cout << "此命令可以帮助你添加、更改、删除密码" << endl;
	}
	else if(strcmp(command.c_str(),"cmdhelp")==0)
	{
		cout << "命令帮助" << endl;
		cout << "此命令可以显示指定命令的帮助" << endl;
	}
	else if(strcmp(command.c_str(),"tool")==0)
	{
		cout << "小工具" << endl;
		cout << "BASICSHELL NT小工具" << endl;
	}
	else if(strcmp(command.c_str(),"intro")==0)
	{
		cout << "BASICSHELL NT介绍" << endl;
		cout << "此命令可以显示BASICSHELL NT介绍";
	}
	else if(strcmp(command.c_str(),"about")==0)
	{
		cout << "关于BASICSHELL NT" << endl;
		cout << "显示BASICSHELL N的版本号，版权，开发者等信息" << endl;
	}
	else
	{
		cout << "命令" <<command << "无效" << endl;
	}
}





void process(string command)
{
	if(strcmp(command.c_str(),"lock")==0)
	{
		clear();
		psw();
	}
	else if(strcmp(command.c_str(),"help")==0)
	{
		cout << "shutdown  关闭BASICSHELL NT" << endl;
		cout << "lock      锁定用户" << endl;
		cout << "help      显示此帮助" << endl;
		cout << "devlst    设备列表" << endl;
		cout << "clear     清屏" << endl;
		cout << "filemgr   文件管理器" << endl;
		cout << "setpsw    设置密码" << endl;
		cout << "cmdhelp   命令帮助" << endl;
		cout << "tool      小工具" << endl;
		cout << "intro     BASICSHELL NT介绍" << endl;
		cout << "about     关于BASICSHELL NT" << endl;
	}
	else if(strcmp(command.c_str(),"devlst")==0)
	{
		cout << "设备列表" << endl;
		cout << "处理器:" << cpu << endl;
		cout << "	时钟频率:" << cpuclock/1024 << "GHz" << endl; 
		cout << "	核数:" << core << endl;
		cout << "	线程数:" << tread << endl << endl;
		cout << "内存:" << memory/1024 << "GB" << endl;
		cout << "硬盘:" << hddname << "[" <<hdd << "MB"<< "]" << endl;
		cout << "软盘:无" << endl;
		cout << "CD-ROM:无" << endl;
		cout << endl << "其他设备" << endl;
		cout << "	键盘:" << keyboard << endl;
		cout << "	鼠标:" << mouse << endl;
	}
	else if(strcmp(command.c_str(),"")==0)
	{
	}
	else if(strcmp(command.c_str(),"clear")==0)
	{
		clear(); 
	}
	else if(strcmp(command.c_str(),"filemgr")==0)
	{
		filemgr(); 
	}
	else if(strcmp(command.c_str(),"setpsw")==0)
	{
		setpsw(); 
	}
	else if(strcmp(command.c_str(),"cmdhelp")==0)
	{
		string cmd;
		cout << "请输入命令:";
		getline(cin,cmd);
		cmdhelp(cmd);
	}
	else if(strcmp(command.c_str(),"tool")==0)
	{
		tool();
	}
	else if(strcmp(command.c_str(),"intro")==0)
	{
		intro();
		clear();
	}
	else if(strcmp(command.c_str(),"about")==0)
	{
		nt_logo();
		cout << "BASICSHELL NT 1.0 [Version 0.1] [Beta 1]" << endl;
		cout << "BASICSHELL NT版权归WRH所有" << endl;
		cout << "EasyX Core版权归Create.Inc & Grassinternet.Inc所有" << endl;
		cout << endl;
		cout << "开发者名单:" << endl;
		cout << "BASICSHELL NT:WRH" << endl;
		cout << "EasyX Core:Create.Inc & Grassinternet.Inc" << endl;
		cout << endl << "鸣谢 @草方块grass block 的大力支持！" << endl;
	}
	else
	{
		cout << "命令" <<command << "无效" << endl;
	}
}

void shell()
{
	nt_logo();
	cout << "登录的用户:@manager #64" << endl; 
	cout << endl << endl << "现在已进入BASICSHELL NT，请输入命令控制你的系统" << endl << endl;
	cout << "[提示]立即输入help查看帮助" << endl << endl;
	while(true)
	{
		cout << "@manager #64 -" << prompt;
		
		getline(cin,command);
		if(strcmp(command.c_str(),"shutdown")==0)
		{
			cout << "正在退出......" << endl;
			break;
		}
		else
		{
			process(command);
		}
		
	}

}











void psw()
{
	nt_logo();
	while(nt_login())
	{
		
	}
	clear();
	shell();
}

void load()
{
	cout << "BASICSHELL NT 1.0 Beta 1 [Version 0.1]" << endl;
	cout << "Base-on EasyX Core" << endl;
	cout << "BASICSHELL NT Copyright(c) WRH" << endl;
	cout << "EasyX Core Copyright(c) Create.Inc & Grassinternet.Inc" << endl;
	Beep(920,200);
	cout << "[Warning]This version is a beta version and may be unstable" << endl;//正式版把这个去掉 
	cout << endl << "Now loading BASICSHELL NT..." << endl;
	cout << "Initializing..." << endl;
	init();
	cout << "Loading UI......" << endl;
	psw();
}

int screen(){
	if(screenon == 0){
		cout << "Unkown error!\n\n";
		return 0;
	}else{
		cout << "EasyOS 2.0 starting up...\nbased on easycore(R)\nProduct : bta-0010\n\nEFI...\n\nCreate.Inc & Grassinternet.Inc\n\n";
		return 1;
	}
	
}


int EFI(){
	string loc = "//Covering 1.0//corefuntion//efi";
	cout << "EasyOS 2.0 starting up...\nbased on easycore(R)\nProduct : bta-0010\n\nEFI...\n\nCreate.Inc & Grassinternet.Inc\n\n";
	load(); 
}



int main(){
	system("cmd.exe /c title BASICSHELL NT 1.0 [Version 0.1] [Beta 1]");
	if(pup()){
		if(boot()){
			if(bootic()){
				if(harc()){
					if(screen()){
						EFI();
					}
				}
			}
		}
	}
	return 0;
}
