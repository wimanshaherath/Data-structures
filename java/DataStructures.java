
package com.mycompany.datastructures;

import java.util.Scanner;


public class DataStructures {

  
	public static void main (String[] args) {
	    int[] priceOfPen= new int[5];
	    Scanner in=new Scanner(System.in);
            System.out.print("Enter numbers");
	    for(int i=0;i<priceOfPen.length;i++)
	        priceOfPen[i]=in.nextInt();

	    for(int i=0;i<priceOfPen.length;i++)
		    System.out.print(priceOfPen[i]+" ");
            System.out.println("hello");
	}

    }

