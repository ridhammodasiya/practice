#include<stdio.h>
main()
{
	int w,l,h,total;
	printf("enter w value:");
	scanf("%d",&w);
	printf("enter l value:");
	scanf("%d",&l);
	printf("enter h value:");
	scanf("%d",&h);
	
	total=2*(w*l+h*l+h*w);
	printf("area of rectangle prism is:%d",total);
	
}
