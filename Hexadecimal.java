/*Write a program in java to initialize an integer variable ‘n’ and print the hexadecimal
equivalent of the 3rd most significant bytes of binary representation of ‘n’*/
package assignment1;


import java.lang.Math;

public class Hexadecimal {

	public static void main(String[] args) {
		int n=123456789;
        String H=Integer.toHexString(n);
        System.out.println(H.charAt(2));
	
	}

}
