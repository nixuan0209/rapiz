#include<stdio.h>
#include<windows.h>
#include<math.h>
#define N 99999 
//���Hello world�� 
 void sayhello(void){
 printf("Hello world !\n");
 	} 
 	//�������������ֵ 
 int intmax(int *a,int len){
 	int i=0,max=0;
 	for(i=0;i<len;i++){
 			if(a[i]>max)
 			max=a[i];
	 } 
 	return max;
 }
 //������������Сֵ 
  int intmin(int *a,int len){
 	int i=0,min=0;
 	for(i=0;i<len;i++){
 			if(a[i]<min)
 			min=a[i];
		}
 	return min;
 }
 // �󸡵����������ֵ
 float floatmax(float *a,int len){
 	int i;
 	float max=0;
 	for(i=0;i<len;i++){
 		if(a[i]>max)
 			max=a[i];
	 }
	 return max;
 } 
 //�󸡵���������Сֵ 
  float floatmin(float *a,int len){
 	int i;
 	float min=0;
 	for(i=0;i<len;i++){
 		if(a[i]>min)
 			min=a[i];
	 }
	 return min;
 } 
 //���ѧ��
 int num(long int n){
 	printf("ld",n);
 }
 //ð������ 
  void bubble(int *a,int len){
  int i=0;
	int j;
	int t;
	for(i=0;i<len-1;i++) {
		for(j=0;j<len-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				}
			}
		}
	}
	//ѡ������ 
  void selsction(int *a,int len){
  	int i=0;
  	int j;
  	int t;
   for(i=1;i<=9;i++){ 
        for (j=i+1;j<=10;j++){ 
            if(a[i]>a[j])    //���ǰһ�����Ⱥ�һ�������������м����tʵ����ֵ����
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
		}
	} 
  } 
  //�����ж�
  int  leapyear(int year){
  	int flag;
  	if(year<=0)
  		flag=-1;
  		else{
  			if(year%400==0)
        flag=1;
    else
    {
        if(year%4==0&&year%100!=0)
            flag=1;
        else
            flag=0;
    }
		  }
  	return flag;
  }
  //�׳� 
  int factorial(int n){
  	int i,s=1;
  	if(n<=0)
  		s=-1;
  	else{
  	for(i=1;i<=n;i++){
		 s=s*i; 		
	  }
	  }
	  return s;
  }
  //ˮ�ɻ���
  int  narcissistic(int n){
  	int i,j,k,m,flag;
  	if(n<100||n>999)
  		flag=-1;
  	else{
        j=i%10;
        k=i/10%10;
        m=i/100;
        if(j*j*j+k*k*k+m*m*m==i)
        	flag=1;
		else flag =0;    
    }
  }
  //�������鸳ֵ
  int intarray(int len){
  	int i,a[N];
  	int *p=a;
    for(i=0;i<len;i++){
    	scanf("%d",a[i]);
	}
	return *p;	
  } 
  //���������鸳ֵ
  float floatarray(int len){
  	int i;
	float a[N];
  	float *p=a;
    for(i=0;i<len;i++){
    	scanf("%f",a[i]);
	}
	return *p;	
  } 
  //�ַ������鸳ֵ 
  char chararray(int len){
  	int i;
	char a[N];
  	char *p=a;
    for(i=0;i<len;i++){
    	scanf("%c",a[i]);
	}
  	return *p;
  }
  //���Լ��
  int  hcf(int n,int m){
  	int i,temp;
  	if(m<n)  
    { 
        temp=m;
        m=n;
        n=temp;
    }
    for(i=n; i>0; i--)  {
        if(m%i==0 && n%i==0)
        	break;}
  	return i;
  } 
  //��С������ 
  int lcm(int n,int m){
  	int i,temp;
  	if(m<n)  
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(i=m; i>0; i++){
        if(i%m==0 && i%n==0)
        	break;}
  	return i;
  }
  //��������� 
  float tgarea(float a,float b,float c){
  	float s,area;
  	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	if(a+b>c && b+c>a && a+c>b)
	return area;
	else
		return -1;
  	
  }
  //�žų˷���
  void  table(){
  	    int i,j;  // i, j�����л��� 
    for(i=1;i<=9;i++) {
        for(j=1;j<=9;j++)
            // %2d ���ƿ��Ϊ�����ַ������Ҷ��룻�����Ϊ %-2d ��Ϊ�����
            // \tΪtab����
            printf("%d*%d=%2d\t", i, j, i*j);
        printf("\n");
    }

  } 
  //��ӡ*������
  void pyramid(int n){
  	int i,j;
	for (i=1;i<=n;++i) // ���ƽ������Ĳ������������3�㣬��bai�Ըı���du�������
	{
		for (j=1;j<=n-i;++j) // ���ƽ�����ÿ��ǰ������Ŀո���
		printf(" ");
		for (j=1;j<=2*i-1;++j) // ���ƽ�����ÿ����Ҫ��ӡ'*'�ĸ���
			printf("*");
			printf("\n"); // һ������������ϣ����м��������һ��
  } 
}
  //��ӡ*���� 
  int rhomb(int line){
  	 int flag,column;
    int i;  // ��ǰ��
    int j;  // ��ǰ��
    if(line%2==0){  // �ж��Ƿ�������
        flag=0;
        
    }
    else{
	
    column = line;  // ����������������ͬ
    for(i=1; i<=line; i++){  // ����������
        if(i<(line+1)/2+1){  // �ϰ벿�֣������м�һ�У�
            for(j=1; j<=column; j++){  // �����ϰ벿�ֵ�������
                if( (column+1)/2-(i-1)<=j && j<=(column+1)/2+(i-1) ){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }else{  // �°벿��
            for(j=1; j<=column; j++){  // �����°벿�ֵ�������
                if( (column+1)/2-(line-i)<=j && j<=(column+1)/2+(line-i) ){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    flag=1;
	}
	return flag;
  }
  //�����ַ����ִ���
  int findchar(char *a,int len,char fid){
  	int i,flag=0;
  	for(i=0;i<len;i++){
  		if(a[i]==fid)
  			flag++;
	  }
  	return flag;
  } 
  
  //˵���ĵ�
  int about(){
  	int c;
  	printf("*****************RAPIZ.H*****************\n");
  	printf("**************�˷������ٹ���*************\n");
  	printf("||                                     ||\n");
  	printf("||                                     ||\n");
  	printf("||                                     ||\n");
  	printf("||            1  ���ʹ���              ||\n");
  	printf("||                                     ||\n");
  	printf("||            2  ��������              ||\n");
  	printf("||                                     ||\n");
  	printf("||            3  �����ĵ�              ||\n");
  	printf("||                                     ||\n");
  	printf("||            4  ��    ��              ||\n");
  	printf("||                                     ||\n");
  	printf("||            5  ��    ��              ||\n");
  	printf("||                                     ||\n");
  	printf("||                                     ||\n");
  	printf("||                                     ||\n");
  	printf("||                                     ||\n");
  	printf("||              rapiz.h                ||\n");
  	printf("||                                     ||\n");
  	printf("||            ��ѧ�ú�����             ||\n");
  	printf("||                                     ||\n");
  	printf("||                                     ||\n");
  	printf("||                                     ||\n");
  	printf("||                      �汾�ţ�1.01   ||\n");
  	printf("||                       2020.7.15     ||\n");
  	printf("||                      ���ߣ�rapiz    ||\n");
  	printf("||                                     ||\n");
  	printf("***********����� ���л���*************\n");
  	printf("*****************52i.xyz*****************\n");
	  scanf("%d",&c);
	  switch(c){
	  	case 1:system("start http://blog.52i.xyz/index.php/archives/234/");break;
	  	case 2:system("start http://wpa.qq.com/msgrd?v=3&uin=5685429&site=qq&menu=yes");break;
	  	case 4:system("cls");break;
	  	case 3:system("start http://blog.52i.xyz/usr/uploads/2020/07/2307744438.md");break;
		case 5:return 0;
	  	default:return 0;
	  } 
  } 
