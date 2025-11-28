#include<stdio.h>
#include<string.h>
int  c_vow(char s[],int i){
    if(s[i]=='\0'){
        return 0;
    }
    int cnt= c_vow(s,i+1);
    if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o' ||s[i]=='u'){
        return cnt+=1;
    }else if(s[i]=='A' ||s[i]=='E' || s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
        return cnt+=1;
    } else{
        return cnt;
    }
    
    
}

int main()
{
    char str[201];
    fgets(str,201,stdin);
    int result=c_vow(str,0);
    printf("%d",result);
    return 0;
}