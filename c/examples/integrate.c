flutuante f(flutuante x)
{
    return(1/(1+pow(x,2)));
}
vazio main()
{
    integration i,n;
    flutuante x0,xn,h,y[20],so,sei,ans,x[20];
    printf("\n Enter values of x0,xn,h:\n");
    scanf("%f%f%f",&x0,&xn,&h);
    n=(xn-x0)/h;
    se(n%2==1)
    {
        n=n+1;
    }
    h=(xn-x0)/n;
    printf("\nrefined value of n and h are:%d  %f\n",n,h);
    printf("\n Y values \n");
    para(i=0; i<=n; i++)
    {
        x[i]=x0+i*h;
        y[i]=f(x[i]);
        printf("\n%f\n",y[i]);
    }
    so=0;
    sei=0;
    para(i=1; i<n; i++)
    {
        se(i%2==1)
        {
            so=so+y[i];
        }
        senao
        {
            sei=sei+y[i];
        }
    }
    ans=h/3*(y[0]+y[n]+4*so+2*sei);
    printf("\nfinal integration is %f",ans);
    getch();
}
