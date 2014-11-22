import java.util.Scanner;
import java.math.BigInteger;
import java.io.IOException;

class AutomorphicNumbers
{

	public static void main(String args[])
	{
		BigInteger B , A;

		Scanner input = new Scanner( System.in );

		while( input.hasNext() )
		{
			B = input.nextBigInteger();

			if( B.equals( BigInteger.valueOf(0))|| B.equals(BigInteger.valueOf(1)) )
			{

			System.out.println("Not an Automorphic number.");
			continue;
			}


			String s , s1;

			int len , len1 ;

			s = B.toString();

			len = s.length();

			B = B.pow(2);

			s1 = B.toString();




			if(s1.endsWith(s))
			{
				System.out.println("Automorphic number of "+len+"-digit.");

			}
			else
				System.out.println("Not an Automorphic number.");

		}
	}

}