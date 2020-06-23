package com.smile.crystal;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Java : Hello World!" );

        System.loadLibrary("cxx");

        JNITest aTest = new JNITest();
        aTest.testPrint();
        System.out.println("cxx calc: a + b = " + aTest.testAdd(2, 98));


    }
}
