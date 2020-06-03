package com.smile.crystal;

public class JNITest {

    public native void testPrint();
    public native int testAdd(int a, int b);

    public static void load(){
        System.loadLibrary("cxx");
        JNITest aTest = new JNITest();
        aTest.testPrint();
        System.out.println("a + b = " + aTest.testAdd(100, 99));
    }

}
