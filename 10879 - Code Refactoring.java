import java.util.Scanner;
class 10879-Code Refactoring
{
	public static void main(String args[])
	{

		    long i,a,b,c,d,j,k,l,m,n,x,y,t;
		    Scanner in=new Scanner(System.in);
		    t=in.nextLong();
		    for(i=1;i<=t;i++)
		    {    a=0;b=0;c=0;d=0;
		        n=in.nextLong();
		        for(k=2;k<=n/2;k++)
		        {
		            for(l=k+1;l<=n/2;l++)
		            if((k*l)==n)
		            {
		                a=k;
		                b=l;
		            break;
		            }

		        }
		    for(x=2;x<=n/2;x++)
		    {
		        for(y=x+1;y<=n/2;y++)
		        {
		            if(((x*y)==n)&&(a!=x&&b!=y))
		            {
		                c=x;
		                d=y;
		                break;
		            }
		        }
		    }

		    //printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i,n,a,b,c,d);
		    }
	}

}


