#include<iostream>  
#include<algorithm>//sort()函数包含在algorithm头文件里面   
using namespace std;  
  
int main(){  
    //freopen("input.txt","r",stdin);  
    //freopen("output.txt","w",stdout);  
    int n,m,i,j,count;  
    bool test;  
    int a[100],b[100];  
    while(scanf("%d%d",&n,&m)!=EOF){  
            if(n==0&&m==0)  
               return 0;  
            for(i=0;i<n;i++)  
               scanf("%d",&a[i]);  
              
            for(i=0;i<m;i++)  
                scanf("%d",&b[i]);  
                  
                sort(a,a+n);//第一个参数是要排序的区间首地址，第二个参数是区间尾地址的下一地址。默认是升序   
                count=0;//count用来记录a，b数组里面相同元素的个数   
            for(i=0;i<n;i++){  
                test=true;  
                for(j=0;j<m;j++)  
                        if(a[i]==b[j]){  
                               test=false;  
                               break;          
                                       }   
                if(test){ //只有在数组b中没有与a[i]相同元素时才输出a[i]   
                   printf("%d ",a[i]);  
                   count++;  
                   }  
            }  
                if(count==0)//如果相同元素个数为0，则输出NULL   
                    printf("NULL");  
                    printf("\n");            
                                   
            }  
      
    return 0;  
    }  
