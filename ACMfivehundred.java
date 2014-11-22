import java.util.Scanner;

import java.math.BigInteger;

class ACMfivehundred
{
	public static void main(String arg[])
	{

		Scanner input=new Scanner(System.in);

		int N;

		BigInteger B;

		while(input.hasNext())
		{

            N=input.nextInt();

            B=BigInteger.ONE;

            for(int i=2;i<=N;i++)
            {

               B=B.multiply(BigInteger.valueOf(i));
			}


			System.out.println(N+"!\n"+B);


		}

	}


}