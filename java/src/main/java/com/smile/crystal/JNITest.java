package com.smile.crystal;

import java.util.List;

public class JNITest {


    public native void testPrint();
    public native int testAdd(int a, int b);

    public native void testObject1(TestStruct tempStruct, String tempString, List<Integer> testArray);
    public native void testObject2(List<TestStruct> testArray);


    public native TestStruct testReturn();



}
