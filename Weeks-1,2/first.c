#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((((a+b)-c)==d) ||(((b+c)-a)==d)||((((a+c)-b))==d)){
        printf("YES");
    }
    else if((((a-b)+c)==d)||(((b-a)+c)==d)||(((a-c)+b)==d)||(((c-a)+b)==d)||(((b-c)+a)==d)||(((c-b)+a)==d)){
        printf("YES");
    }
    else if((((a*b)+c)==d)||(((b*c)+a)==d)||(((a*c)+b)==d)){
        printf("YES");
    }
    else if((((a+b)*c)==d)||(((b+c)*a)==d)||(((a*c)+b)==d)){
        printf("YES");
    }
    else if((((a*b)-c)==d)||(((a*c)-b)==d)||(((b*c)-a)==d)){
        printf("YES");
    }
    else if((((a-b)*c)==d)||(((b-a)*c)==d)||(((b-c)*a)==d)||(((c-b)*a)==d)||(((a-c)*b)==d)||(((c-a)*b)==d)){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}