#include<stdio.h>

int main()
{
    double L,L1,L2,W,w,R;
    int n,t;

    scanf("%d",&n);

    for(t=1; t<=n; t++)
    {
        scanf("%lf",&R);

        L=R*5;
        L1=0.45*L;
        L2=.55*L;
        W=.6*L;
        w=W/2;

        printf("Case %d:\n",t);

        printf("-%.0lf %.0lf\n",L1,w);
        printf("%.0lf %.0lf\n",L2,w);
        printf("%.0lf -%.0lf\n",L2,w);
        printf("-%.0lf -%.0lf\n",L1,w);

    }
    return 0;
}

