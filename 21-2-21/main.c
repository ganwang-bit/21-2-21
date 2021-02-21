//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//    time_t tm=time(NULL);
//    printf("%s",ctime(&tm));
//    return 0;
//}
//#include<setjmp.h>
//#include<signal.h>
//#include<signal.h>
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    fflush(stdin);
//    printf("%d %c",n,getchar());
//    fflush(stdout);
//    return 0;
//}
//#include<stdio.h>
//struct arr
//{
//    int data;
//    int address;
//    int next;
//};
//void rv(struct arr*p,int n)
//{
//    struct arr*l=p,*r=p+n-1;
//    int tmp,ar;
//    while(l<r)
//    {
//        tmp=l->data;
//        l->data=r->data;
//        r->data=tmp;
//        ar=l->address;
//        l->address=r->address;
//        r->address=ar;
//        l++;
//        r--;
//    }
//}
//int main()
//{
//    int artmp,n,reverse,i,j,count=0,flag;
//    scanf("%d%d%d",&artmp,&n,&reverse);
//    struct arr arr1[100005],arr2[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&flag);
//        arr1[flag].address=flag;
//        scanf("%d%d",&arr1[flag].data,&arr1[flag].next);
//    }
//    i=0;
//    while(artmp!=-1)
//    {
//
//                arr2[i].address=arr1[artmp].address;
//                arr2[i].data=arr1[artmp].data;
//                arr2[i].next=arr1[artmp].next;
//                count++;
//        artmp=arr2[i].next;
//        i++;
//    }
//    for(i=0;i<count/reverse&&reverse!=1;i++)
//    {
//        rv(arr2+i*reverse,reverse);
//    }
//    for(i=0;i<count-1;i++)
//    {
//        arr2[i].next=arr2[i+1].address;
//    }
//    arr2[count-1].next=-1;
//    for(i=0;i<count;i++)
//    {
//        if(arr2[i].next!=-1)
//            printf("%05d %d %05d\n",arr2[i].address,arr2[i].data,arr2[i].next);
//        else
//            printf("%05d %d %d\n",arr2[i].address,arr2[i].data,arr2[i].next);
//    }
//    return 0;
//}
