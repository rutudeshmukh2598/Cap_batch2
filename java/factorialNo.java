package com.java.Basics;

import java.util.Scanner;

public class A3_FactorialOfN
 {

   public static void main(String[] args) {

   		// Take scanner for inputs
				Scanner sc = new Scanner(System.in);

						System.out.println("Enter a Number");
								int n = sc.nextInt();
										
												int result = 1;
														
																for (int i = 1; i <= n; i++) {
																			result *= i;
																					}
																							
																									System.out.println("Result = "+ result);
																											
																													sc.close();

																														}
																														}

