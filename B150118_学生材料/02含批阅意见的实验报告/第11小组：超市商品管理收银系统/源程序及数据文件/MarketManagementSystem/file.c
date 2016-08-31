#include<stdio.h>
#include "welcome.h"
#include<stdlib.h>
#include <time.h>
int ifexist(char code[])
{
    int a = 0;
  goods read;
    FILE *fp;
    if(fp = fopen(".\\1.txt","r")){
        while(!feof(fp)){
            fscanf(fp,"%s %s %lf %lf %d",read.code,read.name,&read.price,&read.chengben,&read.num);
            if(!strcmp(code,read.code))
            {
                fclose(fp);
                a = 1;
                break;
            }
        }
    }
    else{
        printf("文件加载错误，请检查数据库文件");
    }
    if(a==0)
        printf("条码不存在，请重新输入\n");
    return a;
}
//扫码 返回查询到的条码信息
struct goods readcode(char code[]){
    goods read;
    FILE *fp;
    if(fp = fopen(".\\1.txt","r")){
        while(!feof(fp)){
            fscanf(fp,"%s %s %lf %lf %d",read.code,read.name,&read.price,&read.chengben,&read.num);
            if(!strcmp(code,read.code))
            {
                fclose(fp);
                break;
            }
        }
    }
    else{
        printf("文件加载错误，请检查数据库文件");
    }
    return read;
}
//显示现有的全部商品
void showgoods(){
    goods read;
    FILE *fp;
    if(fp = fopen(".\\1.txt","r")){
            printf("   条码           名称       售价      成本     存量   \n");
        while(!feof(fp))
        {

            fscanf(fp,"%s %s %lf %lf %d",read.code,read.name,&read.price,&read.chengben,&read.num);
            printf("%10s   %10s %10.2f %10.2f   %10d\n",read.code,read.name,read.price,read.chengben,read.num);
        }
    }else{
        printf("文件加载错误，请检查数据库文件");
    }

}
//添加新的商品
int addgoods(char code[],char name[],double price,double chengben,int num){
        FILE *fp;
         if(fp = fopen(".\\1.txt","a+")){
            fprintf(fp,"%s %s %lf %lf %d\n",code,name,price,chengben,num);
            fclose(fp);
            return 1;
         }else{
        printf("文件加载错误，请检查数据库文件");
        return 0;
         }
}







//写入条码信息，创建订单
long neworder(){
    int id;
    goods read;
    srand( (unsigned)time( NULL ) );
    id = rand()%(9999999-1000000+1)+1000000; //随机产生订单号

}

struct goods * readorder(char orderid[]){
    FILE *fp;
    if(fp = fopen(".\\2.txt","r"))
    {

    }else{
        printf("文件加载错误，请检查数据库文件");
    }
};
