//#include<stdio.h>
//#include<string.h>
	//int main(){
		//char a[100]={0},num[150]={0};
		//int i,l;
		//char ch='a';
		//gets(a);
		//l=strlen(a);
		//for(i=0;i<l;i++){
			//if(a[i]<='Z'&&a[i]>='A')
				//a[i]=a[i]+32;
			//num[a[i]]++;          //这里的算法有所创新，基本思路是：
								  //先把a[i]变成一个字母，而字母有整数值，再把这个整数值作为num[]中的下标，统计出各个字母数量
		//}
		//for(ch='a';ch<='z';ch++){  //字母间可以比较大小，同样也可以通过++来移位
			//if(num[ch]!=0)
				//printf("%c:%d\n",ch,num[ch]);
		//}
	//}
//#include <iostream>
//using namespace std;
//int sum(int i1,  int i2)
//{
   // int sum = 0;
   // for(int i =i1;i <=i2;i++)
       // sum+=i;
    //return  sum;
//}
//int a ,b;

//int main()
//{
    //cin >> a >> b;
    //cout << sum(a,b);
    //return 0;
//}
//#include <stdio.h>
//#include <math.h>
//using namespace std;
 //const double a =0.4; const double b = 0.49;
//double s,x,y;
//int main()
//{

  //scanf("%lf",&s) ;

   // y = 0.5 * (1 + b*(s-a)+s*s )   ;
    //x = 1/(y+sqrt(y*y-s*s));
   // printf("%lf",x);
    //return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;

//const double a=0.4;const double b = 0.49;
//double x(double s)//,double s1 ,double s2)
//{                 // double x;
         //       double s1 =0.5 * (1 + b*(s - a) + s * s);
        //       double  s2 = 1/( s1+ sqrt(s1*s1 -s*s));

              // x = 1/(0.5 * (1 + b*(s - a) + s * s) + sqrt((0.5 * (1 + b*(s - a) + s * s))*(0.5 * (1 + b*(s - a) + s * s))    -   s * s));
 //   return s2;

//}
//int main()
//{
  //  double s3;
 //   cin >> s3;
 //   cout << x(s3); /   return 0;
 // return 0；
//}
//(0.5 * (1 + b*(s - a) + s * s))

//#include <iostream>
//#include <cstring>
//#include <cstdio>
//using namespace std;

//char a[10001],ch,b[10001]  ;
//int main()
//{
   // gets(a);
  //  for(int i=0;a[i]!='\0';i++)
   // {
     //   if(a[i]>='A' && a[i] <= 'Z')
       //         a[i]+=32;
    //    b[a[i]]++;
  //  }
   // for(char ch = 'a';ch <= 'z';ch++)
      //  {if(b[ch]!=0)
      //      printf("%c: %d\n",ch,b[ch]);
       // }
  //  return 0;
//}

//#include<iostream>
//using namespace std;
//void max(long long arr[], long long n)
//{
	//long long a = 0;
	//for (long long i = 1; i < n; i++)
	//{
	//	if (arr[i] > arr[a])
	//	{
	//		a = i;
	//	}
//	}
//	cout << a + 1;
//}
//void min(long long arr[ ], long long j)
//{
//	long long n = 0;
	//for (long long i = 1; i < j; i++)
	//{
	//	if (arr[i] < arr[n])
	//	{
	//		n = i;
	//	}
	//}
	//cout << n + 1;
//}

//int main()
//{
	//long long n, arr[10000];
	//cin >> n;
	//for (long long i = 0; i < n; i++)
//		cin >> arr[i];
//	max(arr, n);
//	cout << " ";
	//min(arr, n);

	//return 0;
//}
//#include <iostream>
//using namespace std;
//void swap1( int *p1,  int *p2)
//{
  //    int temp = *p1;
  //    *p1 = *p2;
   //   *p2 = temp;
//}



//int main()
//{
 //  int a= 10; int b=20;
 //   swap1(&a,&b);
  //  cout << a<<"  " << b;
//}


//#include <iostream>
//using namespace std;
//void bubblesort(int *arr,int len)
//{
    //for(int i=0;i<len-1;i++)
      //  for(int j = 0;j<len-1-i;j++)
             //   if(arr[j]>arr[j+1])
           // {
             //   int temp = arr[j];
             //   arr[j] =  arr[j+1];
              //  arr[j+1]=temp;
            //}
//}
//void printarray(int*arr2,int len1)
//{
   //  for(int i=0;i<len1;i++)
    //{
     //   cout << arr2[i]<<endl;
 //   }
//}


//int main()
//{
  //  int  arr1[] = {1,3,4,5,6,2,7,8,9,10};
  //  int len = sizeof(arr1)/sizeof(int);
  //  bubblesort(arr1,  len);
  //   printarray(arr1,len);
   // return 0;
//}
//#include <iostream>
//#include <string>

//using namespace std;
//struct student
//{
  //  string name;
  //  int age;
  //  int score;
//};

//int main()
//{
   // struct student s1;
   // s1.name=" fdgdgdg";
  //  s1.age= 27;
  // s1.score=28;
  //  struct student s2 = {" 李四",19,80};

  //  cout << s1.name<<" "<< s1.age<<" "<< s1.score;
  //  cout << s2.name<<" "<< s2.age<<" "<< s2.score;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//struct student
//{
   // string name;
   // int age;
   // int score;
//};

//int main(){
  //  struct student stuarray[3]=
  //  {
    //    {"张三", 18, 100},
    //    {"李斯", 19, 99},
    //    {"王五", 28, 99}
   //  };
   // stuarray[2].name ="赵六";
  //  stuarray[2].age =80;
  //  stuarray[2].score=60;

  //  for(int i= 0;i<3;i++)
   // {
      //  cout << stuarray[i].name<<" "
        //        <<stuarray[i].age<<
       //          " "<<stuarray[i].score<<endl;
   // }
   //  return 0;

//}

//#include <iostream>
//#include <string>
//using namespace std;
//struct student
//{
//	string sname;

	//int score;
//};
//struct teacher
//{
//	string tname;
	//struct student Saaray[5];
//};
//void we(struct teacher taaray[], int len)
//{
//	string name = "ABCDE";
	//for (int i = 0; i < len; i++)
	//{
	//	taaray[i].tname = "Teacher_";
	//	taaray[i].tname += name[i];
	//	for (int j = 0; j < 5; j++)
	//	{
			//taaray[i].Saaray[j].sname = "student_";
			//taaray[i].Saaray[j].sname += name[j];
			//taaray[i].Saaray[j].score = 60;
		//}
	//}
//}
//void pr(struct teacher taaray[], int len)
//{
//	for (int i = 0; i < len; i++)
	//{
	//	cout << taaray[i].tname;
	//	for (int j = 0; j < 5; j++)
	//	{
		//	cout << taaray[i].Saaray[j].sname<<endl;
		//	cout << taaray[i].Saaray[j].score<<endl;
	//	}
//	}
//}
//	int main()
		// {
	//struct teacher t[3];
	//int len = sizeof(t) / sizeof(t[0]); //这里只能用t[0]，别的和本个数组元素所用内存不同
	//we(t, len);
	//pr(t, len);
	//return 0;
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//double f(int x)
//{
//    double a = 1,b = 1;
   // for(int i=0;i<x;i++)
   // {
     //   a *=(1+ sqrt(5))/2;
    //    b*=(1 - sqrt(5))/2;
 //    }
    //  a -=b;
   //   return a/sqrt(5);
//}
//int main()
//{
 //   int n;
   // cin >> n;
 //  cout<<fixed<<setprecision(2)<< f(n);

//return 0;
//}

//#include <iostream>
//using namespace std;
//int a[13],m=0,n=0;
//int main()
//{
   // for(int i=1;i<=12;i++)
   // {
     //   cin>>a[i];
   // }
   // for(int i=1;i<=12;i++)
   // {
        //    m=((n+300-a[i])/100)*100+m;
      //      n=(n+300-a[i])-(n+300-a[i])/100*100;
       // if(n < 0)
      //  {
      //      cout <<'-' <<i ;
      //      return 0;
    //    }
   // }
//cout<<m*1.2+n<<endl;
 //   return 0;
//}

//#include <iostream>
//using namespace std;
//int rm = 0,sp,b,flag=1,endm;

//int main()
//{


 //   for(int i=1;i<=12;i++)
 // {
   //   rm += 300;
      // cin >> sp;
      //  rm -= sp;
     //       if(rm<0)
      //          {
      //            flag = 0;
      //             endm =i;
         //           break;
       //         }
          //        b += rm /100;
         //          rm %= 100;
        //  }
         //  if(flag==1)
           //  {  rm += b * 120;
         //       cout << rm;
                  //     }
         //   else  cout << -endm;

  //return 0;
//}

//#include <stdio.h>
//using namespace std;
//#define PI  3.14
//int main()
//{
//    char ch;
//    ch = getchar();
//
//     switch(ch)
//     {
//     case 'A':{
//         double r;
//         scanf("%lf",&r);
//         double A1 = PI * r *r*0.25;
//         double A2 = PI *r*r*r*r*0.015625;
//         if(r<0)
//                printf("input errorr");
//        else printf("%.2lf %.2lf",A1,A2);
//     }
//        break;
//    case 'B':{
//        double b,h;
//        scanf("%lf %lf",&b,&h);
//         double B1 = b*h;
//         double B2 = b*h*h*h/12;
//         if(b<0||h<0)
//                printf("input errorr");
//        else printf("%.2lf %.2lf",B1,B2);
//    }
//        break;
//     }
//     return 0;
//}
//
//#include <iostream>
//using namespace std;
//void countdown(int n)
//{
//    cout << "counting down" << n << "(n at "<<&n<<")" <<endl;
//    if(n> 0)
//        countdown(n-1);
//    cout << n << ":kaboom!" << "(n at "<<&n<<")"<<endl;
//}
//int main()
//{
//    countdown(4);
//    return 0;
//}

//#include <iostream>
//const int len =66;
//const int Divs =6;
//void subdivide(char arr[],int high,int low,int level);
//int main()
//{
//    char ruler[len];
//    for(int i;i<len-2;i++)
//        ruler[i]=' ';
//    ruler[len-1]='\0';
//    int max1 = len-2;
//    int min1 = 0;
//    ruler[0]=ruler[len-2]='|';
//
//    for(int i=1;i<=Divs;i++)
//    {
//        subdivide(ruler,max1,min1,i);
//          std::cout<<ruler<<std::endl;
//
//
//    }
//    return 0;
//}
//    void subdivide(char arr[ ],int high,int low,int level)
//{
//    if(level==0)
//        return ;
//    int mid =(low + high)/2;
//    arr[mid]='|';
//    subdivide(arr,mid,low,level - 1);
//    subdivide(arr,high,mid,level-1);
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int N, i = 1;
//
//
//    cin >> N;
//    while (N > i)
//    {
//        N = N - i;
//        i++;
//    }
//    if (i % 2 == 0)
//        cout << N <<"/"<<(i - N + 1);
//    else
//        cout << (i - N + 1) <<"/"<< N;
//
//    return 0;
//
//}
//为了丰富人民群众的生活、支持某些社会公益事业，北塔市设置了一项彩票。该彩票的规则是：
//
//每张彩票上印有 77 个各不相同的号码，且这些号码的取值范围为 1\sim331∼33。
//每次在兑奖前都会公布一个由七个各不相同的号码构成的中奖号码。
//共设置 77 个奖项，特等奖和一等奖至六等奖。
//兑奖规则如下：
//
//特等奖：要求彩票上 77 个号码都出现在中奖号码中。
//一等奖：要求彩票上有 66 个号码出现在中奖号码中。
//二等奖：要求彩票上有 55 个号码出现在中奖号码中。
//三等奖：要求彩票上有 44 个号码出现在中奖号码中。
//四等奖：要求彩票上有 33 个号码出现在中奖号码中。
//五等奖：要求彩票上有 22 个号码出现在中奖号码中。
//六等奖：要求彩票上有 11 个号码出现在中奖号码中。
//注：兑奖时并不考虑彩票上的号码和中奖号码中的各个号码出现的位置。例如，中奖号码为 23\ 31\ 1\ 14\ 19\ 17\ 1823 31 1 14 19 17 18，则彩票 12\ 8\ 9\ 23\ 1\ 16\ 712 8 9 23 1 16 7 由于其中有两个号码（2323 和 11）出现在中奖号码中，所以该彩票中了五等奖。
//
//现已知中奖号码和小明买的若干张彩票的号码，请你写一个程序帮助小明判断他买的彩票的中奖情况。
//
//输入格式
//输入的第一行只有一个自然数 nn，表示小明买的彩票张数；
//
//第二行存放了 77 个介于 11 和 3333 之间的自然数，表示中奖号码；
//
//在随后的 nn 行中每行都有 77 个介于 11 和 3333 之间的自然数，分别表示小明所买的 nn 张彩票。
//
//输出格式
//依次输出小明所买的彩票的中奖情况（中奖的张数），首先输出特等奖的中奖张数，然后依次输出一等奖至六等奖的中奖张数。
//
//#include <iostream>
//using namespace std;
//int a,n,m[34],d[8],b;
//int main()
//{
//    cin >> n;
//    for(int i=1;i<=7;i++)
//        {
//            cin >> a;
//            m[a] = 1;
//
//            }
//    for(int i=1;i<=n;i++)
//        {
//            int sum=0;
//            for(int j=1;j<=7;j++)
//            {
//
//                cin >> b;
//                if(m[b]==1)
//                    sum++;
//            }
//            d[8-sum]++;
//        }
//    for(int i=1;i<=7;i++)
//        cout << d[i] << " ";
//    return 0;
//#include <iostream>
//using namespace std;
//int x,k,N,i=1;
//int main()
//{
//    cin >> N;
//    while(i<=100)
//    {
//        if(N-364*i <=0)
//            break;
//        if((N-364*i)%1092==0)
//                x=i;
//        i++;
//    }
//
//    k=(N-364*x)/1092;
//
//    cout << x<<"\n"<<k;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int numa,numb;
//int main()
//{
//    cin >> numa;
//    while(numa!=0)
//    {
//        numb = numb*10+numa%10;
//        numa /=10;
//    }
//    cout << numb;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Box{
//        public:
//            double length;
//            double breadth;
//            double height;
//
//};
//int main()
//{
//
//    Box box1;
//    Box box2;
//    double volume =0.0;
//
//    box1.length = 0.7;
//    box1.breadth= 0.7;
//    box1.height =0.7;
//    volume = box1.length * box1.breadth * box1.height;
//    cout << volume<<"\n";
//    box2.length=0.6;
//    box2.breadth=0.6;
//    box2.height=0.6;
//    volume =box2.length * box2.breadth * box2.height;
//    cout << volume;
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class clock{
//                    private:
//                                int hour,minute,second,h,m,s;
//                    public:
//                                clock(int h=0, int m = 0, int s=0){hour=h;minute=m;second=s;}
//                                void settime();
//                                void showtime();
//                                void interval();
//};
//void clock::settime(){
//                cin>>hour>>minute>>second;
//}
//void clock::showtime()
//{
//    cout <<hour<<":"<<minute<<":"<<second<<endl;
//}
//void clock::interval(){
//                cin >>h>>m>>s;
//                int a =abs(h-hour);
//                int b=abs(m-minute);
//                int c=abs(s-second);
//                int totalseconds=a * 3600 + b * 60 + c;
//                cout << totalseconds;
//}
//int main()
//{
//    clock a;
//    a.settime();
//    a.showtime();
//    a.interval();
//    return 0;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//string p;
////char*p=new char [12];
////char p[12];
//class student{
//    private:
//            char *id;
//            char *name;
//            float math;
//            float physics;
//            float english;
//    public:
//            student( char *i="11111111111",char*n="jjj" ,float m=0,float p=0,float e=0)
//             {
//                int len1,len2;
//                 len1=strlen(i);
//                 id=new char(len1+1);
//                 strcpy(id,i);
//
//                  len2=strlen(n);
//                name=new char(len2+1);
//                strcpy(name,n);
//                 math=m;
//                 physics=p;
//                 english=e;
//             }
//             ~student();
//             void setinformation();
//             float calculate();
//             void showstu();
//             char getid();
//            char getname();
//            float getmath();
//            float getphysics();
//            float getenglish();
////            bool is();
//};
//          //  :id(i),name(n),math(m),physics(p),english(e){}
//
//            student::~student(){}
////           void student::setinformation()
////           {
////                    cin>>id>>name>>math>>physics>>english;
////           }
//           float student::calculate()
//           {
//               float T=0;
//                 T= math + physics + english;
//                    return T;
//           }
//           char student::getid(){cout<<id;}
//            char student::getname(){cout<<name;}
//            float student::getmath(){return math;}
//            float student::getphysics(){return physics;}
//            float student::getenglish(){return english;}
//            void student::showstu()
//           {
//               if(p==id)
////                                cout<<getid()<<endl<<getname()<<" "<<getmath()<<" "<<getphysics()<<" "<<getenglish();
//                            {cout<<"identity:"<<id<<'\n'<<"name:"<<name<<'\n'<<"math:"<<math<<'\n'<<"physics:"<<physics<<'\n'<<"English:"<<english<<endl;}
//           }
//        int main()
//        {
//            student o("00000000000","ZZZ",100,200,200);
//            student s[5]={
//                    student("1234567890Q","ZAZ",100,88,99),
//                    student("1234567890R","DW",100,250,250) ,
//                    student("1234567890E","BST",100,99,88),
//                    student("1234567890T","MBG",250,250,250),
//                    student("1234567890W","DGK",100,100,100)
//            };
//        for(int i=0;i<5;i++)
//        {
//            cout<<s[i].calculate()<<endl;
//        }
//      for(int i=0;i<5;i++)
//        {
//                   float temp;float sum;
//                   temp=s[i].calculate();
//                   sum=s[i+1].calculate();
//              if(temp>sum)
//              {
//                  float Remp = s[i].calculate();
//                  float temp = s[i].calculate();
//                 float sum  =s[i+1].calculate();
//                 temp = sum;
//                 sum=temp;
//                   o = s[i] ;
//                    s[i]=s[i+1];
//                    s[i+1]=o;
//             }
//              }
//              cout <<"\n"<<"The highest total mark:"<< s[4].calculate()<<endl;
//                cin>>p;
//            for(int i=0;i<5;i++)
//            {
//                s[i].showstu();
//            }
//            return 0;
//        }

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Mystring
//{
//private:
//       char *p;
//public:
//     Mystring(char *s );
//
//     Mystring(Mystring &m);
//
//   ~Mystring();
//     void show();
//};
//Mystring::Mystring(char *s )
//{
//         int len;
//         len=strlen(s);
//		p=new char[len+1];
//		strcpy(p,s);
//     }
//Mystring::Mystring(Mystring &m)
//    {
//         int len;
//         len=strlen(m.p);
//		p=new char[len+1];
//		strcpy(p,m.p);
//     }
//Mystring:: ~Mystring(){delete p;}
//void Mystring::show()
//	{
//		cout<<p<<endl;
//	}
//
//int main()
//{
//    Mystring s1("zaz");
//    Mystring s2(s1);
//    s1.show();
//    s2.show();
//    return 0;
//}
//#include <stdio.h>
//using namespace std;
//const  double E0 = 193000;const double n=7.1;const double fy =205.00;
//double a;
//double d( double q,double m)
//{       double temp=1.0;
//        for(int i=0;i<n;i++)
//    {
//        temp *= (m/fy);
//    }
//    double  ans= m/E0 + 0.0002*temp-q;
//    return ans;
//}
//int main()
//{
//    double u;
//    scanf("%lf",&u);
//    int i=0;
//   for(double i=0;;i++)
//   {
//       if(d(u,i)*d(u,i+1)<0)
//           {
//                printf("%.2lf",(2*i+1)/2.0);
//                break;
//           }
//   }
//
//    return 0;
//}
//这是一个求函数方程的题
//#include <stdio.h>
//#include <math.h>
//using namespace std;
//
//double force(double fy,double A,double length)
//{
//    double U=0.49*(length-0.4);
//    double T=0.5*(1+U+length*length);
//    double J=sqrt(T*T-length*length);
//    double K=1.0/(T+J);
//    double ans= K*A*fy;
//   return ans;
//}
//void sort1(int m,double y[ ])
//{
//        for(int i=0;i<m;i++)
//        {   double temp=y[i];
//            if(y[i+1]>y[i])
//            {   y[i]=y[i+1];
//                y[i+1]=temp;
//            }
//        }
//}
//void print(int b,double L[])
//{
//    for(int i=0;i<b;i++)
//                printf("%lf""\n",L[i]);
//}
//int main()
//{
//
//            int u;
//            scanf("%d",&u);
//            double s,d,c;
//            double a[u];
//    for(int i=0;i<u;i++)
//    {
//         scanf("%lf%lf%lf",&s,&d,&c);
//            a[i]=force(s,d,c);
//    }
//    sort1(u,a);
//    print(u,a);
//    return 0;
//}
// 这是一个回文字符判断的程序
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    cout<<"Enter a string:";
//    string s;
//    cin>>s;
//    getline(cin,s);
//    int low=0;
//    int high= s.length() - 1;
//    bool isPalindrome=true;
//    while(low<high)
//    {
//        if(s[high]!=s[low])
//        {
//            isPalindrome=false;
//            break;
//        }
//        low++;
//        high++;
//    }
//    if(isPalindrome)
//        cout<<s<<"The string is a Palindrome"<<endl;
//    else
//        cout<<s<<"The string is not a Palindrome"<<endl;
//
//    return 0;
//}

// 计算字母的两个程序
//#include<stdio.h>
//#include<string.h>
	//int main(){
		//char a[100]={0},num[150]={0};
		//int i,l;
		//char ch='a';
		//gets(a);
		//l=strlen(a);
		//for(i=0;i<l;i++){
			//if(a[i]<='Z'&&a[i]>='A')
				//a[i]=a[i]+32;
			//num[a[i]]++;          //这里的算法有所创新，基本思路是：
								  //先把a[i]变成一个字母，而字母有整数值，再把这个整数值作为num[]中的下标，统计出各个字母数量
		//}
		//for(ch='a';ch<='z';ch++){  //字母间可以比较大小，同样也可以通过++来移位
			//if(num[ch]!=0)
				//printf("%c:%d\n",ch,num[ch]);
		//}
	//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    int num[150]={0};//这里注意ASKII有多少个数
//    string s;
//    cin >> s;
//    int Final = s.size() ;
//    for (int i = 0; i < Final; i++)
//    {
//        if (s[i] <= 'Z' && s[i] >= 'A')
//            s[i] += 32;
//        char ch=s[i];
//        num[ch]++;
//    }
//    for (char ch='a';ch<='z';ch++)
//    {
//        if(num[ch]!=0)
//            cout<<ch<<":"<<num[ch]<<endl;
//    }
//    return 0;
//}
//输出小于平均数的值
//#include <iostream>
//using namespace std;
//int a[11],s,x,i;
//
//int main()
//{
//    for(i=1;i<=10;i++)
//        cin>>a[i];
//    for(i=1;i<=10;i++)
//        {s+=a[i];}
//        x = s/10;
//    for(i=1;i<=10;i++)
//        if(a[i]< x)
//            cout << a[i] << " ";
//    return 0;
//}
//杨辉三角
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int a[11][11];
//int main()
//{
//
//    for(int i=1;i<=10;i++)
//    {
//        a[i][1]=1;
//        a[i][i]=1;
//    }
//    for(int i=2;i<=10;i++)
//       {for(int j=1;j<=10;j++)
//            a[i][j]=a[i-1][j] + a[i-1][j-1];
//       }
//    for(int i=1;i<=10;i++)
//       {for(int j=1;j<=i;j++)
//            printf("%5d",a[i][j]);
//        cout << endl;
//       }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//template<typename T>
//void selectionsort(T *lis,int listsize)
//{
//    for(int i=0;i<listsize;i++)
//     {
//
//T min1 = lis[i];
//        int currentminindex=i;
//    for(int j=i+1;j<listsize;j++)
//    {
//        if(min1>lis[j])
//        {
//            min1=lis[j];
//            currentminindex=j;
//        }
//    }
//        if(currentminindex!=i)
//        {
//            lis[currentminindex]=lis[i];
//            lis[i]=min1;
//        }
//
//       }
//}
//template<typename T>
//void printarray(const T lis[],int listsize)
//{
//    for(int i=0;i<listsize;i++)
//    {
//        cout<<lis[i]<<" ";
//    }
//    cout<<endl;
//}
//int main()
//{
//    int list1[ ] = {3,5,1,0,2,8,7};
//    selectionsort(list1,7);
//    printarray(list1,7);
//    double list2[ ]={3.5,4.5,2.5,1.5,1.2,2.4};
//    selectionsort(list2,6);
//    printarray(list2,6);
//    return 0;
//}
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//class String {
//public:
//    String(const char* str = NULL);
//    String(const String& other);
//    ~String();
//    String& operator = (const String& other);
//    void show()
//    {
//        cout << m_data << endl;
//    }
//private:
//    char* m_data;
//};
//
//String::String(const char* str = NULL)
//{
//    if (str == NULL)
//    {
//        m_data = new char[1];
//        *m_data = '\0';
//    }
//    else
//    {
//        int length = strlen(str);
//        m_data = new char[length + 1];
//        strcpy(m_data, str);
//    }
//
//    String::String(const String &other1)
//    {
//        int length = strlen(other.m_data);
//        m_data = new char[length + 1];
//        strcpy(m_data, other.m_data);
//    }
//    String::~String()
//    {
//        delete[] m_data;
//    }
//    String::String& operator = (const String & other)
//    {
//        if (this == &other)
//            return *this;
//        else
//        {
//            int length = strlen(other.m_data);
//            m_data = new char[length + 1];
//            strcpy(m_data, other.m_data);
//            return *this;
//        }
//    }
//    int main()
//    {
//        String str1("ZAZ"), str2;
//        str1.show();
//        str2 = str1;
//        str2.show();
//        String str3(str1);
//        str3.show();
//        return 0;
//    }

//#include <iostream>
//template<typename T>
//void selctionsort(T lis[],int size1)
//{
//    for(int i=0;i<size1;i++)
//    {
//        T currentMin=lis[i];
//        int currentMinindex=i;
//        for(int j=i+1;j<size1;j++)
//        {
//            if(currentMin>lis[j])
//            {
//                currentMinindex=j;
//                currentMin=lis[j];
//            }
//        }
//        if(currentMinindex!=i)
//        {
//            lis[currentMinindex]=lis[i];
//            lis[i]=currentMin;
//
//        }
//    }
//}
//template<typename T>
//void printArray(const T lis[],int size1)
//{
//    for(int i=0;i<size1;i++)
//    {
//        std::cout<<lis[i]<<" ";
//
//    }
//    std::cout<<std::endl;
//}
//
//int main()
//{
//    // std::cout <<"zaz dgk";
//        int arr[]={2,1,3,4,1,7,6,8,7,9};
//
//        selctionsort(arr,10);
//        printArray(arr,10);
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//template<typename T>
//void selectionsort(T *lis,int listsize)
//{
//    for(int i=0;i<listsize;i++)
//     {
//
//T min1 = lis[i];
//        int currentminindex=i;
//    for(int j=i+1;j<listsize;j++)
//    {
//        if(min1>lis[j])
//        {
//            min1=lis[j];
//            currentminindex=j;
//        }
//    }
//        if(currentminindex!=i)
//        {
//            lis[currentminindex]=lis[i];
//            lis[i]=min1;
//        }
//
//       }
//}
//template<typename T>
//void printarray(const T lis[],int listsize)
//{
//    for(int i=0;i<listsize;i++)
//    {
//        cout<<lis[i]<<" ";
//    }
//    cout<<endl;
//}
//int main()
//{
//    int list1[ ] = {3,5,1,0,2,8,7};
//    selectionsort(list1,7);
//    printarray(list1,7);
//    double list2[ ]={3.5,4.5,2.5,1.5,1.2,2.4};
//    selectionsort(list2,6);
//    printarray(list2,6);
//    return 0;
//}

//在函数体内部交换了两个形参指针本身的值，未能影响实参
////#include <iostream>
////using namespace std;
////void myswap(int* p,int* q)
////{
////    int* tmp = p;
////    p =q;
////    q = tmp;
////}
////int main()
////{
////    int a = 5,b = 10;
////    int *r = &a,*s =&b;
////    cout<<"交换前：a ="<<a<<", b ="<<b<<endl;
////    myswap(r,s);
////    cout<<"交换后：a ="<<a<<", b ="<<b<<endl;
////    return 0;
////}

////在函数体内部交换了两个形参指针地址的内容
//#include <iostream>
//using namespace std;
//void myswap(int* p,int* q)
//{
//    int tmp = *p;
//    *p =*q;
//    *q = tmp;
//}
//int main()
//{
//    int a = 5,b = 10;
//    int *r = &a,*s =&b;
//    cout<<"交换前：a ="<<a<<", b ="<<b<<endl;
//    myswap(r,s);
//    cout<<"交换后：a ="<<a<<", b ="<<b<<endl;
//    return 0;
//}

传参的实例
//在函数体内部交换了两个形参指针本身的值，未能影响实参
//#include <iostream>
//using namespace std;
//void myswap(int* p,int* q)
//{
//    int* tmp = p;
//    p =q;
//    q = tmp;
//}
//int main()
//{
//    int a = 5,b = 10;
//    int *r = &a,*s =&b;
//    cout<<"交换前：a ="<<a<<", b ="<<b<<endl;
//    myswap(r,s);
//    cout<<"交换后：a ="<<a<<", b ="<<b<<endl;
//    return 0;
//}

//在函数体内部交换了两个形参指针地址的内容
//#include <iostream>
//using namespace std;
//void myswap(int* p,int* q)
//{
//    int tmp = *p;
//    *p =*q;
//    *q = tmp;
//}
//int main()
//{
//    int a = 5,b = 10;
//    int *r = &a,*s =&b;
//    cout<<"交换前：a ="<<a<<", b ="<<b<<endl;
//    myswap(r,s);
//    cout<<"交换后：a ="<<a<<", b ="<<b<<endl;
//    return 0;
//}

////引用传参
//#include <iostream>
//using namespace std;
//void myswap(int& p,int& q)
//{
//    int tmp = p;
//    p = q;
//    q = tmp;
//}
//int main()
//{
//    int a = 5,b = 10;
//
//    cout<<"交换前：a ="<<a<<", b ="<<b<<endl;
//    myswap(a,b);
//    cout<<"交换后：a ="<<a<<", b ="<<b<<endl;
//    return 0;
//}
// #include<iostream>
// using namespace std;
// int money,cost,mama,flag=1,monthofdeath;
// int main ()
// {
//     for(int i=1;i<=12;i++)
//     {
//         money+=300;
//         cin>>cost;
//         money-=cost;
//            if(money<0)
//            {
//               flag=0;
//               monthofdeath=i;
//               break;
//            }
//         mama+=money/100;
//         money%=100;
//     }
//     if(flag==1)
//     {
//         money+=mama*120;
//         cout<<money;
//     }
//     else
//     {
//         cout<<-monthofdeath;
//     }
//     return 0;
// }
//#include <iostream>
//using namespace std;
//int a[11],s,x,i;

//int main()
//{
 //   for(i=1;i<=10;i++)
    //    cin>>a[i];
   // for(i=1;i<=10;i++)
   //     {s+=a[i];}
   //     x = s/10;
   // for(i=1;i<=10;i++)
    //    if(a[i]< x)
   //         cout << a[i] << " ";
  //  return 0;
//}
// #include <stdio.h>
// #include <string.h>
// using namespace std;

// void sum(char a[ ],char b[],int l)
// {

//     for(int i=0;i<l;i++)
//     {
//         b[a[i]]++;
//     }
//     }
// void print(char p[])
// {
//             for(int i=' ';i<='~';i++)
//     {
//         if(p[i]!=0)
//         {
//             printf("%c:%d\n",i,p[i]);
//         }
//     }
// }
//     int main()
//     {
//         char c[150],d[128]={0};
//         gets(c);
//         int len=strlen(c);
//         sum(c,d,len);
//         print(d);

//         return 0;
//     }

