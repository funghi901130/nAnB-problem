#include <stdio.h>
#include <stdlib.h>

int main()
{
   int answer[4],i,j,q,test[4],a,b,n,number[4];
   while(scanf("%d%d%d%d",&answer[0],&answer[1],&answer[2],&answer[3])!=EOF)
    {
        for(i=0;i<=3;i++)
        {
            number[i]=answer[i];
        }
        scanf("%d",&q);
        for(n=0;n<=q-1;n++)
        {
            a=0;
            b=0;
            for(i=0;i<=3;i++)
            {
                answer[i]=number[i];
                scanf("%d",&test[i]);
            }
            for(i=0;i<=3;i++)
            {
                if(answer[i]==test[i])
                {
                    a++;
                    test[i]=65;
                    answer[i]=65;
                }
            }
                for(i=0;i<=3;i++)
                {
                    for(j=0;j<=3;j++)
                    {
                        if(answer[i]==test[j])
                        {
                                if(answer[i]==65)
                                {
                                    continue;
                                }
                            b++;
                            test[j]=65;
                            answer[i]=65;
                        }
                    }
                }
                printf("%dA%dB\n",a,b);
        }
   }

    return 0;
}
