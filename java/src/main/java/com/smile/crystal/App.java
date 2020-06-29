package com.smile.crystal;

import java.sql.Struct;
import java.util.ArrayList;
import java.util.List;

/**
 * Hello world!
 *
 */
public class App 
{
    public static TestStruct structL;

    public static void main( String[] args )
    {
        System.out.println( "Java : Hello World!" );

        System.loadLibrary("cxx");

        JNITest aTest = new JNITest();

        aTest.testPrint();
        System.out.println("cxx calc: a + b = " + aTest.testAdd(2, 98));

        List<Integer> tmpList = new ArrayList<>();
        tmpList.add(999);
        TestStruct tmpStruck = new TestStruct(1,2.0,"收到了分开");
        aTest.testObject1(tmpStruck, "ff束带", tmpList);
        System.out.println();


        List<TestStruct> tmpStruckList = new ArrayList<>();
        tmpStruckList.add(new TestStruct(22, 3.0, ""));
        tmpStruckList.add(new TestStruct(23, 3.0, ""));
        tmpStruckList.add(new TestStruct(24, 3.0, ""));
        aTest.testObject2(tmpStruckList);
        for(TestStruct aStruct : tmpStruckList){
            System.out.println("java testObject2 " + aStruct.a);
        }
        System.out.println();


        TestStruct cStruct = aTest.testReturn();
        System.out.println("java  testReturn " + cStruct.a + " " + cStruct.b + " "  + cStruct.c + " " + cStruct.d.size());





    }
}
